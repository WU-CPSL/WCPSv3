/* C code produced by gperf version 3.0.4 */
/* Command-line: gperf -j1 -t -E -H sdcc_hash -N is_sdcc_word -k1,3 machine/sdcc.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "machine/sdcc.gperf"

/* This file is part of the nesC compiler.
   Copyright (C) 2007 Intel Corporation

The attached "nesC" software is provided to you under the terms and
conditions of the GNU General Public License Version 2 as published by the
Free Software Foundation.

nesC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with nesC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */


#line 21 "machine/sdcc.gperf"
struct sdccword { char *name; int token; };
/* maximum key range = 21, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
sdcc_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23,  0, 23,  0, 23, 14,
       3, 23, 13, 23, 23,  0, 23, 23, 23, 23,
      13, 23,  9, 23,  6, 23,  6,  5, 23, 23,
       1, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
      23, 23, 23, 23, 23, 23
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct sdccword *
is_sdcc_word (str, len)
     register const char *str;
     register unsigned int len;
{
  enum
    {
      TOTAL_KEYWORDS = 20,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 11,
      MIN_HASH_VALUE = 2,
      MAX_HASH_VALUE = 22
    };

  static struct sdccword wordlist[] =
    {
      {""}, {""},
#line 40 "machine/sdcc.gperf"
      {"at", TARGET_ATTRIBUTE1},
      {""},
#line 30 "machine/sdcc.gperf"
      {"__at", TARGET_ATTRIBUTE1},
#line 37 "machine/sdcc.gperf"
      {"idata", TARGET_ATTRIBUTE0},
#line 35 "machine/sdcc.gperf"
      {"xdata", TARGET_ATTRIBUTE0},
#line 27 "machine/sdcc.gperf"
      {"__idata", TARGET_ATTRIBUTE0},
#line 25 "machine/sdcc.gperf"
      {"__xdata", TARGET_ATTRIBUTE0},
#line 23 "machine/sdcc.gperf"
      {"__data", TARGET_ATTRIBUTE0},
#line 42 "machine/sdcc.gperf"
      {"using", TARGET_ATTRIBUTE1},
#line 31 "machine/sdcc.gperf"
      {"__interrupt", TARGET_ATTRIBUTE1},
#line 32 "machine/sdcc.gperf"
      {"__using", TARGET_ATTRIBUTE1},
#line 33 "machine/sdcc.gperf"
      {"data", TARGET_ATTRIBUTE0},
#line 38 "machine/sdcc.gperf"
      {"pdata", TARGET_ATTRIBUTE0},
#line 41 "machine/sdcc.gperf"
      {"interrupt", TARGET_ATTRIBUTE1},
#line 28 "machine/sdcc.gperf"
      {"__pdata", TARGET_ATTRIBUTE0},
#line 34 "machine/sdcc.gperf"
      {"near", TARGET_ATTRIBUTE0},
#line 26 "machine/sdcc.gperf"
      {"__far", TARGET_ATTRIBUTE0},
#line 24 "machine/sdcc.gperf"
      {"__near", TARGET_ATTRIBUTE0},
#line 29 "machine/sdcc.gperf"
      {"__code", TARGET_ATTRIBUTE0},
#line 39 "machine/sdcc.gperf"
      {"code", TARGET_ATTRIBUTE0},
#line 36 "machine/sdcc.gperf"
      {"far", TARGET_ATTRIBUTE0}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = sdcc_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
