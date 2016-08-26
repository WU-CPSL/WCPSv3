/*
 * Copyright (c) 2008 Johns Hopkins University.
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written
 * agreement is hereby granted, provided that the above copyright
 * notice, the (updated) modification history and the author appear in
 * all copies of this source code.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS `AS IS'
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, LOSS OF USE, DATA,
 * OR PROFITS) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
*/

/**
 * @author Chieh-Jan Mike Liang <cliang4@cs.jhu.edu>
 */

#include "crc.h"
#include "At45db.h"
#include "Timer.h"
#include <unistd.h>

module At45dbP
{
  provides {
    interface Init;
    interface At45db;
  }
}

implementation
{
  enum { // requests
    IDLE,
    R_READ,
    R_READCRC,
    R_WRITE,
    R_ERASE,
    R_COPY,
    R_SYNC,
    R_SYNCALL,
    R_FLUSH,
    R_FLUSHALL,
    BROKEN // Write failed. Fail all subsequent requests.
  };

  FILE *ifp = NULL;
  uint8_t request;
  char filename [20];
  uint16_t newCrc;

  command error_t Init.init()
  {
    sprintf(filename, "image-at45db.%d.bin", TOS_NODE_ID);
    ifp = freopen(filename, "r+", fopen(filename, "a"));   // Make sure the file exists first, and then open it for reading and writing
    if (ifp == NULL) {
      dbgerror("At45db", "Can't open the flash file, %s!\n", filename);
    }
    
    return (ifp == NULL) ? FAIL : SUCCESS;
  }

  void requestDone(error_t result, uint16_t computedCrc, uint8_t newState)
  {
    uint8_t orequest = request;

    request = newState;
    switch (orequest) {
      case R_READ:
        signal At45db.readDone(result);
        break;
      case R_READCRC:
        signal At45db.computeCrcDone(result, computedCrc);
        break;
      case R_WRITE:
        signal At45db.writeDone(result);
        break;
      case R_SYNC:
      case R_SYNCALL:
        signal At45db.syncDone(result);
        break;
      case R_FLUSH:
      case R_FLUSHALL:
        signal At45db.flushDone(result);
        break;
      case R_ERASE:
        signal At45db.eraseDone(result);
        break;
      case R_COPY:
        signal At45db.copyPageDone(result);
        break;
    }
  }

  task void taskCrcSuccess() {
    requestDone(SUCCESS, newCrc, IDLE);
  }

  task void taskFail() {
    requestDone(FAIL, 0, IDLE);
  }

  task void taskSuccess() {
    requestDone(SUCCESS, 0, IDLE);
  }

  command void At45db.read(at45page_t page, at45pageoffset_t offset, void* reqdata, at45pageoffset_t n)
  {
    request = R_READ;
    if (!(page >= AT45_MAX_PAGES || offset >= AT45_PAGE_SIZE || n > AT45_PAGE_SIZE || offset + n > AT45_PAGE_SIZE) == TRUE) {
      int ret = fseek(ifp, page * AT45_PAGE_SIZE + offset, SEEK_SET);
      if (ret == 0) {
        ret = fread(reqdata, 1, n, ifp);
        if (ret >= 0) {
          memset(reqdata + ret, 0xFF, n - ret);   // Fills unwritten part with 0xFF
          post taskSuccess();
          return;
        }
      }
    }

    post taskFail();
  }

  command void At45db.computeCrc(at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc)
  {
    request = R_READCRC;
    if (!(page >= AT45_MAX_PAGES || offset >= AT45_PAGE_SIZE || n > AT45_PAGE_SIZE || offset + n > AT45_PAGE_SIZE) == TRUE) {
      int ret;
      ret = fseek(ifp, page * AT45_PAGE_SIZE + offset, SEEK_SET);
      if (ret == 0) {
        uint8_t temp[n];
        ret = fread(temp, 1, n, ifp);
        if (ret >= 0) {
          uint16_t i;
          memset(temp + ret, 0xFF, n - ret);   // Fills unwritten part with 0xFF
          newCrc = baseCrc;
          for (i = 0; i < n; i++) {
            newCrc = crcByte(newCrc, temp[i]);
          }
          post taskCrcSuccess();
          return;
        }
      }
    }

    post taskFail();
  }

  command void At45db.write(at45page_t page, at45pageoffset_t offset, void* reqdata, at45pageoffset_t n)
  {
    request = R_WRITE;
    if (!(page >= AT45_MAX_PAGES || offset >= AT45_PAGE_SIZE || n > AT45_PAGE_SIZE || offset + n > AT45_PAGE_SIZE) == TRUE) {
      int ret = fseek(ifp, page * AT45_PAGE_SIZE + offset, SEEK_SET);
      if (ret == 0) {
        ret = fwrite(reqdata, 1, n, ifp);
        if (ret == n) {
          post taskSuccess();
          return;
        }
      }
    }
    
    post taskFail();
  }

  command void At45db.erase(at45page_t page, uint8_t eraseKind)
  {
    request = R_ERASE;
    if (!(page >= AT45_MAX_PAGES) == TRUE) {    
      switch (eraseKind) {
        case AT45_ERASE:
          if (fseek(ifp, page * AT45_PAGE_SIZE, SEEK_SET) == 0) {
            uint8_t temp[AT45_PAGE_SIZE];
            memset(temp, 0xFF, AT45_PAGE_SIZE);
            fwrite(temp, 1, AT45_PAGE_SIZE, ifp);
            post taskSuccess();
          } else {
            post taskFail();
          }        
          break;
        case AT45_PREVIOUSLY_ERASED:
        // We believe the user...
        /* Fallthrough */
        case AT45_DONT_ERASE:
        // The buffer contains garbage, but we don't care about the state
        // of bits on this page anyway (if we do, we'll perform a 
        // subsequent write)
          post taskSuccess();
          break;
      }
    } else {
      post taskFail();
    }
  }

  command void At45db.copyPage(at45page_t from, at45page_t to)
  {
    request = R_COPY;
    if (!(from >= AT45_MAX_PAGES || to >= AT45_MAX_PAGES) == TRUE) {
      int ret;
      ret = fseek(ifp, from * AT45_PAGE_SIZE, SEEK_SET);
      if (ret == 0) {
        uint8_t temp[AT45_PAGE_SIZE];
        ret = fread(temp, 1, AT45_PAGE_SIZE, ifp);
        if (ret < 0) {
          post taskFail();
        } else {
          memset(temp + ret, 0xFF, AT45_PAGE_SIZE - ret);   // Fills unwritten part with 0xFF
          if (fseek(ifp, to * AT45_PAGE_SIZE, SEEK_SET) == 0) {
            fwrite(temp, 1, AT45_PAGE_SIZE, ifp);
            post taskSuccess();
          } else {
            post taskFail();
          }
        }
      } else {
        post taskFail();
      }
    } else {
      post taskFail();
    }
  }

  command void At45db.sync(at45page_t page)
  {
    request = R_SYNC;
    if (!(page >= AT45_MAX_PAGES) == TRUE) {
      post taskSuccess();
    } else {
      post taskFail();
    }
  }

  command void At45db.flush(at45page_t page)
  {
    request = R_FLUSH;
    if (!(page >= AT45_MAX_PAGES) == TRUE) {
      post taskSuccess();
    } else {
      post taskFail();
    }
  }

  command void At45db.syncAll()
  {
    request = R_SYNC;
    post taskSuccess();
  }

  command void At45db.flushAll()
  {
    request = R_FLUSH;
    post taskSuccess();
  }
}
