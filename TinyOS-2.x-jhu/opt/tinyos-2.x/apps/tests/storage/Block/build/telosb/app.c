#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 151 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/lib/gcc-lib/msp430/3.2.3/include/stddef.h" 3
typedef int ptrdiff_t;
#line 213
typedef unsigned int size_t;
#line 325
typedef int wchar_t;
# 8 "/opt/nesc/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/sys/inttypes.h" 3
typedef signed char int8_t;
typedef unsigned char uint8_t;

typedef int int16_t;
typedef unsigned int uint16_t;

typedef long int32_t;
typedef unsigned long uint32_t;

typedef long long int64_t;
typedef unsigned long long uint64_t;




typedef int16_t intptr_t;
typedef uint16_t uintptr_t;
# 281 "/opt/nesc/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 315
static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/sys/types.h" 3
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t *qaddr_t;

typedef char *caddr_t;
typedef const char *c_caddr_t;
typedef volatile char *v_caddr_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef int32_t ufs_daddr_t;
typedef int32_t ufs_time_t;
typedef u_int32_t uid_t;
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/string.h" 3
extern int memcmp(const void *arg_0x1006e6610, const void *arg_0x1006e68e8, size_t arg_0x1006e6b90);


extern void *memset(void *arg_0x1006f10c8, int arg_0x1006f1330, size_t arg_0x1006f15d8);
#line 63
extern void *memset(void *arg_0x10070e0c8, int arg_0x10070e330, size_t arg_0x10070e5d8);
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/stdlib.h" 3
#line 56
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;







#line 64
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;
# 122 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/sys/config.h" 3
typedef long int __int32_t;
typedef unsigned long int __uint32_t;
# 12 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/sys/_types.h" 3
typedef long _off_t;
typedef long _ssize_t;
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/sys/reent.h" 3
typedef __uint32_t __ULong;


struct _glue {

  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _atexit {
  struct _atexit *_next;
  int _ind;
  void (*_fns[32])(void );
};








struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
#line 116
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;

  int (*_read)(void *_cookie, char *_buf, int _n);
  int (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
#line 174
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};









struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x10074fd50);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4244 {

    struct __nesc_unnamed4245 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
    } _reent;



    struct __nesc_unnamed4246 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int arg_0x100752680);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
#line 273
struct _reent;
# 18 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/math.h" 3
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
#line 208
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 261
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 23 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4247 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4248 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/msp430/iostructures.h" 3
#line 27
typedef union port {
  volatile unsigned char reg_p;
  volatile struct __nesc_unnamed4249 {
    unsigned char __p0 : 1, 
    __p1 : 1, 
    __p2 : 1, 
    __p3 : 1, 
    __p4 : 1, 
    __p5 : 1, 
    __p6 : 1, 
    __p7 : 1;
  } __pin;
} __attribute((packed))  ioregister_t;
#line 108
struct port_full_t {
  ioregister_t in;
  ioregister_t out;
  ioregister_t dir;
  ioregister_t ifg;
  ioregister_t ies;
  ioregister_t ie;
  ioregister_t sel;
};









struct port_simple_t {
  ioregister_t in;
  ioregister_t out;
  ioregister_t dir;
  ioregister_t sel;
};




struct port_full_t;



struct port_full_t;



struct port_simple_t;



struct port_simple_t;



struct port_simple_t;



struct port_simple_t;
# 116 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/msp430/gpio.h" 3
volatile unsigned char P1OUT __asm ("0x0021");

volatile unsigned char P1DIR __asm ("0x0022");





volatile unsigned char P1IE __asm ("0x0025");

volatile unsigned char P1SEL __asm ("0x0026");










volatile unsigned char P2OUT __asm ("0x0029");

volatile unsigned char P2DIR __asm ("0x002A");





volatile unsigned char P2IE __asm ("0x002D");

volatile unsigned char P2SEL __asm ("0x002E");










volatile unsigned char P3OUT __asm ("0x0019");

volatile unsigned char P3DIR __asm ("0x001A");

volatile unsigned char P3SEL __asm ("0x001B");










volatile unsigned char P4OUT __asm ("0x001D");

volatile unsigned char P4DIR __asm ("0x001E");

volatile unsigned char P4SEL __asm ("0x001F");










volatile unsigned char P5OUT __asm ("0x0031");

volatile unsigned char P5DIR __asm ("0x0032");

volatile unsigned char P5SEL __asm ("0x0033");










volatile unsigned char P6OUT __asm ("0x0035");

volatile unsigned char P6DIR __asm ("0x0036");

volatile unsigned char P6SEL __asm ("0x0037");
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/msp430/usart.h" 3
volatile unsigned char U0CTL __asm ("0x0070");

volatile unsigned char U0TCTL __asm ("0x0071");



volatile unsigned char U0MCTL __asm ("0x0073");

volatile unsigned char U0BR0 __asm ("0x0074");

volatile unsigned char U0BR1 __asm ("0x0075");

volatile unsigned char U0RXBUF __asm ("0x0076");
#line 275
volatile unsigned char U1CTL __asm ("0x0078");

volatile unsigned char U1TCTL __asm ("0x0079");



volatile unsigned char U1MCTL __asm ("0x007B");

volatile unsigned char U1BR0 __asm ("0x007C");

volatile unsigned char U1BR1 __asm ("0x007D");

volatile unsigned char U1RXBUF __asm ("0x007E");
# 27 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/msp430/timera.h" 3
volatile unsigned int TA0CTL __asm ("0x0160");

volatile unsigned int TA0R __asm ("0x0170");


volatile unsigned int TA0CCTL0 __asm ("0x0162");

volatile unsigned int TA0CCTL1 __asm ("0x0164");
#line 70
volatile unsigned int TA0CCTL2 __asm ("0x0166");
#line 127
#line 118
typedef struct __nesc_unnamed4250 {
  volatile unsigned 
  taifg : 1, 
  taie : 1, 
  taclr : 1, 
  dummy : 1, 
  tamc : 2, 
  taid : 2, 
  tassel : 2;
} __attribute((packed))  tactl_t;
#line 143
#line 129
typedef struct __nesc_unnamed4251 {
  volatile unsigned 
  ccifg : 1, 
  cov : 1, 
  out : 1, 
  cci : 1, 
  ccie : 1, 
  outmod : 3, 
  cap : 1, 
  dummy : 1, 
  scci : 1, 
  scs : 1, 
  ccis : 2, 
  cm : 2;
} __attribute((packed))  tacctl_t;


struct timera_t {
  tactl_t ctl;
  tacctl_t cctl0;
  tacctl_t cctl1;
  tacctl_t cctl2;
  volatile unsigned dummy[4];
  volatile unsigned tar;
  volatile unsigned taccr0;
  volatile unsigned taccr1;
  volatile unsigned taccr2;
};



struct timera_t;
# 26 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/msp430/timerb.h" 3
volatile unsigned int TBR __asm ("0x0190");


volatile unsigned int TBCCTL0 __asm ("0x0182");





volatile unsigned int TBCCR0 __asm ("0x0192");
#line 76
#line 64
typedef struct __nesc_unnamed4252 {
  volatile unsigned 
  tbifg : 1, 
  tbie : 1, 
  tbclr : 1, 
  dummy1 : 1, 
  tbmc : 2, 
  tbid : 2, 
  tbssel : 2, 
  dummy2 : 1, 
  tbcntl : 2, 
  tbclgrp : 2;
} __attribute((packed))  tbctl_t;
#line 91
#line 78
typedef struct __nesc_unnamed4253 {
  volatile unsigned 
  ccifg : 1, 
  cov : 1, 
  out : 1, 
  cci : 1, 
  ccie : 1, 
  outmod : 3, 
  cap : 1, 
  clld : 2, 
  scs : 1, 
  ccis : 2, 
  cm : 2;
} __attribute((packed))  tbcctl_t;


struct timerb_t {
  tbctl_t ctl;
  tbcctl_t cctl0;
  tbcctl_t cctl1;
  tbcctl_t cctl2;

  tbcctl_t cctl3;
  tbcctl_t cctl4;
  tbcctl_t cctl5;
  tbcctl_t cctl6;



  volatile unsigned tbr;
  volatile unsigned tbccr0;
  volatile unsigned tbccr1;
  volatile unsigned tbccr2;

  volatile unsigned tbccr3;
  volatile unsigned tbccr4;
  volatile unsigned tbccr5;
  volatile unsigned tbccr6;
};





struct timerb_t;
# 20 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/msp430/basic_clock.h" 3
volatile unsigned char DCOCTL __asm ("0x0056");

volatile unsigned char BCSCTL1 __asm ("0x0057");

volatile unsigned char BCSCTL2 __asm ("0x0058");
# 18 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/msp430/adc12.h" 3
volatile unsigned int ADC12CTL0 __asm ("0x01A0");

volatile unsigned int ADC12CTL1 __asm ("0x01A2");
#line 42
#line 30
typedef struct __nesc_unnamed4254 {
  volatile unsigned 
  adc12sc : 1, 
  enc : 1, 
  adc12tovie : 1, 
  adc12ovie : 1, 
  adc12on : 1, 
  refon : 1, 
  r2_5v : 1, 
  msc : 1, 
  sht0 : 4, 
  sht1 : 4;
} __attribute((packed))  adc12ctl0_t;
#line 54
#line 44
typedef struct __nesc_unnamed4255 {
  volatile unsigned 
  adc12busy : 1, 
  conseq : 2, 
  adc12ssel : 2, 
  adc12div : 3, 
  issh : 1, 
  shp : 1, 
  shs : 2, 
  cstartadd : 4;
} __attribute((packed))  adc12ctl1_t;
#line 74
#line 56
typedef struct __nesc_unnamed4256 {
  volatile unsigned 
  bit0 : 1, 
  bit1 : 1, 
  bit2 : 1, 
  bit3 : 1, 
  bit4 : 1, 
  bit5 : 1, 
  bit6 : 1, 
  bit7 : 1, 
  bit8 : 1, 
  bit9 : 1, 
  bit10 : 1, 
  bit11 : 1, 
  bit12 : 1, 
  bit13 : 1, 
  bit14 : 1, 
  bit15 : 1;
} __attribute((packed))  adc12xflg_t;


struct adc12_t {
  adc12ctl0_t ctl0;
  adc12ctl1_t ctl1;
  adc12xflg_t ifg;
  adc12xflg_t ie;
  adc12xflg_t iv;
};




struct adc12_t;
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/msp430x16x.h" 3
volatile unsigned char ME1 __asm ("0x0004");





volatile unsigned char ME2 __asm ("0x0005");
# 158 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
static volatile uint8_t U0CTLnr __asm ("0x0070");
static volatile uint8_t I2CTCTLnr __asm ("0x0071");
static volatile uint8_t I2CDCTLnr __asm ("0x0072");
#line 193
typedef uint8_t mcu_power_t  ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;


enum __nesc_unnamed4257 {
  MSP430_POWER_ACTIVE = 0, 
  MSP430_POWER_LPM0 = 1, 
  MSP430_POWER_LPM1 = 2, 
  MSP430_POWER_LPM2 = 3, 
  MSP430_POWER_LPM3 = 4, 
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void )  ;





static inline void __nesc_enable_interrupt(void )  ;




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void )   ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)   ;
#line 248
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosb/hardware.h"
static inline void TOSH_SET_SIMO0_PIN()  ;
#line 33
static inline void TOSH_CLR_SIMO0_PIN()  ;
#line 33
static inline void TOSH_MAKE_SIMO0_OUTPUT()  ;
static inline void TOSH_SET_UCLK0_PIN()  ;
#line 34
static inline void TOSH_CLR_UCLK0_PIN()  ;
#line 34
static inline void TOSH_MAKE_UCLK0_OUTPUT()  ;
#line 76
enum __nesc_unnamed4258 {

  TOSH_HUMIDITY_ADDR = 5, 
  TOSH_HUMIDTEMP_ADDR = 3, 
  TOSH_HUMIDITY_RESET = 0x1E
};



static inline void TOSH_SET_FLASH_CS_PIN()  ;
#line 85
static inline void TOSH_CLR_FLASH_CS_PIN()  ;
#line 85
static inline void TOSH_MAKE_FLASH_CS_OUTPUT()  ;
static inline void TOSH_SET_FLASH_HOLD_PIN()  ;
#line 86
static inline void TOSH_MAKE_FLASH_HOLD_OUTPUT()  ;
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/Storage.h"
typedef uint8_t volume_id_t;
typedef uint32_t storage_addr_t;
typedef uint32_t storage_len_t;
typedef uint32_t storage_cookie_t;

enum __nesc_unnamed4259 {
  SEEK_BEGINNING = 0
};
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25p.h"
typedef storage_addr_t stm25p_addr_t;
typedef storage_len_t stm25p_len_t;

enum __nesc_unnamed4260 {
  STM25P_NUM_SECTORS = 16, 
  STM25P_SECTOR_SIZE_LOG2 = 16, 
  STM25P_SECTOR_SIZE = 1L << STM25P_SECTOR_SIZE_LOG2, 
  STM25P_SECTOR_MASK = 0xffff, 
  STM25P_PAGE_SIZE_LOG2 = 8, 
  STM25P_PAGE_SIZE = 1 << STM25P_PAGE_SIZE_LOG2, 
  STM25P_PAGE_MASK = STM25P_PAGE_SIZE - 1, 
  STM25P_INVALID_ADDRESS = 0xffffffff
};




#line 54
typedef struct stm25p_volume_info_t {
  uint8_t base;
  uint8_t size;
} stm25p_volume_info_t;
# 8 "build/telosb/StorageVolumes.h"
static const stm25p_volume_info_t STM25P_VMAP[1] = { 
{ .base = 0, .size = 4 } };
# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4261 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 101
#line 84
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;



  nxle_uint8_t network;



  nxle_uint8_t type;
} __attribute__((packed)) 

cc2420_header_t;





#line 106
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 132
#line 116
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 






cc2420_metadata_t;





#line 135
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 169
enum __nesc_unnamed4262 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum __nesc_unnamed4263 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4264 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4265 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4266 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4267 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4268 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosa/platform_message.h"
#line 45
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 50
typedef union TOSRadioFooter {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 54
typedef union TOSRadioMetadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4269 {
  MSP430TIMER_CM_NONE = 0, 
  MSP430TIMER_CM_RISING = 1, 
  MSP430TIMER_CM_FALLING = 2, 
  MSP430TIMER_CM_BOTH = 3, 

  MSP430TIMER_STOP_MODE = 0, 
  MSP430TIMER_UP_MODE = 1, 
  MSP430TIMER_CONTINUOUS_MODE = 2, 
  MSP430TIMER_UPDOWN_MODE = 3, 

  MSP430TIMER_TACLK = 0, 
  MSP430TIMER_TBCLK = 0, 
  MSP430TIMER_ACLK = 1, 
  MSP430TIMER_SMCLK = 2, 
  MSP430TIMER_INCLK = 3, 

  MSP430TIMER_CLOCKDIV_1 = 0, 
  MSP430TIMER_CLOCKDIV_2 = 1, 
  MSP430TIMER_CLOCKDIV_4 = 2, 
  MSP430TIMER_CLOCKDIV_8 = 3
};
#line 64
#line 51
typedef struct __nesc_unnamed4270 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} msp430_compare_control_t;
#line 76
#line 66
typedef struct __nesc_unnamed4271 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
#line 91
#line 78
typedef struct __nesc_unnamed4272 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} msp430_timer_b_control_t;
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4273 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4274 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4275 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/msp430usart.h"
#line 48
typedef enum __nesc_unnamed4276 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










#line 58
typedef struct __nesc_unnamed4277 {
  unsigned int swrst : 1;
  unsigned int mm : 1;
  unsigned int sync : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
} __attribute((packed))  msp430_uctl_t;









#line 69
typedef struct __nesc_unnamed4278 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute((packed))  msp430_utctl_t;










#line 79
typedef struct __nesc_unnamed4279 {
  unsigned int rxerr : 1;
  unsigned int rxwake : 1;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int brk : 1;
  unsigned int oe : 1;
  unsigned int pe : 1;
  unsigned int fe : 1;
} __attribute((packed))  msp430_urctl_t;
#line 116
#line 99
typedef struct __nesc_unnamed4280 {
  unsigned int ubr : 16;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int  : 3;

  unsigned int  : 1;
  unsigned int stc : 1;
  unsigned int  : 2;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
  unsigned int  : 0;
} msp430_spi_config_t;





#line 118
typedef struct __nesc_unnamed4281 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




#line 124
typedef union __nesc_unnamed4282 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;

msp430_spi_union_config_t msp430_spi_default_config = { 
{ 
.ubr = 0x0002, 
.ssel = 0x02, 
.clen = 1, 
.listen = 0, 
.mm = 1, 
.ckph = 1, 
.ckpl = 0, 
.stc = 1 } };
#line 169
#line 150
typedef enum __nesc_unnamed4283 {

  UBR_32KHZ_1200 = 0x001B, UMCTL_32KHZ_1200 = 0x94, 
  UBR_32KHZ_1800 = 0x0012, UMCTL_32KHZ_1800 = 0x84, 
  UBR_32KHZ_2400 = 0x000D, UMCTL_32KHZ_2400 = 0x6D, 
  UBR_32KHZ_4800 = 0x0006, UMCTL_32KHZ_4800 = 0x77, 
  UBR_32KHZ_9600 = 0x0003, UMCTL_32KHZ_9600 = 0x29, 

  UBR_1MHZ_1200 = 0x0369, UMCTL_1MHZ_1200 = 0x7B, 
  UBR_1MHZ_1800 = 0x0246, UMCTL_1MHZ_1800 = 0x55, 
  UBR_1MHZ_2400 = 0x01B4, UMCTL_1MHZ_2400 = 0xDF, 
  UBR_1MHZ_4800 = 0x00DA, UMCTL_1MHZ_4800 = 0xAA, 
  UBR_1MHZ_9600 = 0x006D, UMCTL_1MHZ_9600 = 0x44, 
  UBR_1MHZ_19200 = 0x0036, UMCTL_1MHZ_19200 = 0xB5, 
  UBR_1MHZ_38400 = 0x001B, UMCTL_1MHZ_38400 = 0x94, 
  UBR_1MHZ_57600 = 0x0012, UMCTL_1MHZ_57600 = 0x84, 
  UBR_1MHZ_76800 = 0x000D, UMCTL_1MHZ_76800 = 0x6D, 
  UBR_1MHZ_115200 = 0x0009, UMCTL_1MHZ_115200 = 0x10, 
  UBR_1MHZ_230400 = 0x0004, UMCTL_1MHZ_230400 = 0x55
} msp430_uart_rate_t;
#line 200
#line 171
typedef struct __nesc_unnamed4284 {
  unsigned int ubr : 16;

  unsigned int umctl : 8;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
  unsigned int  : 0;

  unsigned int  : 3;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int  : 1;

  unsigned int  : 2;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int  : 4;
  unsigned int  : 0;

  unsigned int utxe : 1;
  unsigned int urxe : 1;
} msp430_uart_config_t;








#line 202
typedef struct __nesc_unnamed4285 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




#line 211
typedef union __nesc_unnamed4286 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;

msp430_uart_union_config_t msp430_uart_default_config = { 
{ 
.utxe = 1, 
.urxe = 1, 
.ubr = UBR_1MHZ_57600, 
.umctl = UMCTL_1MHZ_57600, 
.ssel = 0x02, 
.pena = 0, 
.pev = 0, 
.spb = 0, 
.clen = 1, 
.listen = 0, 
.mm = 0, 
.ckpl = 0, 
.urxse = 0, 
.urxeie = 1, 
.urxwie = 0, 
.utxe = 1, 
.urxe = 1 } };
#line 248
#line 240
typedef struct __nesc_unnamed4287 {
  unsigned int i2cstt : 1;
  unsigned int i2cstp : 1;
  unsigned int i2cstb : 1;
  unsigned int i2cctrx : 1;
  unsigned int i2cssel : 2;
  unsigned int i2ccrm : 1;
  unsigned int i2cword : 1;
} __attribute((packed))  msp430_i2ctctl_t;
#line 276
#line 253
typedef struct __nesc_unnamed4288 {
  unsigned int  : 1;
  unsigned int mst : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int xa : 1;
  unsigned int  : 1;
  unsigned int txdmaen : 1;
  unsigned int rxdmaen : 1;

  unsigned int  : 4;
  unsigned int i2cssel : 2;
  unsigned int i2crm : 1;
  unsigned int i2cword : 1;

  unsigned int i2cpsc : 8;

  unsigned int i2csclh : 8;

  unsigned int i2cscll : 8;

  unsigned int i2coa : 10;
  unsigned int  : 6;
} msp430_i2c_config_t;








#line 278
typedef struct __nesc_unnamed4289 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




#line 287
typedef union __nesc_unnamed4290 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
enum /*RandRWAppC.BlockStorageC*/BlockStorageC$0$__nesc_unnamed4291 {
  BlockStorageC$0$BLOCK_ID = 0U, BlockStorageC$0$VOLUME_ID = 0U
};
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC$0$__nesc_unnamed4292 {
  Msp430Timer32khzC$0$ALARM_ID = 0U
};
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$frequency_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$frequency_tag /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$size_type;
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef TMilli /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$TimerMilli$precision_tag;
enum /*HplStm25pSpiC.SpiC*/Msp430Spi0C$0$__nesc_unnamed4293 {
  Msp430Spi0C$0$CLIENT_ID = 0U
};
enum /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C$0$__nesc_unnamed4294 {
  Msp430Usart0C$0$CLIENT_ID = 0U
};
enum /*PlatformSerialC.UartC*/Msp430Uart1C$0$__nesc_unnamed4295 {
  Msp430Uart1C$0$CLIENT_ID = 0U
};
typedef T32khz /*Msp430Uart1P.UartP*/Msp430UartP$0$Counter$precision_tag;
typedef uint16_t /*Msp430Uart1P.UartP*/Msp430UartP$0$Counter$size_type;
enum /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C$0$__nesc_unnamed4296 {
  Msp430Usart1C$0$CLIENT_ID = 0U
};
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RandRWC$Boot$booted(void );
# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void RandRWC$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void RandRWC$SerialControl$startDone(error_t error);
#line 117
static void RandRWC$SerialControl$stopDone(error_t error);
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
static void RandRWC$BlockRead$computeCrcDone(storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void RandRWC$BlockRead$readDone(storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static void RandRWC$BlockWrite$syncDone(error_t error);
#line 71
static void RandRWC$BlockWrite$writeDone(storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void RandRWC$BlockWrite$eraseDone(error_t error);
# 68 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
static error_t Stm25pBlockP$Sector$default$read(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 68 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 101
static void Stm25pBlockP$Sector$writeDone(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 101 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);









static error_t Stm25pBlockP$Sector$default$erase(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors);








static void Stm25pBlockP$Sector$eraseDone(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 121 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors, error_t error);
#line 144
static void Stm25pBlockP$Sector$computeCrcDone(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, stm25p_len_t len, 
uint16_t crc, error_t error);
#line 133
static error_t Stm25pBlockP$Sector$default$computeCrc(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 133 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len);
#line 91
static error_t Stm25pBlockP$Sector$default$write(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 56
static uint8_t Stm25pBlockP$Sector$default$getNumSectors(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
static void Stm25pBlockP$Sector$readDone(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
static error_t Stm25pBlockP$Read$read(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101642bc0, 
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
#line 95
static void Stm25pBlockP$Read$default$computeCrcDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101642bc0, 
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void Stm25pBlockP$Read$default$readDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101642bc0, 
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static void Stm25pBlockP$Write$default$syncDone(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101662dc0, 
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void Stm25pBlockP$Write$default$writeDone(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101662dc0, 
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);










static error_t Stm25pBlockP$Write$erase(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101662dc0);
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static void Stm25pBlockP$Write$default$eraseDone(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101662dc0, 
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
#line 58
static error_t Stm25pBlockP$Write$write(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101662dc0, 
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
#line 103
static error_t Stm25pBlockP$Write$sync(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101662dc0);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Stm25pBlockP$ClientResource$default$release(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101670220);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Stm25pBlockP$ClientResource$default$request(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101670220);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Stm25pBlockP$ClientResource$granted(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101670220);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 51
static error_t MotePlatformC$Init$init(void );
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP$Msp430ClockInit$defaultInitClocks(void );
#line 32
static void Msp430ClockP$Msp430ClockInit$default$initTimerB(void );



static void Msp430ClockP$Msp430ClockInit$defaultInitTimerA(void );
#line 31
static void Msp430ClockP$Msp430ClockInit$default$initTimerA(void );





static void Msp430ClockP$Msp430ClockInit$defaultInitTimerB(void );
#line 34
static void Msp430ClockP$Msp430ClockInit$defaultSetupDcoCalibrate(void );
#line 29
static void Msp430ClockP$Msp430ClockInit$default$setupDcoCalibrate(void );
static void Msp430ClockP$Msp430ClockInit$default$initClocks(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t Msp430ClockP$Init$init(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX0$fired(void );
#line 28
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Overflow$fired(void );
#line 28
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX1$fired(void );
#line 28
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$default$fired(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x1017aede8);
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX0$fired(void );
#line 28
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Overflow$fired(void );
#line 28
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX1$fired(void );
#line 28
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$default$fired(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x1017aede8);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$isOverflowPending(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$getControl(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Event$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$default$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Timer$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$getControl(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Event$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$default$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Timer$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Control$getControl(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Event$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$default$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Timer$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$getControl(void );
#line 46
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$enableEvents(void );
#line 36
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$disableEvents(void );
#line 33
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$clearPendingInterrupt(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Event$fired(void );
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEventFromNow(uint16_t delta);
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$getControl(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Event$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$default$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Timer$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$getControl(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Event$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$default$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$getControl(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Event$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$default$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Timer$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Control$getControl(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Event$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$default$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Timer$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Control$getControl(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Event$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$default$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Timer$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Control$getControl(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Event$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$default$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Timer$overflow(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x10152b2f0);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x10152b2f0);
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP$Scheduler$init(void );
#line 61
static void SchedulerBasicP$Scheduler$taskLoop(void );
#line 54
static bool SchedulerBasicP$Scheduler$runNextTask(void );
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void );
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC$McuSleep$sleep(void );
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t Stm25pSectorP$SplitControl$start(void );
#line 109
static error_t Stm25pSectorP$SplitControl$stop(void );
# 68 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
static error_t Stm25pSectorP$Sector$read(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 68 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 101
static void Stm25pSectorP$Sector$default$writeDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 101 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);









static error_t Stm25pSectorP$Sector$erase(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors);








static void Stm25pSectorP$Sector$default$eraseDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 121 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors, error_t error);
#line 144
static void Stm25pSectorP$Sector$default$computeCrcDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, stm25p_len_t len, 
uint16_t crc, error_t error);
#line 133
static error_t Stm25pSectorP$Sector$computeCrc(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 133 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len);
#line 91
static error_t Stm25pSectorP$Sector$write(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 56
static uint8_t Stm25pSectorP$Sector$getNumSectors(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
static void Stm25pSectorP$Sector$default$readDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Stm25pSectorP$Stm25pResource$granted(
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019057d0);
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pVolume.nc"
static volume_id_t Stm25pSectorP$Volume$default$getVolumeId(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x101907b88);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Stm25pSectorP$SpiResource$granted(void );
# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
static void Stm25pSectorP$Spi$sectorEraseDone(uint8_t sector, error_t error);
#line 77
static void Stm25pSectorP$Spi$readDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);
#line 125
static void Stm25pSectorP$Spi$pageProgramDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);
#line 101
static void Stm25pSectorP$Spi$computeCrcDone(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len, error_t error);
#line 159
static void Stm25pSectorP$Spi$bulkEraseDone(error_t error);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Stm25pSectorP$ClientResource$release(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x10190ad00);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Stm25pSectorP$ClientResource$request(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x10190ad00);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Stm25pSectorP$ClientResource$default$granted(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x10190ad00);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void Stm25pSectorP$signalDone_task$runTask(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init(void );
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );








static bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d03c8);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$overflow(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$size_type dt);
#line 62
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$stop(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Init$init(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$overflow(void );
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void );
#line 53
static /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$get(void );
# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type dt);
#line 105
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 125 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 72
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x101bb2448);
# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x101bb2448, 
# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x101bb2448);
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$startDone(error_t error);
#line 117
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$stopDone(error_t error);
# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$TimerMilli$fired(void );
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$timerTask$runTask(void );
# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$ResourceDefaultOwner$granted(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$startTask$runTask(void );
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$default$start(void );









static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$default$stop(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void Stm25pSpiP$SpiPacket$sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t Stm25pSpiP$Init$init(void );
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
static error_t Stm25pSpiP$Spi$powerDown(void );
#line 66
static error_t Stm25pSpiP$Spi$read(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);
#line 136
static error_t Stm25pSpiP$Spi$sectorErase(uint8_t sector);
#line 55
static error_t Stm25pSpiP$Spi$powerUp(void );
#line 90
static error_t Stm25pSpiP$Spi$computeCrc(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len);
#line 114
static error_t Stm25pSpiP$Spi$pageProgram(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Stm25pSpiP$SpiResource$granted(void );
#line 110
static error_t Stm25pSpiP$ClientResource$release(void );
#line 78
static error_t Stm25pSpiP$ClientResource$request(void );
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$unconfigure(
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d372f0);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$configure(
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d372f0);
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$send(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d36650, 
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
#line 71
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$default$sendDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d36650, 
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$default$getConfig(
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d336a8);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiByte$write(uint8_t tx);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$release(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d34430);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d34430);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$granted(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d34430);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$release(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d39120);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$request(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d39120);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$default$granted(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d39120);
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$rxDone(uint8_t data);
#line 49
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$txDone(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$runTask(void );
# 180 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart0P$Usart$enableRxIntr(void );
#line 197
static void HplMsp430Usart0P$Usart$clrRxIntr(void );
#line 97
static void HplMsp430Usart0P$Usart$resetUsart(bool reset);
#line 179
static void HplMsp430Usart0P$Usart$disableIntr(void );
#line 90
static void HplMsp430Usart0P$Usart$setUmctl(uint8_t umctl);
#line 177
static void HplMsp430Usart0P$Usart$disableRxIntr(void );
#line 207
static void HplMsp430Usart0P$Usart$clrIntr(void );
#line 80
static void HplMsp430Usart0P$Usart$setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart0P$Usart$tx(uint8_t data);
#line 128
static void HplMsp430Usart0P$Usart$disableUart(void );
#line 153
static void HplMsp430Usart0P$Usart$enableSpi(void );
#line 168
static void HplMsp430Usart0P$Usart$setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t HplMsp430Usart0P$Usart$rx(void );
#line 192
static bool HplMsp430Usart0P$Usart$isRxIntrPending(void );
#line 158
static void HplMsp430Usart0P$Usart$disableSpi(void );
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP$20$IO$selectIOFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP$21$IO$selectIOFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP$22$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP$22$IO$selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP$23$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP$23$IO$selectModuleFunc(void );
#line 71
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$makeOutput(void );
#line 34
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$set(void );




static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$clr(void );
#line 71
static void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP$31$IO$makeOutput(void );
#line 34
static void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP$31$IO$set(void );
#line 85
static void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP$33$IO$selectIOFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP$34$IO$selectIOFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP$35$IO$selectIOFunc(void );
#line 71
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$makeOutput(void );
#line 34
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$set(void );




static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$clr(void );
#line 71
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$makeOutput(void );
#line 34
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$set(void );




static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$clr(void );




static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$toggle(void );
#line 71
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$makeOutput(void );
#line 34
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$set(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP$Leds$led1On(void );
#line 89
static void LedsP$Leds$led2Toggle(void );
#line 45
static void LedsP$Leds$led0On(void );
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$makeOutput(void );
#line 29
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$set(void );
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$clr(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$makeOutput(void );
#line 29
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$set(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$clr(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$toggle(void );



static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$makeOutput(void );
#line 29
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$set(void );
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$rxDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x102105020, 
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$txDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x102105020);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawI2CInterrupts$fired(void );
#line 39
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$default$fired(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x102105e18);
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$txDone(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$Init$init(void );
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void );








static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void );
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d03c8);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$release(void );
#line 73
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$default$requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$default$granted(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$release(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$request(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$default$granted(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ArbiterInfo$inUse(void );







static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ArbiterInfo$userId(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$grantedTask$runTask(void );
# 7 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430I2C0P$HplI2C$clearModeI2C(void );
#line 6
static bool HplMsp430I2C0P$HplI2C$isI2C(void );
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$makeOutput(void );
#line 29
static void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$set(void );
static void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$clr(void );




static void /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$GeneralIO$makeOutput(void );
#line 29
static void /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$GeneralIO$set(void );
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pVolume.nc"
static volume_id_t /*RandRWAppC.BlockStorageC.BinderP*/Stm25pBinderP$0$Volume$getVolumeId(void );
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(
# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x102251e58, 
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(
# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x102251e58, 
# 121 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 99
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(
# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x102251e58, 
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static 
#line 112
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x10224c020, 
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 136 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(
#line 132
message_t * amsg);
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialP$SplitControl$start(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP$stopDoneTask$runTask(void );
#line 64
static void SerialP$RunTx$runTask(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SerialP$Init$init(void );
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP$SerialFlush$flushDone(void );
#line 38
static void SerialP$SerialFlush$default$flush(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP$startDoneTask$runTask(void );
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void SerialP$SerialFrameComm$dataReceived(uint8_t data);





static void SerialP$SerialFrameComm$putDone(void );
#line 74
static void SerialP$SerialFrameComm$delimiterReceived(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP$defaultSerialFlushTask$runTask(void );
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP$SendBytePacket$completeSend(void );
#line 51
static error_t SerialP$SendBytePacket$startSend(uint8_t first_byte);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x1023a6108, 
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x1023a6108, 
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x1023a75f8, 
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x1024003c0, 
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x1024003c0);
# 23 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x1024003c0, 
# 23 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 70 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result);
# 79 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void HdlcTranslateC$UartStream$receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC$UartStream$receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC$UartStream$sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void );
#line 68
static void HdlcTranslateC$SerialFrameComm$resetReceive(void );
#line 54
static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$ResourceConfigure$unconfigure(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024b1b38);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$ResourceConfigure$configure(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024b1b38);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP$0$Msp430UartConfigure$default$getConfig(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024abe20);
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$send(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024af860, 
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len);
#line 79
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$receivedByte(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024af860, 
# 79 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$receiveDone(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024af860, 
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$sendDone(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024af860, 
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Counter$overflow(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$release(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024acbe8);
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$immediateRequest(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024acbe8);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$granted(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024acbe8);
# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$isOwner(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024acbe8);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$release(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024b4978);
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$immediateRequest(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024b4978);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$default$granted(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024b4978);
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartInterrupts$rxDone(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024a4440, 
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartInterrupts$txDone(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024a4440);
# 143 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart1P$Usart$enableUartRx(void );
#line 123
static void HplMsp430Usart1P$Usart$enableUart(void );
#line 97
static void HplMsp430Usart1P$Usart$resetUsart(bool reset);
#line 179
static void HplMsp430Usart1P$Usart$disableIntr(void );
#line 90
static void HplMsp430Usart1P$Usart$setUmctl(uint8_t umctl);
#line 133
static void HplMsp430Usart1P$Usart$enableUartTx(void );
#line 148
static void HplMsp430Usart1P$Usart$disableUartRx(void );
#line 182
static void HplMsp430Usart1P$Usart$enableIntr(void );
#line 207
static void HplMsp430Usart1P$Usart$clrIntr(void );
#line 80
static void HplMsp430Usart1P$Usart$setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart1P$Usart$tx(uint8_t data);
#line 128
static void HplMsp430Usart1P$Usart$disableUart(void );
#line 174
static void HplMsp430Usart1P$Usart$setModeUart(msp430_uart_union_config_t *config);
#line 158
static void HplMsp430Usart1P$Usart$disableSpi(void );
#line 138
static void HplMsp430Usart1P$Usart$disableUartTx(void );
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t HplMsp430Usart1P$AsyncStdControl$start(void );









static error_t HplMsp430Usart1P$AsyncStdControl$stop(void );
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$default$rxDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x102105020, 
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$default$txDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x102105020);
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$RawInterrupts$rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$RawInterrupts$txDone(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$Init$init(void );
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEmpty(void );
#line 60
static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$FcfsQueue$dequeue(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceRequested$default$immediateRequested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d03c8);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$default$unconfigure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$default$configure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceDefaultOwner$release(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$release(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$immediateRequest(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$default$granted(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$isOwner(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ArbiterInfo$inUse(void );







static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ArbiterInfo$userId(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$grantedTask$runTask(void );
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void );
#line 81
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested(void );
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t *TelosSerialP$Msp430UartConfigure$getConfig(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void TelosSerialP$Resource$granted(void );
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t TelosSerialP$StdControl$start(void );









static error_t TelosSerialP$StdControl$stop(void );
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP$Info$offset(void );







static uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen);
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t RandRWC$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

RandRWC$AMSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t RandRWC$SerialControl$start(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
static error_t RandRWC$BlockRead$read(storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static error_t RandRWC$BlockWrite$erase(void );
#line 58
static error_t RandRWC$BlockWrite$write(storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
#line 103
static error_t RandRWC$BlockWrite$sync(void );
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void RandRWC$Leds$led1On(void );
#line 89
static void RandRWC$Leds$led2Toggle(void );
#line 45
static void RandRWC$Leds$led0On(void );
# 27 "RandRWC.nc"
enum RandRWC$__nesc_unnamed4297 {
  RandRWC$SIZE = 1024L * 256, 
  RandRWC$NWRITES = RandRWC$SIZE / 4096
};

uint16_t RandRWC$shiftReg;
uint16_t RandRWC$initSeed;
uint16_t RandRWC$mask;


static uint16_t RandRWC$rand(void );
#line 53
static void RandRWC$resetSeed(void );





uint8_t RandRWC$data[512];
#line 59
uint8_t RandRWC$rdata[512];
int RandRWC$count;
#line 60
int RandRWC$testCount;
uint32_t RandRWC$addr;
#line 61
uint32_t RandRWC$len;
uint16_t RandRWC$offset;
message_t RandRWC$reportMsg;

static void RandRWC$done(void );

static void RandRWC$report(error_t e);







static inline void RandRWC$AMSend$sendDone(message_t *msg, error_t error);




static inline void RandRWC$fail(error_t e);





static inline void RandRWC$success(void );





static bool RandRWC$scheck(error_t r) __attribute((noinline)) ;





static inline bool RandRWC$bcheck(bool b);





static void RandRWC$setParameters(void );









static inline void RandRWC$Boot$booted(void );



static inline void RandRWC$SerialControl$stopDone(error_t e);

static inline void RandRWC$SerialControl$startDone(error_t e);
#line 136
static void RandRWC$nextRead(void );










static void RandRWC$nextWrite(void );
#line 162
static inline void RandRWC$BlockWrite$writeDone(storage_addr_t x, void *buf, storage_len_t y, error_t result);




static inline void RandRWC$BlockWrite$eraseDone(error_t result);







static inline void RandRWC$BlockWrite$syncDone(error_t result);




static void RandRWC$BlockRead$readDone(storage_addr_t x, void *buf, storage_len_t rlen, error_t result) __attribute((noinline)) ;





static inline void RandRWC$BlockRead$computeCrcDone(storage_addr_t x, storage_len_t y, uint16_t z, error_t result);


enum RandRWC$__nesc_unnamed4298 {
#line 189
  RandRWC$A_READ = 2, RandRWC$A_WRITE
};
static void RandRWC$doAction(int act);
#line 207
const uint8_t RandRWC$actions[2] = { 
RandRWC$A_WRITE, 
RandRWC$A_READ };


static void RandRWC$done(void );
# 68 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
static error_t Stm25pBlockP$Sector$read(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 68 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 112
static error_t Stm25pBlockP$Sector$erase(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors);
#line 133
static error_t Stm25pBlockP$Sector$computeCrc(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 133 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len);
#line 91
static error_t Stm25pBlockP$Sector$write(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468, 
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 56
static uint8_t Stm25pBlockP$Sector$getNumSectors(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x10165d468);
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
static void Stm25pBlockP$Read$computeCrcDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101642bc0, 
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void Stm25pBlockP$Read$readDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101642bc0, 
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static void Stm25pBlockP$Write$syncDone(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101662dc0, 
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void Stm25pBlockP$Write$writeDone(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101662dc0, 
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void Stm25pBlockP$Write$eraseDone(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101662dc0, 
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Stm25pBlockP$ClientResource$release(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101670220);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Stm25pBlockP$ClientResource$request(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
uint8_t arg_0x101670220);






enum Stm25pBlockP$__nesc_unnamed4299 {
  Stm25pBlockP$NUM_BLOCKS = 1U
};








#line 55
typedef enum Stm25pBlockP$__nesc_unnamed4300 {
  Stm25pBlockP$S_IDLE, 
  Stm25pBlockP$S_READ, 
  Stm25pBlockP$S_CRC, 
  Stm25pBlockP$S_WRITE, 
  Stm25pBlockP$S_SYNC, 
  Stm25pBlockP$S_ERASE
} Stm25pBlockP$stm25p_block_req_t;






#line 64
typedef struct Stm25pBlockP$stm25p_block_state_t {
  storage_addr_t addr;
  void *buf;
  storage_len_t len;
  Stm25pBlockP$stm25p_block_req_t req;
} Stm25pBlockP$stm25p_block_state_t;

Stm25pBlockP$stm25p_block_state_t Stm25pBlockP$m_block_state[Stm25pBlockP$NUM_BLOCKS];
Stm25pBlockP$stm25p_block_state_t Stm25pBlockP$m_req;

static error_t Stm25pBlockP$newRequest(uint8_t client);
static void Stm25pBlockP$signalDone(uint8_t id, uint16_t crc, error_t error);










static inline error_t Stm25pBlockP$Read$read(uint8_t id, storage_addr_t addr, void *buf, 
storage_len_t len);
#line 105
static inline error_t Stm25pBlockP$Write$write(uint8_t id, storage_addr_t addr, void *buf, 
storage_len_t len);







static inline error_t Stm25pBlockP$Write$sync(uint8_t id);




static inline error_t Stm25pBlockP$Write$erase(uint8_t id);




static error_t Stm25pBlockP$newRequest(uint8_t client);
#line 136
static void Stm25pBlockP$ClientResource$granted(uint8_t id);
#line 166
static inline void Stm25pBlockP$Sector$readDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);



static inline void Stm25pBlockP$Sector$writeDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);



static inline void Stm25pBlockP$Sector$eraseDone(uint8_t id, uint8_t sector, 
uint8_t num_sectors, 
error_t error);



static inline void Stm25pBlockP$Sector$computeCrcDone(uint8_t id, stm25p_addr_t addr, 
stm25p_len_t len, 
uint16_t crc, 
error_t error);



static void Stm25pBlockP$signalDone(uint8_t id, uint16_t crc, error_t error);
#line 222
static inline void Stm25pBlockP$Read$default$readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
static inline void Stm25pBlockP$Read$default$computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error);
static inline void Stm25pBlockP$Write$default$writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
static inline void Stm25pBlockP$Write$default$eraseDone(uint8_t id, error_t error);
static inline void Stm25pBlockP$Write$default$syncDone(uint8_t id, error_t error);


static inline uint8_t Stm25pBlockP$Sector$default$getNumSectors(uint8_t id);
static inline error_t Stm25pBlockP$Sector$default$read(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
static inline error_t Stm25pBlockP$Sector$default$write(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
static inline error_t Stm25pBlockP$Sector$default$erase(uint8_t id, uint8_t sector, uint8_t num_sectors);
static inline error_t Stm25pBlockP$Sector$default$computeCrc(uint8_t id, uint16_t crc, storage_addr_t addr, storage_len_t len);
static inline error_t Stm25pBlockP$ClientResource$default$request(uint8_t id);
static inline error_t Stm25pBlockP$ClientResource$default$release(uint8_t id);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 51
static error_t PlatformP$MoteClockInit$init(void );
#line 51
static error_t PlatformP$LedsInit$init(void );
# 10 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP$Init$init(void );
# 6 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC$uwait(uint16_t u);




static __inline void MotePlatformC$TOSH_wait(void );




static void MotePlatformC$TOSH_FLASH_M25P_DP_bit(bool set);










static inline void MotePlatformC$TOSH_FLASH_M25P_DP(void );
#line 56
static inline error_t MotePlatformC$Init$init(void );
# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP$Msp430ClockInit$initTimerB(void );
#line 31
static void Msp430ClockP$Msp430ClockInit$initTimerA(void );
#line 29
static void Msp430ClockP$Msp430ClockInit$setupDcoCalibrate(void );
static void Msp430ClockP$Msp430ClockInit$initClocks(void );
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP$IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP$TA0CTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP$TA0IV __asm ("0x012E");
static volatile uint16_t Msp430ClockP$TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP$TBIV __asm ("0x011E");

enum Msp430ClockP$__nesc_unnamed4301 {

  Msp430ClockP$ACLK_CALIB_PERIOD = 8, 
  Msp430ClockP$TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP$ACLK_CALIB_PERIOD
};


static inline void Msp430ClockP$Msp430ClockInit$defaultSetupDcoCalibrate(void );
#line 64
static inline void Msp430ClockP$Msp430ClockInit$defaultInitClocks(void );
#line 85
static inline void Msp430ClockP$Msp430ClockInit$defaultInitTimerA(void );
#line 100
static inline void Msp430ClockP$Msp430ClockInit$defaultInitTimerB(void );
#line 115
static inline void Msp430ClockP$Msp430ClockInit$default$setupDcoCalibrate(void );




static inline void Msp430ClockP$Msp430ClockInit$default$initClocks(void );




static inline void Msp430ClockP$Msp430ClockInit$default$initTimerA(void );




static inline void Msp430ClockP$Msp430ClockInit$default$initTimerB(void );





static inline void Msp430ClockP$startTimerA(void );
#line 148
static inline void Msp430ClockP$startTimerB(void );
#line 160
static void Msp430ClockP$set_dco_calib(int calib);





static inline uint16_t Msp430ClockP$test_calib_busywait_delta(int calib);
#line 189
static inline void Msp430ClockP$busyCalibrateDco(void );
#line 214
static inline error_t Msp430ClockP$Init$init(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$fired(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x1017aede8);
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$overflow(void );
# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX0$fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX1$fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Overflow$fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$default$fired(uint8_t n);
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$fired(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x1017aede8);
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$overflow(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get(void );
#line 70
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$isOverflowPending(void );
#line 115
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX0$fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX1$fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Overflow$fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$default$fired(uint8_t n);
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$fired(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t;


static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$getControl(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$getEvent(void );
#line 169
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$default$captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$default$fired(void );



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$fired(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t;


static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$getControl(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$getEvent(void );
#line 169
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$default$captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$default$fired(void );



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$fired(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t;


static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Control$getControl(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$getEvent(void );
#line 169
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$default$captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$default$fired(void );



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$get(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$compareControl(void );
#line 74
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$setControlAsCompare(void );
#line 119
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$disableEvents(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEventFromNow(uint16_t x);
#line 169
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$default$captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$fired(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t;


static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$getControl(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$getEvent(void );
#line 169
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$default$captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$default$fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$fired(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t;


static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$getControl(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$getEvent(void );
#line 169
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$default$captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$default$fired(void );



static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$fired(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t;


static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$getControl(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$getEvent(void );
#line 169
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$default$captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$default$fired(void );



static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$fired(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t;


static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Control$getControl(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$getEvent(void );
#line 169
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$default$captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$default$fired(void );



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$fired(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t;


static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Control$getControl(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$getEvent(void );
#line 169
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$default$captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$default$fired(void );



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$fired(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t;


static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Control$getControl(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$getEvent(void );
#line 169
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$default$captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$default$fired(void );



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Timer$overflow(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP$VectorTimerB1$fired(void );
#line 28
static void Msp430TimerCommonP$VectorTimerA0$fired(void );
#line 28
static void Msp430TimerCommonP$VectorTimerA1$fired(void );
#line 28
static void Msp430TimerCommonP$VectorTimerB0$fired(void );
# 11 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(12)))  ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(10)))  ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(26)))  ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(24)))  ;
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP$SoftwareInit$init(void );
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RealMainP$Boot$booted(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP$PlatformInit$init(void );
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void RealMainP$Scheduler$init(void );
#line 61
static void RealMainP$Scheduler$taskLoop(void );
#line 54
static bool RealMainP$Scheduler$runNextTask(void );
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void )   ;
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x10152b2f0);
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP$McuSleep$sleep(void );
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4302 {

  SchedulerBasicP$NUM_TASKS = 15U, 
  SchedulerBasicP$NO_TASK = 255
};

uint8_t SchedulerBasicP$m_head;
uint8_t SchedulerBasicP$m_tail;
uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void );
#line 86
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 113
static inline void SchedulerBasicP$Scheduler$init(void );









static bool SchedulerBasicP$Scheduler$runNextTask(void );
#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void );
#line 159
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/McuSleepC.nc"
bool McuSleepC$dirty = TRUE;
mcu_power_t McuSleepC$powerState = MSP430_POWER_ACTIVE;




const uint16_t McuSleepC$msp430PowerBits[MSP430_POWER_LPM4 + 1] = { 
0, 
0x0010, 
0x0040 + 0x0010, 
0x0080 + 0x0010, 
0x0080 + 0x0040 + 0x0010, 
0x0080 + 0x0040 + 0x0020 + 0x0010 };


static inline mcu_power_t McuSleepC$getPowerState(void );
#line 104
static inline void McuSleepC$computePowerState(void );




static inline void McuSleepC$McuSleep$sleep(void );
#line 126
static inline mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void Stm25pSectorP$SplitControl$startDone(error_t error);
#line 117
static void Stm25pSectorP$SplitControl$stopDone(error_t error);
# 101 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
static void Stm25pSectorP$Sector$writeDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 101 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);
#line 121
static void Stm25pSectorP$Sector$eraseDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 121 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors, error_t error);
#line 144
static void Stm25pSectorP$Sector$computeCrcDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, stm25p_len_t len, 
uint16_t crc, error_t error);
#line 78
static void Stm25pSectorP$Sector$readDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019080c8, 
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Stm25pSectorP$Stm25pResource$release(
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019057d0);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Stm25pSectorP$Stm25pResource$request(
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x1019057d0);
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pVolume.nc"
static volume_id_t Stm25pSectorP$Volume$getVolumeId(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x101907b88);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Stm25pSectorP$SpiResource$release(void );
#line 78
static error_t Stm25pSectorP$SpiResource$request(void );
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
static error_t Stm25pSectorP$Spi$powerDown(void );
#line 66
static error_t Stm25pSectorP$Spi$read(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);
#line 136
static error_t Stm25pSectorP$Spi$sectorErase(uint8_t sector);
#line 55
static error_t Stm25pSectorP$Spi$powerUp(void );
#line 90
static error_t Stm25pSectorP$Spi$computeCrc(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len);
#line 114
static error_t Stm25pSectorP$Spi$pageProgram(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Stm25pSectorP$ClientResource$granted(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x10190ad00);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t Stm25pSectorP$signalDone_task$postTask(void );
# 86 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
enum Stm25pSectorP$__nesc_unnamed4303 {
#line 86
  Stm25pSectorP$signalDone_task = 0U
};
#line 86
typedef int Stm25pSectorP$__nesc_sillytask_signalDone_task[Stm25pSectorP$signalDone_task];
#line 56
enum Stm25pSectorP$__nesc_unnamed4304 {
  Stm25pSectorP$NO_CLIENT = 0xff
};







#line 60
typedef enum Stm25pSectorP$__nesc_unnamed4305 {
  Stm25pSectorP$S_IDLE, 
  Stm25pSectorP$S_READ, 
  Stm25pSectorP$S_WRITE, 
  Stm25pSectorP$S_ERASE, 
  Stm25pSectorP$S_CRC
} Stm25pSectorP$stm25p_sector_state_t;
Stm25pSectorP$stm25p_sector_state_t Stm25pSectorP$m_state;





#line 69
typedef enum Stm25pSectorP$__nesc_unnamed4306 {
  Stm25pSectorP$S_NONE, 
  Stm25pSectorP$S_START, 
  Stm25pSectorP$S_STOP
} Stm25pSectorP$stm25p_power_state_t;
Stm25pSectorP$stm25p_power_state_t Stm25pSectorP$m_power_state;

uint8_t Stm25pSectorP$m_client;
stm25p_addr_t Stm25pSectorP$m_addr;
stm25p_len_t Stm25pSectorP$m_len;
stm25p_len_t Stm25pSectorP$m_cur_len;
uint8_t *Stm25pSectorP$m_buf;
error_t Stm25pSectorP$m_error;
uint16_t Stm25pSectorP$m_crc;


static inline void Stm25pSectorP$signalDone(error_t error);


static error_t Stm25pSectorP$SplitControl$start(void );






static inline error_t Stm25pSectorP$SplitControl$stop(void );






static inline error_t Stm25pSectorP$ClientResource$request(uint8_t id);







static inline error_t Stm25pSectorP$ClientResource$release(uint8_t id);










static inline void Stm25pSectorP$Stm25pResource$granted(uint8_t id);




static inline uint8_t Stm25pSectorP$getVolumeId(uint8_t client);



static inline void Stm25pSectorP$SpiResource$granted(void );
#line 153
static inline stm25p_addr_t Stm25pSectorP$physicalAddr(uint8_t id, stm25p_addr_t addr);




static stm25p_len_t Stm25pSectorP$calcWriteLen(stm25p_addr_t addr);








static inline uint8_t Stm25pSectorP$Sector$getNumSectors(uint8_t id);



static inline error_t Stm25pSectorP$Sector$read(uint8_t id, stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);










static inline void Stm25pSectorP$Spi$readDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);



static inline error_t Stm25pSectorP$Sector$write(uint8_t id, stm25p_addr_t addr, 
uint8_t *buf, 
stm25p_len_t len);
#line 202
static inline void Stm25pSectorP$Spi$pageProgramDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);









static inline error_t Stm25pSectorP$Sector$erase(uint8_t id, uint8_t sector, 
uint8_t num_sectors);
#line 226
static inline void Stm25pSectorP$Spi$sectorEraseDone(uint8_t sector, error_t error);







static inline error_t Stm25pSectorP$Sector$computeCrc(uint8_t id, uint16_t crc, 
stm25p_addr_t addr, 
stm25p_len_t len);









static inline void Stm25pSectorP$Spi$computeCrcDone(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len, error_t error);




static inline void Stm25pSectorP$Spi$bulkEraseDone(error_t error);



static inline void Stm25pSectorP$signalDone(error_t error);




static inline void Stm25pSectorP$signalDone_task$runTask(void );
#line 284
static inline void Stm25pSectorP$ClientResource$default$granted(uint8_t id);
static inline void Stm25pSectorP$Sector$default$readDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error);
static inline void Stm25pSectorP$Sector$default$writeDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error);
static inline void Stm25pSectorP$Sector$default$eraseDone(uint8_t id, uint8_t sector, uint8_t num_sectors, error_t error);
static inline void Stm25pSectorP$Sector$default$computeCrcDone(uint8_t id, stm25p_addr_t addr, stm25p_len_t len, uint16_t crc, error_t error);
static inline volume_id_t Stm25pSectorP$Volume$default$getVolumeId(uint8_t id);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4307 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[1U];
uint8_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init(void );




static inline bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );



static inline bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
#line 72
static inline error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d03c8);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Queue$dequeue(void );
# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Resource$granted(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$__nesc_unnamed4308 {
#line 75
  ArbiterP$0$grantedTask = 1U
};
#line 75
typedef int /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$__nesc_unnamed4309 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$__nesc_unnamed4310 {
#line 68
  ArbiterP$0$default_owner_id = 1U
};
#line 69
enum /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$__nesc_unnamed4311 {
#line 69
  ArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED;
uint8_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$default_owner_id;
uint8_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$reqResId;



static inline error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 108
static inline error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 130
static inline error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
#line 187
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
#line 201
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);
#line 213
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEvent(uint16_t time);

static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEventFromNow(uint16_t delta);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$get(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$fired(void );
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$enableEvents(void );
#line 36
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$setControlAsCompare(void );










static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$disableEvents(void );
#line 33
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$clearPendingInterrupt(void );
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Init$init(void );
#line 54
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$stop(void );




static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$fired(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$startAt(uint16_t t0, uint16_t dt);
#line 103
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$overflow(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$isOverflowPending(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$overflow(void );
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$overflow(void );
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$size_type /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$overflow(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type /*CounterMilli32C.Transform*/TransformCounterC$0$m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC$0$__nesc_unnamed4312 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 5, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type ) + 5, 



  TransformCounterC$0$OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$get(void );
#line 122
static inline void /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$fired(void );
#line 92
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type dt);
#line 62
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$stop(void );
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$get(void );
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$__nesc_unnamed4313 {

  TransformAlarmC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type ) - 1 - 5, 
  TransformAlarmC$0$MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY_LOG2
};

static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getNow(void );




static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getAlarm(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm(void );
#line 136
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type dt);
#line 151
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void );
#line 166
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4314 {
#line 63
  AlarmToTimerC$0$fired = 2U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 125 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x101bb2448);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4315 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 3U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4316 {

  VirtualizeTimerC$0$NUM_TIMERS = 1U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4317 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 148
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$start(void );
#line 109
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$stop(void );
# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$TimerMilli$startOneShot(uint32_t dt);




static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$TimerMilli$stop(void );
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$PowerDownCleanup$cleanup(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$timerTask$postTask(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$ResourceDefaultOwner$release(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$startTask$postTask(void );
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$start(void );









static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$stop(void );
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/DeferredPowerManagerP.nc"
enum /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$__nesc_unnamed4318 {
#line 69
  DeferredPowerManagerP$0$startTask = 4U
};
#line 69
typedef int /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$__nesc_sillytask_startTask[/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$startTask];






enum /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$__nesc_unnamed4319 {
#line 76
  DeferredPowerManagerP$0$timerTask = 5U
};
#line 76
typedef int /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$__nesc_sillytask_timerTask[/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$timerTask];
#line 65
bool /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$stopping = FALSE;
bool /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$requested = FALSE;
bool /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$stopTimer = FALSE;

static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$startTask$runTask(void );






static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$timerTask$runTask(void );



static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$ResourceDefaultOwner$requested(void );










static inline error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$default$start(void );







static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$startDone(error_t error);



static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$ResourceDefaultOwner$granted(void );



static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$TimerMilli$fired(void );








static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$stopDone(error_t error);










static inline error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$default$stop(void );







static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t Stm25pSpiP$SpiPacket$send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t Stm25pSpiP$SpiByte$write(uint8_t tx);
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void Stm25pSpiP$CSN$makeOutput(void );
#line 29
static void Stm25pSpiP$CSN$set(void );
static void Stm25pSpiP$CSN$clr(void );
# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
static void Stm25pSpiP$Spi$sectorEraseDone(uint8_t sector, error_t error);
#line 77
static void Stm25pSpiP$Spi$readDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);
#line 125
static void Stm25pSpiP$Spi$pageProgramDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);
#line 101
static void Stm25pSpiP$Spi$computeCrcDone(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len, error_t error);
#line 159
static void Stm25pSpiP$Spi$bulkEraseDone(error_t error);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Stm25pSpiP$SpiResource$release(void );
#line 78
static error_t Stm25pSpiP$SpiResource$request(void );
#line 92
static void Stm25pSpiP$ClientResource$granted(void );
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void Stm25pSpiP$Hold$makeOutput(void );
#line 29
static void Stm25pSpiP$Hold$set(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
enum Stm25pSpiP$__nesc_unnamed4320 {
  Stm25pSpiP$CRC_BUF_SIZE = 16
};









#line 60
typedef enum Stm25pSpiP$__nesc_unnamed4321 {
  Stm25pSpiP$S_READ = 0x3, 
  Stm25pSpiP$S_PAGE_PROGRAM = 0x2, 
  Stm25pSpiP$S_SECTOR_ERASE = 0xd8, 
  Stm25pSpiP$S_BULK_ERASE = 0xc7, 
  Stm25pSpiP$S_WRITE_ENABLE = 0x6, 
  Stm25pSpiP$S_POWER_ON = 0xab, 
  Stm25pSpiP$S_DEEP_SLEEP = 0xb9
} Stm25pSpiP$stm25p_cmd_t;

uint8_t Stm25pSpiP$m_cmd[4];

bool Stm25pSpiP$m_is_writing = FALSE;
bool Stm25pSpiP$m_computing_crc = FALSE;

stm25p_addr_t Stm25pSpiP$m_addr;
uint8_t *Stm25pSpiP$m_buf;
stm25p_len_t Stm25pSpiP$m_len;
stm25p_addr_t Stm25pSpiP$m_cur_addr;
stm25p_len_t Stm25pSpiP$m_cur_len;
uint8_t Stm25pSpiP$m_crc_buf[Stm25pSpiP$CRC_BUF_SIZE];
uint16_t Stm25pSpiP$m_crc;

static error_t Stm25pSpiP$newRequest(bool write, stm25p_len_t cmd_len);
static void Stm25pSpiP$signalDone(error_t error);

static uint8_t Stm25pSpiP$sendCmd(uint8_t cmd, uint8_t len);
#line 100
static inline error_t Stm25pSpiP$Init$init(void );







static inline error_t Stm25pSpiP$ClientResource$request(void );







static inline error_t Stm25pSpiP$ClientResource$release(void );







static inline stm25p_len_t Stm25pSpiP$calcReadLen(void );



static inline error_t Stm25pSpiP$Spi$powerDown(void );




static inline error_t Stm25pSpiP$Spi$powerUp(void );




static error_t Stm25pSpiP$Spi$read(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);







static inline error_t Stm25pSpiP$Spi$computeCrc(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len);







static error_t Stm25pSpiP$Spi$pageProgram(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);







static error_t Stm25pSpiP$Spi$sectorErase(uint8_t sector);










static error_t Stm25pSpiP$newRequest(bool write, stm25p_len_t cmd_len);










static void Stm25pSpiP$releaseAndRequest(void );




static void Stm25pSpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);
#line 238
static inline void Stm25pSpiP$SpiResource$granted(void );










static void Stm25pSpiP$signalDone(error_t error);
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$sendDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d36650, 
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$getConfig(
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d336a8);
# 180 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$enableRxIntr(void );
#line 197
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$clrRxIntr(void );
#line 97
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$resetUsart(bool reset);
#line 177
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableRxIntr(void );
#line 224
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$tx(uint8_t data);
#line 168
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$rx(void );
#line 192
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isRxIntrPending(void );
#line 158
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableSpi(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$release(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d34430);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$request(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d34430);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$granted(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x101d39120);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$postTask(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$__nesc_unnamed4322 {
#line 67
  Msp430SpiNoDmaP$0$signalDone_task = 6U
};
#line 67
typedef int /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$__nesc_sillytask_signalDone_task[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task];
#line 56
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$__nesc_unnamed4323 {
  Msp430SpiNoDmaP$0$SPI_ATOMIC_SIZE = 2
};

uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf;
uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos;
uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_client;

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone(void );






static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$request(uint8_t id);







static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$release(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$configure(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$unconfigure(uint8_t id);





static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$granted(uint8_t id);



static inline uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiByte$write(uint8_t tx);
#line 112
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(uint8_t id);

static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$release(uint8_t id);
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$default$getConfig(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$default$granted(uint8_t id);

static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$continueOp(void );
#line 144
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len);
#line 166
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$runTask(void );



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$rxDone(uint8_t data);
#line 183
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone(void );




static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$txDone(void );

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$default$sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error);
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P$UCLK$selectIOFunc(void );
#line 78
static void HplMsp430Usart0P$UCLK$selectModuleFunc(void );
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart0P$Interrupts$rxDone(uint8_t data);
#line 49
static void HplMsp430Usart0P$Interrupts$txDone(void );
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P$URXD$selectIOFunc(void );
#line 85
static void HplMsp430Usart0P$UTXD$selectIOFunc(void );
# 7 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430Usart0P$HplI2C$clearModeI2C(void );
#line 6
static bool HplMsp430Usart0P$HplI2C$isI2C(void );
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P$SOMI$selectIOFunc(void );
#line 78
static void HplMsp430Usart0P$SOMI$selectModuleFunc(void );
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void HplMsp430Usart0P$I2CInterrupts$fired(void );
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P$SIMO$selectIOFunc(void );
#line 78
static void HplMsp430Usart0P$SIMO$selectModuleFunc(void );
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static volatile uint8_t HplMsp430Usart0P$IE1 __asm ("0x0000");
static volatile uint8_t HplMsp430Usart0P$ME1 __asm ("0x0004");
static volatile uint8_t HplMsp430Usart0P$IFG1 __asm ("0x0002");
static volatile uint8_t HplMsp430Usart0P$U0TCTL __asm ("0x0071");

static volatile uint8_t HplMsp430Usart0P$U0TXBUF __asm ("0x0077");

void sig_UART0RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(18)))  ;




void sig_UART0TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(16)))  ;
#line 132
static inline void HplMsp430Usart0P$Usart$setUbr(uint16_t control);










static inline void HplMsp430Usart0P$Usart$setUmctl(uint8_t control);







static inline void HplMsp430Usart0P$Usart$resetUsart(bool reset);
#line 207
static inline void HplMsp430Usart0P$Usart$disableUart(void );
#line 238
static inline void HplMsp430Usart0P$Usart$enableSpi(void );








static void HplMsp430Usart0P$Usart$disableSpi(void );








static inline void HplMsp430Usart0P$configSpi(msp430_spi_union_config_t *config);








static inline void HplMsp430Usart0P$Usart$setModeSpi(msp430_spi_union_config_t *config);
#line 330
static inline bool HplMsp430Usart0P$Usart$isRxIntrPending(void );










static inline void HplMsp430Usart0P$Usart$clrRxIntr(void );



static inline void HplMsp430Usart0P$Usart$clrIntr(void );



static inline void HplMsp430Usart0P$Usart$disableRxIntr(void );







static inline void HplMsp430Usart0P$Usart$disableIntr(void );



static inline void HplMsp430Usart0P$Usart$enableRxIntr(void );
#line 382
static inline void HplMsp430Usart0P$Usart$tx(uint8_t data);



static uint8_t HplMsp430Usart0P$Usart$rx(void );
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectIOFunc(void );
#line 54
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectIOFunc(void );
#line 54
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectIOFunc(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP$20$IO$selectIOFunc(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP$21$IO$selectIOFunc(void );
#line 54
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP$22$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP$22$IO$selectIOFunc(void );
#line 54
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP$23$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP$23$IO$selectIOFunc(void );
#line 45
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$set(void );
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$clr(void );





static inline void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$makeOutput(void );
#line 45
static inline void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP$31$IO$set(void );






static inline void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP$31$IO$makeOutput(void );



static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP$33$IO$selectIOFunc(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP$34$IO$selectIOFunc(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP$35$IO$selectIOFunc(void );
#line 45
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$set(void );
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$clr(void );





static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$makeOutput(void );
#line 45
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$set(void );
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$clr(void );





static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$makeOutput(void );
#line 45
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$set(void );

static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$toggle(void );




static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$makeOutput(void );
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$makeOutput(void );
#line 29
static void LedsP$Led0$set(void );
static void LedsP$Led0$clr(void );




static void LedsP$Led1$makeOutput(void );
#line 29
static void LedsP$Led1$set(void );
static void LedsP$Led1$clr(void );
static void LedsP$Led2$toggle(void );



static void LedsP$Led2$makeOutput(void );
#line 29
static void LedsP$Led2$set(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 63
static inline void LedsP$Leds$led0On(void );
#line 78
static inline void LedsP$Leds$led1On(void );
#line 103
static inline void LedsP$Leds$led2Toggle(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$makeOutput(void );
#line 34
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$set(void );




static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$clr(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$set(void );
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$clr(void );




static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$makeOutput(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$makeOutput(void );
#line 34
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$set(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$clr(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$set(void );
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$clr(void );




static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$makeOutput(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$toggle(void );
#line 71
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$makeOutput(void );
#line 34
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$set(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$set(void );

static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$toggle(void );



static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$makeOutput(void );
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$inUse(void );







static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId(void );
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$rxDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x102105020, 
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$txDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x102105020);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$fired(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x102105e18);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawI2CInterrupts$fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$default$fired(uint8_t id);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$__nesc_unnamed4324 {
#line 39
  FcfsResourceQueueC$1$NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$resQ[1U];
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$NO_ENTRY;

static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$Init$init(void );




static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void );



static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void );
#line 72
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceRequested$requested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d03c8);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$unconfigure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$configure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Queue$dequeue(void );
# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$granted(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$granted(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$grantedTask$postTask(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$__nesc_unnamed4325 {
#line 75
  ArbiterP$1$grantedTask = 7U
};
#line 75
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$__nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$__nesc_unnamed4326 {
#line 67
  ArbiterP$1$RES_CONTROLLED, ArbiterP$1$RES_GRANTING, ArbiterP$1$RES_IMM_GRANTING, ArbiterP$1$RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$__nesc_unnamed4327 {
#line 68
  ArbiterP$1$default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$__nesc_unnamed4328 {
#line 69
  ArbiterP$1$NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_CONTROLLED;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$default_owner_id;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$reqResId;



static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$request(uint8_t id);
#line 108
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$release(uint8_t id);
#line 130
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$release(void );
#line 150
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ArbiterInfo$inUse(void );
#line 163
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ArbiterInfo$userId(void );
#line 187
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$grantedTask$runTask(void );
#line 199
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$default$granted(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(uint8_t id);



static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$default$granted(void );

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$default$requested(void );





static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(uint8_t id);
# 97 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430I2C0P$HplUsart$resetUsart(bool reset);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static volatile uint8_t HplMsp430I2C0P$U0CTL __asm ("0x0070");





static inline bool HplMsp430I2C0P$HplI2C$isI2C(void );



static inline void HplMsp430I2C0P$HplI2C$clearModeI2C(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$HplGeneralIO$makeOutput(void );
#line 34
static void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$HplGeneralIO$set(void );




static void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$HplGeneralIO$clr(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$set(void );
static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$clr(void );




static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$makeOutput(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$HplGeneralIO$makeOutput(void );
#line 34
static void /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$HplGeneralIO$set(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$GeneralIO$set(void );





static inline void /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$GeneralIO$makeOutput(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBinderP.nc"
static inline volume_id_t /*RandRWAppC.BlockStorageC.BinderP*/Stm25pBinderP$0$Volume$getVolumeId(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(
# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x102251e58, 
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x10224c020, 
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t * msg);







static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 81
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(uint8_t id, message_t *msg, error_t result);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 115
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void );



static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t len);
#line 156
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialP$SplitControl$startDone(error_t error);
#line 117
static void SerialP$SplitControl$stopDone(error_t error);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$stopDoneTask$postTask(void );
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t SerialP$SerialControl$start(void );









static error_t SerialP$SerialControl$stop(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$RunTx$postTask(void );
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP$SerialFlush$flush(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$startDoneTask$postTask(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP$SerialFrameComm$putDelimiter(void );
#line 68
static void SerialP$SerialFrameComm$resetReceive(void );
#line 54
static error_t SerialP$SerialFrameComm$putData(uint8_t data);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$defaultSerialFlushTask$postTask(void );
# 70 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP$SendBytePacket$nextByte(void );









static void SerialP$SendBytePacket$sendCompleted(error_t error);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP$ReceiveBytePacket$startPacket(void );






static void SerialP$ReceiveBytePacket$byteReceived(uint8_t data);










static void SerialP$ReceiveBytePacket$endPacket(error_t result);
# 189 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP$__nesc_unnamed4329 {
#line 189
  SerialP$RunTx = 8U
};
#line 189
typedef int SerialP$__nesc_sillytask_RunTx[SerialP$RunTx];
#line 320
enum SerialP$__nesc_unnamed4330 {
#line 320
  SerialP$startDoneTask = 9U
};
#line 320
typedef int SerialP$__nesc_sillytask_startDoneTask[SerialP$startDoneTask];





enum SerialP$__nesc_unnamed4331 {
#line 326
  SerialP$stopDoneTask = 10U
};
#line 326
typedef int SerialP$__nesc_sillytask_stopDoneTask[SerialP$stopDoneTask];








enum SerialP$__nesc_unnamed4332 {
#line 335
  SerialP$defaultSerialFlushTask = 11U
};
#line 335
typedef int SerialP$__nesc_sillytask_defaultSerialFlushTask[SerialP$defaultSerialFlushTask];
#line 79
enum SerialP$__nesc_unnamed4333 {
  SerialP$RX_DATA_BUFFER_SIZE = 2, 
  SerialP$TX_DATA_BUFFER_SIZE = 4, 
  SerialP$SERIAL_MTU = 255, 
  SerialP$SERIAL_VERSION = 1, 
  SerialP$ACK_QUEUE_SIZE = 5
};

enum SerialP$__nesc_unnamed4334 {
  SerialP$RXSTATE_NOSYNC, 
  SerialP$RXSTATE_PROTO, 
  SerialP$RXSTATE_TOKEN, 
  SerialP$RXSTATE_INFO, 
  SerialP$RXSTATE_INACTIVE
};

enum SerialP$__nesc_unnamed4335 {
  SerialP$TXSTATE_IDLE, 
  SerialP$TXSTATE_PROTO, 
  SerialP$TXSTATE_SEQNO, 
  SerialP$TXSTATE_INFO, 
  SerialP$TXSTATE_FCS1, 
  SerialP$TXSTATE_FCS2, 
  SerialP$TXSTATE_ENDFLAG, 
  SerialP$TXSTATE_ENDWAIT, 
  SerialP$TXSTATE_FINISH, 
  SerialP$TXSTATE_ERROR, 
  SerialP$TXSTATE_INACTIVE
};





#line 109
typedef enum SerialP$__nesc_unnamed4336 {
  SerialP$BUFFER_AVAILABLE, 
  SerialP$BUFFER_FILLING, 
  SerialP$BUFFER_COMPLETE
} SerialP$tx_data_buffer_states_t;

enum SerialP$__nesc_unnamed4337 {
  SerialP$TX_ACK_INDEX = 0, 
  SerialP$TX_DATA_INDEX = 1, 
  SerialP$TX_BUFFER_COUNT = 2
};






#line 122
typedef struct SerialP$__nesc_unnamed4338 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$RX_DATA_BUFFER_SIZE + 1];
} SerialP$rx_buf_t;




#line 128
typedef struct SerialP$__nesc_unnamed4339 {
  uint8_t state;
  uint8_t buf;
} SerialP$tx_buf_t;





#line 133
typedef struct SerialP$__nesc_unnamed4340 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$ACK_QUEUE_SIZE + 1];
} SerialP$ack_queue_t;



SerialP$rx_buf_t SerialP$rxBuf;
SerialP$tx_buf_t SerialP$txBuf[SerialP$TX_BUFFER_COUNT];



uint8_t SerialP$rxState;
uint8_t SerialP$rxByteCnt;
uint8_t SerialP$rxProto;
uint8_t SerialP$rxSeqno;
uint16_t SerialP$rxCRC;



uint8_t SerialP$txState;
uint8_t SerialP$txByteCnt;
uint8_t SerialP$txProto;
uint8_t SerialP$txSeqno;
uint16_t SerialP$txCRC;
uint8_t SerialP$txPending;
uint8_t SerialP$txIndex;


SerialP$ack_queue_t SerialP$ackQ;

bool SerialP$offPending = FALSE;



static __inline void SerialP$txInit(void );
static __inline void SerialP$rxInit(void );
static __inline void SerialP$ackInit(void );

static __inline bool SerialP$ack_queue_is_full(void );
static __inline bool SerialP$ack_queue_is_empty(void );
static __inline void SerialP$ack_queue_push(uint8_t token);
static __inline uint8_t SerialP$ack_queue_top(void );
static inline uint8_t SerialP$ack_queue_pop(void );




static __inline void SerialP$rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP$rx_buffer_top(void );
static __inline uint8_t SerialP$rx_buffer_pop(void );
static __inline uint16_t SerialP$rx_current_crc(void );

static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP$MaybeScheduleTx(void );




static __inline void SerialP$txInit(void );
#line 205
static __inline void SerialP$rxInit(void );








static __inline void SerialP$ackInit(void );



static inline error_t SerialP$Init$init(void );
#line 232
static __inline bool SerialP$ack_queue_is_full(void );









static __inline bool SerialP$ack_queue_is_empty(void );





static __inline void SerialP$ack_queue_push(uint8_t token);









static __inline uint8_t SerialP$ack_queue_top(void );









static inline uint8_t SerialP$ack_queue_pop(void );
#line 295
static __inline void SerialP$rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP$rx_buffer_top(void );



static __inline uint8_t SerialP$rx_buffer_pop(void );





static __inline uint16_t SerialP$rx_current_crc(void );










static inline void SerialP$startDoneTask$runTask(void );





static inline void SerialP$stopDoneTask$runTask(void );



static inline void SerialP$SerialFlush$flushDone(void );




static inline void SerialP$defaultSerialFlushTask$runTask(void );


static inline void SerialP$SerialFlush$default$flush(void );



static inline error_t SerialP$SplitControl$start(void );




static void SerialP$testOff(void );
#line 384
static inline void SerialP$SerialFrameComm$delimiterReceived(void );


static inline void SerialP$SerialFrameComm$dataReceived(uint8_t data);



static inline bool SerialP$valid_rx_proto(uint8_t proto);










static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
#line 502
static void SerialP$MaybeScheduleTx(void );










static inline error_t SerialP$SendBytePacket$completeSend(void );








static inline error_t SerialP$SendBytePacket$startSend(uint8_t b);
#line 539
static inline void SerialP$RunTx$runTask(void );
#line 642
static inline void SerialP$SerialFrameComm$putDone(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void );
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x1023a6108, 
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x1023a75f8, 
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x1024003c0, 
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x1024003c0);
# 23 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x1024003c0, 
# 23 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void );
#line 51
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t first_byte);
# 147 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4341 {
#line 147
  SerialDispatcherP$0$signalSendDone = 12U
};
#line 147
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone];
#line 264
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4342 {
#line 264
  SerialDispatcherP$0$receiveTask = 13U
};
#line 264
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4343 {
  SerialDispatcherP$0$SEND_STATE_IDLE = 0, 
  SerialDispatcherP$0$SEND_STATE_BEGIN = 1, 
  SerialDispatcherP$0$SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4344 {
  SerialDispatcherP$0$RECV_STATE_IDLE = 0, 
  SerialDispatcherP$0$RECV_STATE_BEGIN = 1, 
  SerialDispatcherP$0$RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4345 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len);
#line 147
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void );
#line 167
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void );
#line 183
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void );
#line 233
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b);
#line 264
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void );
#line 285
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result);
#line 344
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC$UartStream$send(
#line 44
uint8_t * buf, 



uint16_t len);
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t data);





static void HdlcTranslateC$SerialFrameComm$putDone(void );
#line 74
static void HdlcTranslateC$SerialFrameComm$delimiterReceived(void );
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
#line 44
typedef struct HdlcTranslateC$__nesc_unnamed4346 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC$HdlcState;


HdlcTranslateC$HdlcState HdlcTranslateC$state = { 0, 0 };
uint8_t HdlcTranslateC$txTemp;
uint8_t HdlcTranslateC$m_data;


static inline void HdlcTranslateC$SerialFrameComm$resetReceive(void );





static inline void HdlcTranslateC$UartStream$receivedByte(uint8_t data);
#line 86
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void );





static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data);
#line 104
static void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error);










static inline void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP$0$Msp430UartConfigure$getConfig(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024abe20);
# 97 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$resetUsart(bool reset);
#line 179
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$disableIntr(void );


static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$enableIntr(void );
#line 224
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$tx(uint8_t data);
#line 128
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$disableUart(void );
#line 174
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$setModeUart(msp430_uart_union_config_t *config);
# 79 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$receivedByte(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024af860, 
# 79 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$receiveDone(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024af860, 
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$sendDone(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024af860, 
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$release(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024acbe8);
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$immediateRequest(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024acbe8);
# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$isOwner(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024acbe8);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$granted(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x1024b4978);
#line 59
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_len;
#line 59
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_len;
uint8_t * /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_buf;
#line 60
uint8_t * /*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_buf;
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_pos;
#line 61
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_pos;
uint8_t /*Msp430Uart1P.UartP*/Msp430UartP$0$m_byte_time;
uint8_t /*Msp430Uart1P.UartP*/Msp430UartP$0$current_owner;

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$immediateRequest(uint8_t id);
#line 77
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$release(uint8_t id);







static void /*Msp430Uart1P.UartP*/Msp430UartP$0$ResourceConfigure$configure(uint8_t id);






static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$ResourceConfigure$unconfigure(uint8_t id);








static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$granted(uint8_t id);
#line 134
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartInterrupts$rxDone(uint8_t id, uint8_t data);
#line 147
static error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$send(uint8_t id, uint8_t *buf, uint16_t len);
#line 162
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartInterrupts$txDone(uint8_t id);
#line 208
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$Counter$overflow(void );

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$isOwner(uint8_t id);

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$immediateRequest(uint8_t id);
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$release(uint8_t id);
static inline msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP$0$Msp430UartConfigure$default$getConfig(uint8_t id);



static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$default$granted(uint8_t id);

static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$receivedByte(uint8_t id, uint8_t byte);
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P$UCLK$selectIOFunc(void );
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart1P$Interrupts$rxDone(uint8_t data);
#line 49
static void HplMsp430Usart1P$Interrupts$txDone(void );
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P$URXD$selectIOFunc(void );
#line 78
static void HplMsp430Usart1P$URXD$selectModuleFunc(void );






static void HplMsp430Usart1P$UTXD$selectIOFunc(void );
#line 78
static void HplMsp430Usart1P$UTXD$selectModuleFunc(void );






static void HplMsp430Usart1P$SOMI$selectIOFunc(void );
#line 85
static void HplMsp430Usart1P$SIMO$selectIOFunc(void );
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static volatile uint8_t HplMsp430Usart1P$IE2 __asm ("0x0001");
static volatile uint8_t HplMsp430Usart1P$ME2 __asm ("0x0005");
static volatile uint8_t HplMsp430Usart1P$IFG2 __asm ("0x0003");
static volatile uint8_t HplMsp430Usart1P$U1TCTL __asm ("0x0079");
static volatile uint8_t HplMsp430Usart1P$U1RCTL __asm ("0x007A");
static volatile uint8_t HplMsp430Usart1P$U1TXBUF __asm ("0x007F");



void sig_UART1RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(6)))  ;




void sig_UART1TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(4)))  ;



static inline error_t HplMsp430Usart1P$AsyncStdControl$start(void );



static inline error_t HplMsp430Usart1P$AsyncStdControl$stop(void );
#line 140
static inline void HplMsp430Usart1P$Usart$setUbr(uint16_t control);










static inline void HplMsp430Usart1P$Usart$setUmctl(uint8_t control);







static inline void HplMsp430Usart1P$Usart$resetUsart(bool reset);
#line 203
static inline void HplMsp430Usart1P$Usart$enableUart(void );







static void HplMsp430Usart1P$Usart$disableUart(void );








static inline void HplMsp430Usart1P$Usart$enableUartTx(void );




static inline void HplMsp430Usart1P$Usart$disableUartTx(void );





static inline void HplMsp430Usart1P$Usart$enableUartRx(void );




static inline void HplMsp430Usart1P$Usart$disableUartRx(void );
#line 251
static void HplMsp430Usart1P$Usart$disableSpi(void );
#line 283
static inline void HplMsp430Usart1P$configUart(msp430_uart_union_config_t *config);









static inline void HplMsp430Usart1P$Usart$setModeUart(msp430_uart_union_config_t *config);
#line 347
static inline void HplMsp430Usart1P$Usart$clrIntr(void );
#line 359
static inline void HplMsp430Usart1P$Usart$disableIntr(void );
#line 377
static inline void HplMsp430Usart1P$Usart$enableIntr(void );






static inline void HplMsp430Usart1P$Usart$tx(uint8_t data);
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$ArbiterInfo$inUse(void );







static uint8_t /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$ArbiterInfo$userId(void );
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$rxDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x102105020, 
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$txDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x102105020);









static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$RawInterrupts$txDone(void );




static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$RawInterrupts$rxDone(uint8_t data);









static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$default$txDone(uint8_t id);
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$default$rxDone(uint8_t id, uint8_t data);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$__nesc_unnamed4347 {
#line 39
  FcfsResourceQueueC$2$NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$resQ[1U];
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$qHead = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$NO_ENTRY;
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$qTail = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$NO_ENTRY;

static inline error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$Init$init(void );




static inline bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEmpty(void );







static inline resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$FcfsQueue$dequeue(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceRequested$immediateRequested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d03c8);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$unconfigure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$configure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019cd6e0);
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Queue$dequeue(void );
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceDefaultOwner$granted(void );
#line 81
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceDefaultOwner$immediateRequested(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$granted(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x1019d1220);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$grantedTask$postTask(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$__nesc_unnamed4348 {
#line 75
  ArbiterP$2$grantedTask = 14U
};
#line 75
typedef int /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$__nesc_sillytask_grantedTask[/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$grantedTask];
#line 67
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$__nesc_unnamed4349 {
#line 67
  ArbiterP$2$RES_CONTROLLED, ArbiterP$2$RES_GRANTING, ArbiterP$2$RES_IMM_GRANTING, ArbiterP$2$RES_BUSY
};
#line 68
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$__nesc_unnamed4350 {
#line 68
  ArbiterP$2$default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$__nesc_unnamed4351 {
#line 69
  ArbiterP$2$NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_CONTROLLED;
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$default_owner_id;
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$reqResId;
#line 90
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$immediateRequest(uint8_t id);
#line 108
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$release(uint8_t id);
#line 130
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceDefaultOwner$release(void );
#line 150
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ArbiterInfo$inUse(void );
#line 163
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ArbiterInfo$userId(void );










static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$isOwner(uint8_t id);
#line 187
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$grantedTask$runTask(void );
#line 199
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$default$granted(uint8_t id);



static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceRequested$default$immediateRequested(uint8_t id);









static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$default$unconfigure(uint8_t id);
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release(void );
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void );









static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested(void );




static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void );




static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t TelosSerialP$Resource$release(void );
#line 87
static error_t TelosSerialP$Resource$immediateRequest(void );
# 8 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosa/TelosSerialP.nc"
msp430_uart_union_config_t TelosSerialP$msp430_uart_telos_config = { { .ubr = UBR_1MHZ_115200, .umctl = UMCTL_1MHZ_115200, .ssel = 0x02, .pena = 0, .pev = 0, .spb = 0, .clen = 1, .listen = 0, .mm = 0, .ckpl = 0, .urxse = 0, .urxeie = 1, .urxwie = 0, .utxe = 1, .urxe = 1 } };

static inline error_t TelosSerialP$StdControl$start(void );


static inline error_t TelosSerialP$StdControl$stop(void );



static inline void TelosSerialP$Resource$granted(void );

static inline msp430_uart_union_config_t *TelosSerialP$Msp430UartConfigure$getConfig(void );
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen);
# 212 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_enable_interrupt(void )
{
   __asm volatile ("eint");}

# 185 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Timer$overflow(void )
{
}

#line 185
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Timer$overflow(void )
{
}

#line 185
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Timer$overflow(void )
{
}

# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$overflow(void ){
#line 37
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Timer$overflow();
#line 37
}
#line 37
# 126 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Overflow$fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$default$fired(uint8_t n)
{
}

# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$fired(uint8_t arg_0x1017aede8){
#line 28
  switch (arg_0x1017aede8) {
#line 28
    case 0:
#line 28
      /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Event$fired();
#line 28
      break;
#line 28
    case 1:
#line 28
      /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Event$fired();
#line 28
      break;
#line 28
    case 2:
#line 28
      /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Event$fired();
#line 28
      break;
#line 28
    case 5:
#line 28
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Overflow$fired();
#line 28
      break;
#line 28
    default:
#line 28
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$default$fired(arg_0x1017aede8);
#line 28
      break;
#line 28
    }
#line 28
}
#line 28
# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX0$fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$fired(0);
}

# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP$VectorTimerA0$fired(void ){
#line 28
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX0$fired();
#line 28
}
#line 28
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$__nesc_unnamed4352 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$int2CC(* (volatile uint16_t * )354U);
}

#line 177
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$default$captured(uint16_t n)
{
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$captured(uint16_t time){
#line 75
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$default$captured(time);
#line 75
}
#line 75
# 139 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

#line 181
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$default$fired(void )
{
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$fired(void ){
#line 34
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$default$fired();
#line 34
}
#line 34
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$__nesc_unnamed4353 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$int2CC(* (volatile uint16_t * )356U);
}

#line 177
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$default$captured(uint16_t n)
{
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$captured(uint16_t time){
#line 75
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$default$captured(time);
#line 75
}
#line 75
# 139 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

#line 181
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$default$fired(void )
{
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$fired(void ){
#line 34
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$default$fired();
#line 34
}
#line 34
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$__nesc_unnamed4354 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Control$getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$int2CC(* (volatile uint16_t * )358U);
}

#line 177
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$default$captured(uint16_t n)
{
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$captured(uint16_t time){
#line 75
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$default$captured(time);
#line 75
}
#line 75
# 139 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

#line 181
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$default$fired(void )
{
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$fired(void ){
#line 34
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$default$fired();
#line 34
}
#line 34
# 120 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX1$fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

#line 123
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$fired(n >> 1);
}

# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP$VectorTimerA1$fired(void ){
#line 28
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX1$fired();
#line 28
}
#line 28
# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX0$fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$fired(0);
}

# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP$VectorTimerB0$fired(void ){
#line 28
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX0$fired();
#line 28
}
#line 28
# 185 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Timer$overflow(void )
{
}

#line 185
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Timer$overflow(void )
{
}

#line 185
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Timer$overflow(void )
{
}

#line 185
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Timer$overflow(void )
{
}

#line 185
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$overflow(void )
{
}

#line 185
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Timer$overflow(void )
{
}

#line 185
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$overflow(void )
{
}

# 103 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$overflow(void )
{
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 166 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow(void )
{
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$overflow(void ){
#line 71
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow();
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC$0$m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC$0$m_upper & /*CounterMilli32C.Transform*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$overflow();
      }
  }
}

# 208 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$Counter$overflow(void )
#line 208
{
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$overflow(void ){
#line 71
  /*Msp430Uart1P.UartP*/Msp430UartP$0$Counter$overflow();
#line 71
  /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$overflow();
}

# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$overflow(void ){
#line 37
  /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$overflow();
#line 37
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Timer$overflow();
#line 37
}
#line 37
# 126 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Overflow$fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$overflow();
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 70 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 151 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm();
      }
  }
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$fired(void ){
#line 67
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$fired();
#line 67
}
#line 67
# 124 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$disableEvents(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$disableEvents();
#line 47
}
#line 47
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$fired(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$fired();
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$fired(void ){
#line 34
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$fired();
#line 34
}
#line 34
# 139 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

#line 177
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$default$captured(uint16_t n)
{
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$captured(uint16_t time){
#line 75
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$default$captured(time);
#line 75
}
#line 75
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$__nesc_unnamed4355 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$int2CC(* (volatile uint16_t * )386U);
}

#line 169
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Event$fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$captured(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$fired();
    }
}

# 86 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{
  return SchedulerBasicP$m_next[id] != SchedulerBasicP$NO_TASK || SchedulerBasicP$m_tail == id;
}

static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  if (!SchedulerBasicP$isWaiting(id)) 
    {
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_head = id;
          SchedulerBasicP$m_tail = id;
        }
      else 
        {
          SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
          SchedulerBasicP$m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$get(void ){
#line 34
  unsigned int __nesc_result;
#line 34

#line 34
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get();
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$get();
}

# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$size_type /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$get(void ){
#line 53
  unsigned int __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 70 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$isOverflowPending(void ){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$isOverflowPending();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$isOverflowPending();
}

# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$isOverflowPending(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$isOverflowPending();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 119 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$enableEvents(void ){
#line 46
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$enableEvents();
#line 46
}
#line 46
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$clearPendingInterrupt(void ){
#line 33
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$clearPendingInterrupt();
#line 33
}
#line 33
# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEvent(uint16_t time){
#line 30
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEvent(time);
#line 30
}
#line 30
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$get(void ){
#line 34
  unsigned int __nesc_result;
#line 34

#line 34
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get();
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 154 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$get() + x;
}

# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEventFromNow(uint16_t delta){
#line 32
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEventFromNow(delta);
#line 32
}
#line 32
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$get(void ){
#line 34
  unsigned int __nesc_result;
#line 34

#line 34
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get();
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 70 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$get();
    uint16_t elapsed = now - t0;

#line 76
    if (elapsed >= dt) 
      {
        /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 83
        if (remaining <= 2) {
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEventFromNow(2);
          }
        else {
#line 86
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEvent(now + remaining);
          }
      }
#line 88
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$clearPendingInterrupt();
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$enableEvents();
  }
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type dt){
#line 92
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 181 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$default$fired(void )
{
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$fired(void ){
#line 34
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$default$fired();
#line 34
}
#line 34
# 139 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

#line 177
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$default$captured(uint16_t n)
{
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$captured(uint16_t time){
#line 75
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$default$captured(time);
#line 75
}
#line 75
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$__nesc_unnamed4356 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$int2CC(* (volatile uint16_t * )388U);
}

#line 169
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Event$fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$captured(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$default$fired(void )
{
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$fired(void ){
#line 34
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$default$fired();
#line 34
}
#line 34
# 139 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

#line 177
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$default$captured(uint16_t n)
{
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$captured(uint16_t time){
#line 75
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$default$captured(time);
#line 75
}
#line 75
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$__nesc_unnamed4357 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$int2CC(* (volatile uint16_t * )390U);
}

#line 169
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Event$fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$captured(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$default$fired(void )
{
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$fired(void ){
#line 34
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$default$fired();
#line 34
}
#line 34
# 139 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

#line 177
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$default$captured(uint16_t n)
{
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$captured(uint16_t time){
#line 75
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$default$captured(time);
#line 75
}
#line 75
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$__nesc_unnamed4358 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$int2CC(* (volatile uint16_t * )392U);
}

#line 169
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Event$fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$captured(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$default$fired(void )
{
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$fired(void ){
#line 34
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$default$fired();
#line 34
}
#line 34
# 139 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

#line 177
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$default$captured(uint16_t n)
{
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$captured(uint16_t time){
#line 75
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$default$captured(time);
#line 75
}
#line 75
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$__nesc_unnamed4359 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Control$getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$int2CC(* (volatile uint16_t * )394U);
}

#line 169
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Event$fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$captured(/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$default$fired(void )
{
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$fired(void ){
#line 34
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$default$fired();
#line 34
}
#line 34
# 139 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

#line 177
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$default$captured(uint16_t n)
{
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$captured(uint16_t time){
#line 75
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$default$captured(time);
#line 75
}
#line 75
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$__nesc_unnamed4360 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Control$getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$int2CC(* (volatile uint16_t * )396U);
}

#line 169
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Event$fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$captured(/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$default$fired(void )
{
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$fired(void ){
#line 34
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$default$fired();
#line 34
}
#line 34
# 139 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

#line 177
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$default$captured(uint16_t n)
{
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$captured(uint16_t time){
#line 75
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$default$captured(time);
#line 75
}
#line 75
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$__nesc_unnamed4361 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Control$getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$int2CC(* (volatile uint16_t * )398U);
}

#line 169
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Event$fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$captured(/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$fired();
    }
}

# 120 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX1$fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

#line 123
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$fired(n >> 1);
}

# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP$VectorTimerB1$fired(void ){
#line 28
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX1$fired();
#line 28
}
#line 28
# 113 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP$Scheduler$init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$init(void ){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$set(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 45
  * (volatile uint8_t * )49U |= 0x01 << 6;
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$set(void ){
#line 34
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$set();
#line 34
}
#line 34
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$set(void )
#line 37
{
#line 37
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$set();
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 29
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$set();
#line 29
}
#line 29
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$set(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 45
  * (volatile uint8_t * )49U |= 0x01 << 5;
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$set(void ){
#line 34
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$set();
#line 34
}
#line 34
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$set(void )
#line 37
{
#line 37
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$set();
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 29
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$set();
#line 29
}
#line 29
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$set(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 45
  * (volatile uint8_t * )49U |= 0x01 << 4;
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$set(void ){
#line 34
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$set();
#line 34
}
#line 34
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$set(void )
#line 37
{
#line 37
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$set();
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 29
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$set();
#line 29
}
#line 29
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$makeOutput(void )
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t * )50U |= 0x01 << 6;
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$makeOutput(void ){
#line 71
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$makeOutput();
#line 71
}
#line 71
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$makeOutput(void )
#line 43
{
#line 43
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$makeOutput();
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 35
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$makeOutput();
#line 35
}
#line 35
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$makeOutput(void )
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t * )50U |= 0x01 << 5;
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$makeOutput(void ){
#line 71
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$makeOutput();
#line 71
}
#line 71
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$makeOutput(void )
#line 43
{
#line 43
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$makeOutput();
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 35
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$makeOutput();
#line 35
}
#line 35
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$makeOutput(void )
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t * )50U |= 0x01 << 4;
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$makeOutput(void ){
#line 71
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$makeOutput();
#line 71
}
#line 71
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$makeOutput(void )
#line 43
{
#line 43
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$makeOutput();
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 35
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$makeOutput();
#line 35
}
#line 35
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP$LedsInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_SIMO0_PIN()
#line 33
{
#line 33
  static volatile uint8_t r __asm ("0x0019");

#line 33
  r |= 1 << 1;
}

#line 34
static inline  void TOSH_SET_UCLK0_PIN()
#line 34
{
#line 34
  static volatile uint8_t r __asm ("0x0019");

#line 34
  r |= 1 << 3;
}

#line 85
static inline  void TOSH_SET_FLASH_CS_PIN()
#line 85
{
#line 85
  static volatile uint8_t r __asm ("0x001D");

#line 85
  r |= 1 << 4;
}

#line 34
static inline  void TOSH_CLR_UCLK0_PIN()
#line 34
{
#line 34
  static volatile uint8_t r __asm ("0x0019");

#line 34
  r &= ~(1 << 3);
}

#line 85
static inline  void TOSH_CLR_FLASH_CS_PIN()
#line 85
{
#line 85
  static volatile uint8_t r __asm ("0x001D");

#line 85
  r &= ~(1 << 4);
}

# 11 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC$TOSH_wait(void )
#line 11
{
   __asm volatile ("nop"); __asm volatile ("nop");}

# 86 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_FLASH_HOLD_PIN()
#line 86
{
#line 86
  static volatile uint8_t r __asm ("0x001D");

#line 86
  r |= 1 << 7;
}

#line 85
static inline  void TOSH_MAKE_FLASH_CS_OUTPUT()
#line 85
{
#line 85
  static volatile uint8_t r __asm ("0x001E");

#line 85
  r |= 1 << 4;
}

#line 86
static inline  void TOSH_MAKE_FLASH_HOLD_OUTPUT()
#line 86
{
#line 86
  static volatile uint8_t r __asm ("0x001E");

#line 86
  r |= 1 << 7;
}

#line 34
static inline  void TOSH_MAKE_UCLK0_OUTPUT()
#line 34
{
#line 34
  static volatile uint8_t r __asm ("0x001A");

#line 34
  r |= 1 << 3;
}

#line 33
static inline  void TOSH_MAKE_SIMO0_OUTPUT()
#line 33
{
#line 33
  static volatile uint8_t r __asm ("0x001A");

#line 33
  r |= 1 << 1;
}

# 27 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static inline void MotePlatformC$TOSH_FLASH_M25P_DP(void )
#line 27
{

  TOSH_MAKE_SIMO0_OUTPUT();
  TOSH_MAKE_UCLK0_OUTPUT();
  TOSH_MAKE_FLASH_HOLD_OUTPUT();
  TOSH_MAKE_FLASH_CS_OUTPUT();
  TOSH_SET_FLASH_HOLD_PIN();
  TOSH_SET_FLASH_CS_PIN();

  MotePlatformC$TOSH_wait();


  TOSH_CLR_FLASH_CS_PIN();
  TOSH_CLR_UCLK0_PIN();

  MotePlatformC$TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(TRUE);

  TOSH_SET_FLASH_CS_PIN();
  TOSH_SET_UCLK0_PIN();
  TOSH_SET_SIMO0_PIN();
}

#line 6
static __inline void MotePlatformC$uwait(uint16_t u)
#line 6
{
  uint16_t t0 = TA0R;

#line 8
  while (TA0R - t0 <= u) ;
}

#line 56
static inline error_t MotePlatformC$Init$init(void )
#line 56
{
  /* atomic removed: atomic calls only */

  {
    P1SEL = 0;
    P2SEL = 0;
    P3SEL = 0;
    P4SEL = 0;
    P5SEL = 0;
    P6SEL = 0;

    P1OUT = 0x00;
    P1DIR = 0xe0;

    P2OUT = 0x30;
    P2DIR = 0x7b;

    P3OUT = 0x00;
    P3DIR = 0xf1;

    P4OUT = 0xdd;
    P4DIR = 0xfd;

    P5OUT = 0xff;
    P5DIR = 0xff;

    P6OUT = 0x00;
    P6DIR = 0xff;

    P1IE = 0;
    P2IE = 0;






    MotePlatformC$uwait(1024 * 10);

    MotePlatformC$TOSH_FLASH_M25P_DP();
  }

  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MotePlatformC$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 148 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP$startTimerB(void )
{

  Msp430ClockP$TBCTL = 0x0020 | (Msp430ClockP$TBCTL & ~(0x0020 | 0x0010));
}

#line 136
static inline void Msp430ClockP$startTimerA(void )
{

  Msp430ClockP$TA0CTL = 0x0020 | (Msp430ClockP$TA0CTL & ~(0x0020 | 0x0010));
}

#line 100
static inline void Msp430ClockP$Msp430ClockInit$defaultInitTimerB(void )
{
  TBR = 0;









  Msp430ClockP$TBCTL = 0x0100 | 0x0002;
}

#line 130
static inline void Msp430ClockP$Msp430ClockInit$default$initTimerB(void )
{
  Msp430ClockP$Msp430ClockInit$defaultInitTimerB();
}

# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP$Msp430ClockInit$initTimerB(void ){
#line 32
  Msp430ClockP$Msp430ClockInit$default$initTimerB();
#line 32
}
#line 32
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP$Msp430ClockInit$defaultInitTimerA(void )
{
  TA0R = 0;









  Msp430ClockP$TA0CTL = 0x0200 | 0x0002;
}

#line 125
static inline void Msp430ClockP$Msp430ClockInit$default$initTimerA(void )
{
  Msp430ClockP$Msp430ClockInit$defaultInitTimerA();
}

# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP$Msp430ClockInit$initTimerA(void ){
#line 31
  Msp430ClockP$Msp430ClockInit$default$initTimerA();
#line 31
}
#line 31
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP$Msp430ClockInit$defaultInitClocks(void )
{





  BCSCTL1 = 0x80 | (BCSCTL1 & ((0x04 | 0x02) | 0x01));







  BCSCTL2 = 0x04;


  Msp430ClockP$IE1 &= ~(1 << 1);
}

#line 120
static inline void Msp430ClockP$Msp430ClockInit$default$initClocks(void )
{
  Msp430ClockP$Msp430ClockInit$defaultInitClocks();
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP$Msp430ClockInit$initClocks(void ){
#line 30
  Msp430ClockP$Msp430ClockInit$default$initClocks();
#line 30
}
#line 30
# 166 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline uint16_t Msp430ClockP$test_calib_busywait_delta(int calib)
{
  int8_t aclk_count = 2;
  uint16_t dco_prev = 0;
  uint16_t dco_curr = 0;

  Msp430ClockP$set_dco_calib(calib);

  while (aclk_count-- > 0) 
    {
      TBCCR0 = TBR + Msp430ClockP$ACLK_CALIB_PERIOD;
      TBCCTL0 &= ~0x0001;
      while ((TBCCTL0 & 0x0001) == 0) ;
      dco_prev = dco_curr;
      dco_curr = TA0R;
    }

  return dco_curr - dco_prev;
}




static inline void Msp430ClockP$busyCalibrateDco(void )
{

  int calib;
  int step;






  for (calib = 0, step = 0x800; step != 0; step >>= 1) 
    {

      if (Msp430ClockP$test_calib_busywait_delta(calib | step) <= Msp430ClockP$TARGET_DCO_DELTA) {
        calib |= step;
        }
    }

  if ((calib & 0x0e0) == 0x0e0) {
    calib &= ~0x01f;
    }
  Msp430ClockP$set_dco_calib(calib);
}

#line 52
static inline void Msp430ClockP$Msp430ClockInit$defaultSetupDcoCalibrate(void )
{



  Msp430ClockP$TA0CTL = 0x0200 | 0x0020;
  Msp430ClockP$TBCTL = 0x0100 | 0x0020;
  BCSCTL1 = 0x80 | 0x04;
  BCSCTL2 = 0;
  TBCCTL0 = 0x4000;
}

#line 115
static inline void Msp430ClockP$Msp430ClockInit$default$setupDcoCalibrate(void )
{
  Msp430ClockP$Msp430ClockInit$defaultSetupDcoCalibrate();
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP$Msp430ClockInit$setupDcoCalibrate(void ){
#line 29
  Msp430ClockP$Msp430ClockInit$default$setupDcoCalibrate();
#line 29
}
#line 29
# 214 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline error_t Msp430ClockP$Init$init(void )
{

  Msp430ClockP$TA0CTL = 0x0004;
  Msp430ClockP$TA0IV = 0;
  Msp430ClockP$TBCTL = 0x0004;
  Msp430ClockP$TBIV = 0;
  /* atomic removed: atomic calls only */

  {
    Msp430ClockP$Msp430ClockInit$setupDcoCalibrate();
    Msp430ClockP$busyCalibrateDco();
    Msp430ClockP$Msp430ClockInit$initClocks();
    Msp430ClockP$Msp430ClockInit$initTimerA();
    Msp430ClockP$Msp430ClockInit$initTimerB();
    Msp430ClockP$startTimerA();
    Msp430ClockP$startTimerB();
  }

  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteClockInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = Msp430ClockP$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 10 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
#line 10
{
  PlatformP$MoteClockInit$init();
  PlatformP$MoteInit$init();
  PlatformP$LedsInit$init();
  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP$PlatformInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosb/hardware.h"
static inline  void TOSH_CLR_SIMO0_PIN()
#line 33
{
#line 33
  static volatile uint8_t r __asm ("0x0019");

#line 33
  r &= ~(1 << 1);
}

# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool RealMainP$Scheduler$runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 17 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosa/TelosSerialP.nc"
static inline void TelosSerialP$Resource$granted(void )
#line 17
{
}

# 218 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$default$granted(uint8_t id)
#line 218
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$granted(uint8_t arg_0x1024b4978){
#line 92
  switch (arg_0x1024b4978) {
#line 92
    case /*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID:
#line 92
      TelosSerialP$Resource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$default$granted(arg_0x1024b4978);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 101 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$granted(uint8_t id)
#line 101
{
  /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$granted(id);
}

# 199 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$default$granted(uint8_t id)
#line 199
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$granted(uint8_t arg_0x1019d1220){
#line 92
  switch (arg_0x1019d1220) {
#line 92
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C$0$CLIENT_ID:
#line 92
      /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$granted(/*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$default$granted(arg_0x1019d1220);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 213 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$default$configure(uint8_t id)
#line 213
{
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$configure(uint8_t arg_0x1019cd6e0){
#line 49
  switch (arg_0x1019cd6e0) {
#line 49
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C$0$CLIENT_ID:
#line 49
      /*Msp430Uart1P.UartP*/Msp430UartP$0$ResourceConfigure$configure(/*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$default$configure(arg_0x1019cd6e0);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 187 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$grantedTask$runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$reqResId;
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$configure(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId);
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$granted(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId);
}

# 19 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosa/TelosSerialP.nc"
static inline msp430_uart_union_config_t *TelosSerialP$Msp430UartConfigure$getConfig(void )
#line 19
{
  return &TelosSerialP$msp430_uart_telos_config;
}

# 214 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP$0$Msp430UartConfigure$default$getConfig(uint8_t id)
#line 214
{
  return &msp430_uart_default_config;
}

# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartConfigure.nc"
inline static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP$0$Msp430UartConfigure$getConfig(uint8_t arg_0x1024abe20){
#line 39
  union __nesc_unnamed4286 *__nesc_result;
#line 39

#line 39
  switch (arg_0x1024abe20) {
#line 39
    case /*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID:
#line 39
      __nesc_result = TelosSerialP$Msp430UartConfigure$getConfig();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP$0$Msp430UartConfigure$default$getConfig(arg_0x1024abe20);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 359 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P$Usart$disableIntr(void )
#line 359
{
  HplMsp430Usart1P$IE2 &= ~((1 << 5) | (1 << 4));
}

#line 347
static inline void HplMsp430Usart1P$Usart$clrIntr(void )
#line 347
{
  HplMsp430Usart1P$IFG2 &= ~((1 << 5) | (1 << 4));
}

#line 159
static inline void HplMsp430Usart1P$Usart$resetUsart(bool reset)
#line 159
{
  if (reset) {
    U1CTL = 0x01;
    }
  else {
#line 163
    U1CTL &= ~0x01;
    }
}

# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP$22$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )27U |= 0x01 << 6;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P$UTXD$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP$22$IO$selectModuleFunc();
#line 78
}
#line 78
# 220 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P$Usart$enableUartTx(void )
#line 220
{
  HplMsp430Usart1P$UTXD$selectModuleFunc();
  HplMsp430Usart1P$ME2 |= 1 << 5;
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP$23$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )27U &= ~(0x01 << 7);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P$URXD$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP$23$IO$selectIOFunc();
#line 85
}
#line 85
# 236 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P$Usart$disableUartRx(void )
#line 236
{
  HplMsp430Usart1P$ME2 &= ~(1 << 4);
  HplMsp430Usart1P$URXD$selectIOFunc();
}

# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP$23$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )27U |= 0x01 << 7;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P$URXD$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP$23$IO$selectModuleFunc();
#line 78
}
#line 78
# 231 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P$Usart$enableUartRx(void )
#line 231
{
  HplMsp430Usart1P$URXD$selectModuleFunc();
  HplMsp430Usart1P$ME2 |= 1 << 4;
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP$22$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )27U &= ~(0x01 << 6);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P$UTXD$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP$22$IO$selectIOFunc();
#line 85
}
#line 85
# 225 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P$Usart$disableUartTx(void )
#line 225
{
  HplMsp430Usart1P$ME2 &= ~(1 << 5);
  HplMsp430Usart1P$UTXD$selectIOFunc();
}

#line 203
static inline void HplMsp430Usart1P$Usart$enableUart(void )
#line 203
{
  /* atomic removed: atomic calls only */
#line 204
  {
    HplMsp430Usart1P$UTXD$selectModuleFunc();
    HplMsp430Usart1P$URXD$selectModuleFunc();
  }
  HplMsp430Usart1P$ME2 |= (1 << 5) | (1 << 4);
}

#line 151
static inline void HplMsp430Usart1P$Usart$setUmctl(uint8_t control)
#line 151
{
  U1MCTL = control;
}

#line 140
static inline void HplMsp430Usart1P$Usart$setUbr(uint16_t control)
#line 140
{
  /* atomic removed: atomic calls only */
#line 141
  {
    U1BR0 = control & 0x00FF;
    U1BR1 = (control >> 8) & 0x00FF;
  }
}

#line 283
static inline void HplMsp430Usart1P$configUart(msp430_uart_union_config_t *config)
#line 283
{

  U1CTL = (config->uartRegisters.uctl & ~0x04) | 0x01;
  HplMsp430Usart1P$U1TCTL = config->uartRegisters.utctl;
  HplMsp430Usart1P$U1RCTL = config->uartRegisters.urctl;

  HplMsp430Usart1P$Usart$setUbr(config->uartRegisters.ubr);
  HplMsp430Usart1P$Usart$setUmctl(config->uartRegisters.umctl);
}

static inline void HplMsp430Usart1P$Usart$setModeUart(msp430_uart_union_config_t *config)
#line 293
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 295
    {
      HplMsp430Usart1P$Usart$resetUsart(TRUE);
      HplMsp430Usart1P$Usart$disableSpi();
      HplMsp430Usart1P$configUart(config);
      if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 1) {
          HplMsp430Usart1P$Usart$enableUart();
        }
      else {
#line 301
        if (config->uartConfig.utxe == 0 && config->uartConfig.urxe == 1) {
            HplMsp430Usart1P$Usart$disableUartTx();
            HplMsp430Usart1P$Usart$enableUartRx();
          }
        else {
#line 304
          if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 0) {
              HplMsp430Usart1P$Usart$disableUartRx();
              HplMsp430Usart1P$Usart$enableUartTx();
            }
          else 
#line 307
            {
              HplMsp430Usart1P$Usart$disableUart();
            }
          }
        }
#line 310
      HplMsp430Usart1P$Usart$resetUsart(FALSE);
      HplMsp430Usart1P$Usart$clrIntr();
      HplMsp430Usart1P$Usart$disableIntr();
    }
#line 313
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

# 174 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$setModeUart(msp430_uart_union_config_t *config){
#line 174
  HplMsp430Usart1P$Usart$setModeUart(config);
#line 174
}
#line 174
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP$33$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )51U &= ~(0x01 << 1);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P$SIMO$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP$33$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP$34$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )51U &= ~(0x01 << 2);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P$SOMI$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP$34$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP$35$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )51U &= ~(0x01 << 3);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P$UCLK$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP$35$IO$selectIOFunc();
#line 85
}
#line 85
# 377 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P$Usart$enableIntr(void )
#line 377
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 378
    {
      HplMsp430Usart1P$IFG2 &= ~((1 << 5) | (1 << 4));
      HplMsp430Usart1P$IE2 |= (1 << 5) | (1 << 4);
    }
#line 381
    __nesc_atomic_end(__nesc_atomic); }
}

# 182 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$enableIntr(void ){
#line 182
  HplMsp430Usart1P$Usart$enableIntr();
#line 182
}
#line 182
# 281 "/opt/nesc/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t * msg)
#line 49
{
  return (serial_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 156
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg)
#line 156
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 158
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$clr(void ){
#line 39
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$clr();
#line 39
}
#line 39
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$clr(void )
#line 38
{
#line 38
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$clr();
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$clr(void ){
#line 30
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$clr();
#line 30
}
#line 30
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0On(void )
#line 63
{
  LedsP$Led0$clr();
  ;
#line 65
  ;
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RandRWC$Leds$led0On(void ){
#line 45
  LedsP$Leds$led0On();
#line 45
}
#line 45
# 75 "RandRWC.nc"
static inline void RandRWC$AMSend$sendDone(message_t *msg, error_t error)
#line 75
{
  if (error != SUCCESS) {
    RandRWC$Leds$led0On();
    }
}

# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(uint8_t id, message_t *msg, error_t result)
#line 89
{
  return;
}

# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(am_id_t arg_0x102251e58, message_t * msg, error_t error){
#line 99
  switch (arg_0x102251e58) {
#line 99
    case 139:
#line 99
      RandRWC$AMSend$sendDone(msg, error);
#line 99
      break;
#line 99
    default:
#line 99
      /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(arg_0x102251e58, msg, error);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result)
#line 85
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, result);
}

# 362 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 362
{
  return;
}

# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(uart_id_t arg_0x1023a6108, message_t * msg, error_t error){
#line 89
  switch (arg_0x1023a6108) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(arg_0x1023a6108, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 147 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void )
#line 147
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError;
#line 151
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled) {
#line 153
    error = ECANCEL;
    }
#line 154
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer, error);
}

#line 201
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which)
#line 201
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 0;
    }
}

# 93 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 93
{
  return msg;
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(am_id_t arg_0x10224c020, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(arg_0x10224c020, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 97
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, msg->data, len);
}

# 357 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 359
{
  return msg;
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(uart_id_t arg_0x1023a75f8, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x1023a75f8) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(arg_0x1023a75f8, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen)
#line 46
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 351 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 352
{
  return 0;
}

# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(uart_id_t arg_0x1024003c0, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x1024003c0) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP$Info$upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(arg_0x1024003c0, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$offset(void )
#line 40
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 344 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id)
#line 344
{
  return 0;
}

# 15 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(uart_id_t arg_0x1024003c0){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x1024003c0) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP$Info$offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(arg_0x1024003c0);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 264 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void )
#line 264
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 269
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 278
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 118 "RandRWC.nc"
static inline void RandRWC$SerialControl$stopDone(error_t e)
#line 118
{
}

# 117 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP$SplitControl$stopDone(error_t error){
#line 117
  RandRWC$SerialControl$stopDone(error);
#line 117
}
#line 117
# 109 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline error_t HplMsp430Usart1P$AsyncStdControl$stop(void )
#line 109
{
  HplMsp430Usart1P$Usart$disableSpi();
  HplMsp430Usart1P$Usart$disableUart();
  return SUCCESS;
}

# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = HplMsp430Usart1P$AsyncStdControl$stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void )
#line 74
{
}

# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void ){
#line 52
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup();
#line 52
}
#line 52
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void )
#line 69
{
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup();
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop();
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceDefaultOwner$granted(void ){
#line 46
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted();
#line 46
}
#line 46
# 128 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$disableUart(void ){
#line 128
  HplMsp430Usart1P$Usart$disableUart();
#line 128
}
#line 128
#line 179
inline static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$disableIntr(void ){
#line 179
  HplMsp430Usart1P$Usart$disableIntr();
#line 179
}
#line 179
#line 97
inline static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$resetUsart(bool reset){
#line 97
  HplMsp430Usart1P$Usart$resetUsart(reset);
#line 97
}
#line 97
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$ResourceConfigure$unconfigure(uint8_t id)
#line 92
{
  /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$resetUsart(TRUE);
  /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$disableIntr();
  /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$disableUart();
}

# 215 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$default$unconfigure(uint8_t id)
#line 215
{
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$unconfigure(uint8_t arg_0x1019cd6e0){
#line 55
  switch (arg_0x1019cd6e0) {
#line 55
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C$0$CLIENT_ID:
#line 55
      /*Msp430Uart1P.UartP*/Msp430UartP$0$ResourceConfigure$unconfigure(/*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID);
#line 55
      break;
#line 55
    default:
#line 55
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$default$unconfigure(arg_0x1019cd6e0);
#line 55
      break;
#line 55
    }
#line 55
}
#line 55
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$grantedTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$FcfsQueue$dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$qHead != /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$qHead;

#line 62
        /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$qHead = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$resQ[/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$qHead];
        if (/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$qHead == /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$NO_ENTRY) {
          /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$qTail = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$NO_ENTRY;
          }
#line 65
        /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$resQ[id] = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Queue$dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$FcfsQueue$dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEmpty(void )
#line 50
{
  return /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$qHead == /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$NO_ENTRY;
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Queue$isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_BUSY && /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId == id) {
          if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Queue$isEmpty() == FALSE) {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$reqResId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Queue$dequeue();
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$NO_RES;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_GRANTING;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$grantedTask$postTask();
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$unconfigure(id);
            }
          else {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$default_owner_id;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_CONTROLLED;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$unconfigure(id);
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceDefaultOwner$granted();
            }
          {
            unsigned char __nesc_temp = 
#line 124
            SUCCESS;

            {
#line 124
              __nesc_atomic_end(__nesc_atomic); 
#line 124
              return __nesc_temp;
            }
          }
        }
    }
#line 128
    __nesc_atomic_end(__nesc_atomic); }
#line 127
  return FAIL;
}

# 213 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$release(uint8_t id)
#line 213
{
#line 213
  return FAIL;
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$release(uint8_t arg_0x1024acbe8){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  switch (arg_0x1024acbe8) {
#line 110
    case /*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID:
#line 110
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$release(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C$0$CLIENT_ID);
#line 110
      break;
#line 110
    default:
#line 110
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$release(arg_0x1024acbe8);
#line 110
      break;
#line 110
    }
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 210 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$isOwner(uint8_t id)
#line 210
{
#line 210
  return FAIL;
}

# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$isOwner(uint8_t arg_0x1024acbe8){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  switch (arg_0x1024acbe8) {
#line 118
    case /*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID:
#line 118
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$isOwner(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C$0$CLIENT_ID);
#line 118
      break;
#line 118
    default:
#line 118
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$isOwner(arg_0x1024acbe8);
#line 118
      break;
#line 118
    }
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 77 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$release(uint8_t id)
#line 77
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$isOwner(id) == FALSE) {
    return FAIL;
    }
#line 80
  if (/*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_buf || /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_buf) {
    return EBUSY;
    }
#line 82
  return /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$release(id);
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t TelosSerialP$Resource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$release(/*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 13 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosa/TelosSerialP.nc"
static inline error_t TelosSerialP$StdControl$stop(void )
#line 13
{
  TelosSerialP$Resource$release();
  return SUCCESS;
}

# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP$SerialControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = TelosSerialP$StdControl$stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 330 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFlush$flushDone(void )
#line 330
{
  SerialP$SerialControl$stop();
  SerialP$SplitControl$stopDone(SUCCESS);
}

static inline void SerialP$defaultSerialFlushTask$runTask(void )
#line 335
{
  SerialP$SerialFlush$flushDone();
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$defaultSerialFlushTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(SerialP$defaultSerialFlushTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 338 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFlush$default$flush(void )
#line 338
{
  SerialP$defaultSerialFlushTask$postTask();
}

# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
inline static void SerialP$SerialFlush$flush(void ){
#line 38
  SerialP$SerialFlush$default$flush();
#line 38
}
#line 38
# 326 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$stopDoneTask$runTask(void )
#line 326
{
  SerialP$SerialFlush$flush();
}

# 120 "RandRWC.nc"
static inline void RandRWC$SerialControl$startDone(error_t e)
#line 120
{
  int i;

  if (e != SUCCESS) 
    {
      RandRWC$Leds$led0On();
      return;
    }

  RandRWC$resetSeed();
  for (i = 0; i < sizeof RandRWC$data; i++) 
    RandRWC$data[i++] = RandRWC$rand() >> 8;

  RandRWC$done();
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP$SplitControl$startDone(error_t error){
#line 92
  RandRWC$SerialControl$startDone(error);
#line 92
}
#line 92
# 130 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceDefaultOwner$release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$default_owner_id) {
          if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_GRANTING) {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$grantedTask$postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_IMM_GRANTING) {
                /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$reqResId;
                /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceDefaultOwner$release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline error_t HplMsp430Usart1P$AsyncStdControl$start(void )
#line 105
{
  return SUCCESS;
}

# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = HplMsp430Usart1P$AsyncStdControl$start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested(void )
#line 64
{
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start();
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release();
}

# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceDefaultOwner$immediateRequested(void ){
#line 81
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested();
#line 81
}
#line 81
# 203 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceRequested$default$immediateRequested(uint8_t id)
#line 203
{
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceRequested$immediateRequested(uint8_t arg_0x1019d03c8){
#line 51
    /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceRequested$default$immediateRequested(arg_0x1019d03c8);
#line 51
}
#line 51
# 90 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$immediateRequest(uint8_t id)
#line 90
{
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceRequested$immediateRequested(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 92
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_CONTROLLED) {
          /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_IMM_GRANTING;
          /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 97
          FAIL;

          {
#line 97
            __nesc_atomic_end(__nesc_atomic); 
#line 97
            return __nesc_temp;
          }
        }
    }
#line 100
    __nesc_atomic_end(__nesc_atomic); }
#line 99
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceDefaultOwner$immediateRequested();
  if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId == id) {
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ResourceConfigure$configure(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId);
      return SUCCESS;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 104
    /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_CONTROLLED;
#line 104
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

# 212 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$immediateRequest(uint8_t id)
#line 212
{
#line 212
  return FAIL;
}

# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$immediateRequest(uint8_t arg_0x1024acbe8){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  switch (arg_0x1024acbe8) {
#line 87
    case /*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID:
#line 87
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$immediateRequest(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C$0$CLIENT_ID);
#line 87
      break;
#line 87
    default:
#line 87
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$default$immediateRequest(arg_0x1024acbe8);
#line 87
      break;
#line 87
    }
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 65 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$immediateRequest(uint8_t id)
#line 65
{
  return /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$immediateRequest(id);
}

# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t TelosSerialP$Resource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP$0$Resource$immediateRequest(/*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 10 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosa/TelosSerialP.nc"
static inline error_t TelosSerialP$StdControl$start(void )
#line 10
{
  return TelosSerialP$Resource$immediateRequest();
}

# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP$SerialControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = TelosSerialP$StdControl$start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 320 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$startDoneTask$runTask(void )
#line 320
{
  SerialP$SerialControl$start();
  SerialP$SplitControl$startDone(SUCCESS);
}

# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void )
#line 115
{
  return 28;
}

static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t len)
#line 119
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

#line 81
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len)
#line 81
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(m, len);
}

# 124 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * RandRWC$AMSend$getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(139, msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 286 "/opt/nesc/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 315
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 522 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SendBytePacket$startSend(uint8_t b)
#line 522
{
  bool not_busy = FALSE;

#line 524
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 524
    {
      if (SerialP$txBuf[SerialP$TX_DATA_INDEX].state == SerialP$BUFFER_AVAILABLE) {
          SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_FILLING;
          SerialP$txBuf[SerialP$TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 530
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP$MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t first_byte){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = SerialP$SendBytePacket$startSend(first_byte);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen)
#line 43
{
  return upperLen + sizeof(serial_header_t );
}

# 347 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 348
{
  return 0;
}

# 23 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(uart_id_t arg_0x1024003c0, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x1024003c0) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP$Info$dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(arg_0x1024003c0, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 100 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len)
#line 100
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 108
            ESIZE;

            {
#line 108
              __nesc_atomic_end(__nesc_atomic); 
#line 108
              return __nesc_temp;
            }
          }
        }
#line 111
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
      return FAIL;
    }
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 59
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 61
  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(msg, len);
}

# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t RandRWC$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(139, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$RunTx$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(SerialP$RunTx);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 119 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline error_t Stm25pBlockP$Write$erase(uint8_t id)
#line 119
{
  Stm25pBlockP$m_req.req = Stm25pBlockP$S_ERASE;
  return Stm25pBlockP$newRequest(id);
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static error_t RandRWC$BlockWrite$erase(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = Stm25pBlockP$Write$erase(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID);
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$startTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$startTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$ResourceDefaultOwner$requested(void )
#line 80
{
  if (/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$stopping == FALSE) {
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$stopTimer = TRUE;
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$startTask$postTask();
    }
  else {
#line 85
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$requested = TRUE;
#line 85
      __nesc_atomic_end(__nesc_atomic); }
    }
}

# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void ){
#line 73
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$ResourceDefaultOwner$requested();
#line 73
}
#line 73
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[id] != /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead == /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead = id;
          }
        else {
#line 78
          /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail] = id;
          }
#line 79
        /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 201 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 201
{
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x1019d03c8){
#line 43
    /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x1019d03c8);
#line 43
}
#line 43
# 77 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 77
{
  /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$state == /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
          /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$RES_GRANTING;
          /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Queue$enqueue(id);

          {
#line 84
            __nesc_atomic_end(__nesc_atomic); 
#line 84
            return __nesc_temp;
          }
        }
    }
#line 87
    __nesc_atomic_end(__nesc_atomic); }
#line 86
  /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested();
  return SUCCESS;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Stm25pSectorP$Stm25pResource$request(uint8_t arg_0x1019057d0){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(arg_0x1019057d0);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 102 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline error_t Stm25pSectorP$ClientResource$request(uint8_t id)
#line 102
{
  return Stm25pSectorP$Stm25pResource$request(id);
}

# 234 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline error_t Stm25pBlockP$ClientResource$default$request(uint8_t id)
#line 234
{
#line 234
  return FAIL;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Stm25pBlockP$ClientResource$request(uint8_t arg_0x101670220){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  switch (arg_0x101670220) {
#line 78
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 78
      __nesc_result = Stm25pSectorP$ClientResource$request(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = Stm25pBlockP$ClientResource$default$request(arg_0x101670220);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 86 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline error_t Stm25pBlockP$Read$read(uint8_t id, storage_addr_t addr, void *buf, 
storage_len_t len)
#line 87
{
  Stm25pBlockP$m_req.req = Stm25pBlockP$S_READ;
  Stm25pBlockP$m_req.addr = addr;
  Stm25pBlockP$m_req.buf = buf;
  Stm25pBlockP$m_req.len = len;
  return Stm25pBlockP$newRequest(id);
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static error_t RandRWC$BlockRead$read(storage_addr_t addr, void * buf, storage_len_t len){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = Stm25pBlockP$Read$read(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID, addr, buf, len);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$clr(void ){
#line 39
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$clr();
#line 39
}
#line 39
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$clr(void )
#line 38
{
#line 38
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$clr();
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$clr(void ){
#line 30
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$clr();
#line 30
}
#line 30
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1On(void )
#line 78
{
  LedsP$Led1$clr();
  ;
#line 80
  ;
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RandRWC$Leds$led1On(void ){
#line 61
  LedsP$Leds$led1On();
#line 61
}
#line 61
# 86 "RandRWC.nc"
static inline void RandRWC$success(void )
#line 86
{
  ;
  RandRWC$Leds$led1On();
  RandRWC$report(0x80);
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP$SerialFrameComm$putDelimiter(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = HdlcTranslateC$SerialFrameComm$putDelimiter();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 183 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = error;
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask();
}

# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP$SendBytePacket$sendCompleted(error_t error){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error);
#line 80
}
#line 80
# 242 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_empty(void )
#line 242
{
  bool ret;

#line 244
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 244
    ret = SerialP$ackQ.writePtr == SerialP$ackQ.readPtr;
#line 244
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP$ack_queue_top(void )
#line 258
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 260
  {
    if (!SerialP$ack_queue_is_empty()) {
        tmp = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP$ack_queue_pop(void )
#line 268
{
  uint8_t retval = 0;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (SerialP$ackQ.writePtr != SerialP$ackQ.readPtr) {
          retval = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
          if (++ SerialP$ackQ.readPtr > SerialP$ACK_QUEUE_SIZE) {
#line 273
            SerialP$ackQ.readPtr = 0;
            }
        }
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
#line 276
  return retval;
}

#line 539
static inline void SerialP$RunTx$runTask(void )
#line 539
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 556
    {
      SerialP$txPending = 0;
      idle = SerialP$txState == SerialP$TXSTATE_IDLE;
      done = SerialP$txState == SerialP$TXSTATE_FINISH;
      fail = SerialP$txState == SerialP$TXSTATE_ERROR;
      if (done || fail) {
          SerialP$txState = SerialP$TXSTATE_IDLE;
          SerialP$txBuf[SerialP$txIndex].state = SerialP$BUFFER_AVAILABLE;
        }
    }
#line 565
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      SerialP$txSeqno++;
      if (SerialP$txProto == SERIAL_PROTO_ACK) {
          SerialP$ack_queue_pop();
        }
      else {
          result = done ? SUCCESS : FAIL;
          send_completed = TRUE;
        }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 583
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 583
        goInactive = SerialP$offPending;
#line 583
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 585
            SerialP$txState = SerialP$TXSTATE_INACTIVE;
#line 585
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 591
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 591
            {
              myAckState = SerialP$txBuf[SerialP$TX_ACK_INDEX].state;
              myDataState = SerialP$txBuf[SerialP$TX_DATA_INDEX].state;
            }
#line 594
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP$ack_queue_is_empty() && myAckState == SerialP$BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 596
                {
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].state = SerialP$BUFFER_COMPLETE;
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].buf = SerialP$ack_queue_top();
                }
#line 599
                __nesc_atomic_end(__nesc_atomic); }
              SerialP$txProto = SERIAL_PROTO_ACK;
              SerialP$txIndex = SerialP$TX_ACK_INDEX;
              start_it = TRUE;
            }
          else {
#line 604
            if (myDataState == SerialP$BUFFER_FILLING || myDataState == SerialP$BUFFER_COMPLETE) {
                SerialP$txProto = SERIAL_PROTO_PACKET_NOACK;
                SerialP$txIndex = SerialP$TX_DATA_INDEX;
                start_it = TRUE;
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP$SendBytePacket$sendCompleted(result);
    }

  if (SerialP$txState == SerialP$TXSTATE_INACTIVE) {
      SerialP$testOff();
      return;
    }

  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
        {
          SerialP$txCRC = 0;
          SerialP$txByteCnt = 0;
          SerialP$txState = SerialP$TXSTATE_PROTO;
        }
#line 633
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP$SerialFrameComm$putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 635
            SerialP$txState = SerialP$TXSTATE_ERROR;
#line 635
            __nesc_atomic_end(__nesc_atomic); }
          SerialP$MaybeScheduleTx();
        }
    }
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$stopDoneTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(SerialP$stopDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC$UartStream$send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$send(/*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID, buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 284 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$ClientResource$default$granted(uint8_t id)
#line 284
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void Stm25pSectorP$ClientResource$granted(uint8_t arg_0x10190ad00){
#line 92
  switch (arg_0x10190ad00) {
#line 92
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID:
#line 92
      Stm25pBlockP$ClientResource$granted(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID);
#line 92
      break;
#line 92
    default:
#line 92
      Stm25pSectorP$ClientResource$default$granted(arg_0x10190ad00);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = Stm25pSectorP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/DeferredPowerManagerP.nc"
static inline error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$default$start(void )
#line 91
{
  return SUCCESS;
}

# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$default$start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 116 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$stopDone(error_t error)
#line 116
{
  if (/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$requested == TRUE) {
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$start();
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 121
    {
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$requested = FALSE;
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$stopping = FALSE;
    }
#line 124
    __nesc_atomic_end(__nesc_atomic); }
}

# 117 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void Stm25pSectorP$SplitControl$stopDone(error_t error){
#line 117
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$stopDone(error);
#line 117
}
#line 117
# 114 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$release(uint8_t id)
#line 114
{
#line 114
  return FAIL;
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$release(uint8_t arg_0x101d34430){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  switch (arg_0x101d34430) {
#line 110
    case /*HplStm25pSpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 110
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$release(/*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID);
#line 110
      break;
#line 110
    default:
#line 110
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$release(arg_0x101d34430);
#line 110
      break;
#line 110
    }
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$release(uint8_t id)
#line 81
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$release(id);
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Stm25pSpiP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$release(/*HplStm25pSpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 116 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static inline error_t Stm25pSpiP$ClientResource$release(void )
#line 116
{
  return Stm25pSpiP$SpiResource$release();
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Stm25pSectorP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = Stm25pSpiP$ClientResource$release();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 128 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static inline error_t Stm25pSpiP$Spi$powerDown(void )
#line 128
{
  Stm25pSpiP$sendCmd(Stm25pSpiP$S_DEEP_SLEEP, 1);
  return SUCCESS;
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
inline static error_t Stm25pSectorP$Spi$powerDown(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = Stm25pSpiP$Spi$powerDown();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 130 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$resId == /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$default_owner_id) {
          if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$state == /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$RES_GRANTING) {
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$state == /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
                /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$reqResId;
                /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$ResourceDefaultOwner$release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$startDone(error_t error)
#line 99
{
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$ResourceDefaultOwner$release();
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void Stm25pSectorP$SplitControl$startDone(error_t error){
#line 92
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$startDone(error);
#line 92
}
#line 92
# 133 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static inline error_t Stm25pSpiP$Spi$powerUp(void )
#line 133
{
  Stm25pSpiP$sendCmd(Stm25pSpiP$S_POWER_ON, 5);
  return SUCCESS;
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
inline static error_t Stm25pSectorP$Spi$powerUp(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = Stm25pSpiP$Spi$powerUp();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 130 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$SpiResource$granted(void )
#line 130
{
  error_t error;
  Stm25pSectorP$stm25p_power_state_t power_state = Stm25pSectorP$m_power_state;

#line 133
  Stm25pSectorP$m_power_state = Stm25pSectorP$S_NONE;
  if (power_state == Stm25pSectorP$S_START) {
      error = Stm25pSectorP$Spi$powerUp();
      Stm25pSectorP$SpiResource$release();
      Stm25pSectorP$SplitControl$startDone(error);
      return;
    }
  else {
#line 140
    if (power_state == Stm25pSectorP$S_STOP) {
        error = Stm25pSectorP$Spi$powerDown();
        Stm25pSectorP$SpiResource$release();
        Stm25pSectorP$SplitControl$stopDone(error);
        return;
      }
    }
#line 146
  Stm25pSectorP$ClientResource$granted(Stm25pSectorP$m_client);
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void Stm25pSpiP$ClientResource$granted(void ){
#line 92
  Stm25pSectorP$SpiResource$granted();
#line 92
}
#line 92
# 238 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static inline void Stm25pSpiP$SpiResource$granted(void )
#line 238
{

  if (!Stm25pSpiP$m_is_writing) {
    Stm25pSpiP$ClientResource$granted();
    }
  else {
#line 242
    if (Stm25pSpiP$sendCmd(0x5, 2) & 0x1) {
      Stm25pSpiP$releaseAndRequest();
      }
    else {
#line 245
      Stm25pSpiP$signalDone(SUCCESS);
      }
    }
}

# 119 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$default$granted(uint8_t id)
#line 119
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$granted(uint8_t arg_0x101d39120){
#line 92
  switch (arg_0x101d39120) {
#line 92
    case /*HplStm25pSpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 92
      Stm25pSpiP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$default$granted(arg_0x101d39120);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$granted(uint8_t id)
#line 95
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$granted(id);
}

# 199 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$default$granted(uint8_t id)
#line 199
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$granted(uint8_t arg_0x1019d1220){
#line 92
  switch (arg_0x1019d1220) {
#line 92
    case /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 92
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$granted(/*HplStm25pSpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$default$granted(arg_0x1019d1220);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$default$getConfig(uint8_t id)
#line 115
{
  return &msp430_spi_default_config;
}

# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
inline static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$getConfig(uint8_t arg_0x101d336a8){
#line 39
  union __nesc_unnamed4282 *__nesc_result;
#line 39

#line 39
    __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$default$getConfig(arg_0x101d336a8);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 357 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P$Usart$disableIntr(void )
#line 357
{
  HplMsp430Usart0P$IE1 &= ~((1 << 7) | (1 << 6));
}

#line 345
static inline void HplMsp430Usart0P$Usart$clrIntr(void )
#line 345
{
  HplMsp430Usart0P$IFG1 &= ~((1 << 7) | (1 << 6));
}

#line 151
static inline void HplMsp430Usart0P$Usart$resetUsart(bool reset)
#line 151
{
  if (reset) {
      U0CTL = 0x01;
    }
  else {
      U0CTL &= ~0x01;
    }
}

# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )27U |= 0x01 << 3;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P$UCLK$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectModuleFunc();
#line 78
}
#line 78
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )27U |= 0x01 << 2;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P$SOMI$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectModuleFunc();
#line 78
}
#line 78
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )27U |= 0x01 << 1;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P$SIMO$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectModuleFunc();
#line 78
}
#line 78
# 238 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P$Usart$enableSpi(void )
#line 238
{
  /* atomic removed: atomic calls only */
#line 239
  {
    HplMsp430Usart0P$SIMO$selectModuleFunc();
    HplMsp430Usart0P$SOMI$selectModuleFunc();
    HplMsp430Usart0P$UCLK$selectModuleFunc();
  }
  HplMsp430Usart0P$ME1 |= 1 << 6;
}

#line 143
static inline void HplMsp430Usart0P$Usart$setUmctl(uint8_t control)
#line 143
{
  U0MCTL = control;
}

#line 132
static inline void HplMsp430Usart0P$Usart$setUbr(uint16_t control)
#line 132
{
  /* atomic removed: atomic calls only */
#line 133
  {
    U0BR0 = control & 0x00FF;
    U0BR1 = (control >> 8) & 0x00FF;
  }
}

#line 256
static inline void HplMsp430Usart0P$configSpi(msp430_spi_union_config_t *config)
#line 256
{

  U0CTL = (config->spiRegisters.uctl | 0x04) | 0x01;
  HplMsp430Usart0P$U0TCTL = config->spiRegisters.utctl;

  HplMsp430Usart0P$Usart$setUbr(config->spiRegisters.ubr);
  HplMsp430Usart0P$Usart$setUmctl(0x00);
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP$21$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )27U &= ~(0x01 << 5);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P$URXD$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP$21$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP$20$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )27U &= ~(0x01 << 4);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P$UTXD$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP$20$IO$selectIOFunc();
#line 85
}
#line 85
# 207 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P$Usart$disableUart(void )
#line 207
{
  /* atomic removed: atomic calls only */
#line 208
  {
    HplMsp430Usart0P$ME1 &= ~((1 << 7) | (1 << 6));
    HplMsp430Usart0P$UTXD$selectIOFunc();
    HplMsp430Usart0P$URXD$selectIOFunc();
  }
}

# 97 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void HplMsp430I2C0P$HplUsart$resetUsart(bool reset){
#line 97
  HplMsp430Usart0P$Usart$resetUsart(reset);
#line 97
}
#line 97
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline void HplMsp430I2C0P$HplI2C$clearModeI2C(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 60
  {
    HplMsp430I2C0P$U0CTL &= ~((0x20 | 0x04) | 0x01);
    HplMsp430I2C0P$HplUsart$resetUsart(TRUE);
  }
}

# 7 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static void HplMsp430Usart0P$HplI2C$clearModeI2C(void ){
#line 7
  HplMsp430I2C0P$HplI2C$clearModeI2C();
#line 7
}
#line 7
# 265 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P$Usart$setModeSpi(msp430_spi_union_config_t *config)
#line 265
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 267
    {
      HplMsp430Usart0P$Usart$resetUsart(TRUE);
      HplMsp430Usart0P$HplI2C$clearModeI2C();
      HplMsp430Usart0P$Usart$disableUart();
      HplMsp430Usart0P$configSpi(config);
      HplMsp430Usart0P$Usart$enableSpi();
      HplMsp430Usart0P$Usart$resetUsart(FALSE);
      HplMsp430Usart0P$Usart$clrIntr();
      HplMsp430Usart0P$Usart$disableIntr();
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

# 168 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$setModeSpi(msp430_spi_union_config_t *config){
#line 168
  HplMsp430Usart0P$Usart$setModeSpi(config);
#line 168
}
#line 168
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$configure(uint8_t id)
#line 85
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$setModeSpi(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$getConfig(id));
}

# 213 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(uint8_t id)
#line 213
{
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$configure(uint8_t arg_0x1019cd6e0){
#line 49
  switch (arg_0x1019cd6e0) {
#line 49
    case /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$configure(/*HplStm25pSpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(arg_0x1019cd6e0);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 187 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$grantedTask$runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$reqResId;
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$resId);
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$granted(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$resId);
}

# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$HplGeneralIO$clr(void ){
#line 39
  /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$clr();
#line 39
}
#line 39
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$clr(void )
#line 38
{
#line 38
  /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$HplGeneralIO$clr();
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pSpiP$CSN$clr(void ){
#line 30
  /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$clr();
#line 30
}
#line 30
# 231 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$rx(void ){
#line 231
  unsigned char __nesc_result;
#line 231

#line 231
  __nesc_result = HplMsp430Usart0P$Usart$rx();
#line 231

#line 231
  return __nesc_result;
#line 231
}
#line 231
# 341 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P$Usart$clrRxIntr(void )
#line 341
{
  HplMsp430Usart0P$IFG1 &= ~(1 << 6);
}

# 197 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$clrRxIntr(void ){
#line 197
  HplMsp430Usart0P$Usart$clrRxIntr();
#line 197
}
#line 197
# 330 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline bool HplMsp430Usart0P$Usart$isRxIntrPending(void )
#line 330
{
  if (HplMsp430Usart0P$IFG1 & (1 << 6)) {
      return TRUE;
    }
  return FALSE;
}

# 192 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isRxIntrPending(void ){
#line 192
  unsigned char __nesc_result;
#line 192

#line 192
  __nesc_result = HplMsp430Usart0P$Usart$isRxIntrPending();
#line 192

#line 192
  return __nesc_result;
#line 192
}
#line 192
# 382 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P$Usart$tx(uint8_t data)
#line 382
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 383
    HplMsp430Usart0P$U0TXBUF = data;
#line 383
    __nesc_atomic_end(__nesc_atomic); }
}

# 224 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$tx(uint8_t data){
#line 224
  HplMsp430Usart0P$Usart$tx(data);
#line 224
}
#line 224
# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiByte$write(uint8_t tx)
#line 99
{
  uint8_t byte;


  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$tx(tx);
  while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isRxIntrPending()) ;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$clrRxIntr();
  byte = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$rx();

  return byte;
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static uint8_t Stm25pSpiP$SpiByte$write(uint8_t tx){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiByte$write(tx);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void )
#line 50
{
  return /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Queue$isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qHead != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qHead;

#line 62
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qHead];
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
          }
#line 65
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$resQ[id] = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Queue$dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 97 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$resetUsart(bool reset){
#line 97
  HplMsp430Usart0P$Usart$resetUsart(reset);
#line 97
}
#line 97
#line 158
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableSpi(void ){
#line 158
  HplMsp430Usart0P$Usart$disableSpi();
#line 158
}
#line 158
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$unconfigure(uint8_t id)
#line 89
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$resetUsart(TRUE);
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableSpi();
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$resetUsart(FALSE);
}

# 215 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(uint8_t id)
#line 215
{
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$unconfigure(uint8_t arg_0x1019cd6e0){
#line 55
  switch (arg_0x1019cd6e0) {
#line 55
    case /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 55
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$unconfigure(/*HplStm25pSpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 55
      break;
#line 55
    default:
#line 55
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(arg_0x1019cd6e0);
#line 55
      break;
#line 55
    }
#line 55
}
#line 55
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P$SIMO$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P$SOMI$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P$UCLK$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectIOFunc();
#line 85
}
#line 85
# 205 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$default$granted(void )
#line 205
{
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$granted(void ){
#line 46
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$default$granted();
#line 46
}
#line 46
# 201 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(uint8_t id)
#line 201
{
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceRequested$requested(uint8_t arg_0x1019d03c8){
#line 43
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(arg_0x1019d03c8);
#line 43
}
#line 43
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$resQ[id] != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$NO_ENTRY || /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qTail == id;
}

#line 72
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(id)) {
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qHead = id;
          }
        else {
#line 78
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qTail] = id;
          }
#line 79
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$grantedTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 130 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$resId == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$default_owner_id) {
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_GRANTING) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$grantedTask$postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_IMM_GRANTING) {
                /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$reqResId;
                /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

#line 207
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$default$requested(void )
#line 207
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$release();
}

# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$requested(void ){
#line 73
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$default$requested();
#line 73
}
#line 73
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBinderP.nc"
static inline volume_id_t /*RandRWAppC.BlockStorageC.BinderP*/Stm25pBinderP$0$Volume$getVolumeId(void )
#line 45
{
  return 0;
}

# 289 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline volume_id_t Stm25pSectorP$Volume$default$getVolumeId(uint8_t id)
#line 289
{
#line 289
  return 0xff;
}

# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pVolume.nc"
inline static volume_id_t Stm25pSectorP$Volume$getVolumeId(uint8_t arg_0x101907b88){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  switch (arg_0x101907b88) {
#line 48
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID:
#line 48
      __nesc_result = /*RandRWAppC.BlockStorageC.BinderP*/Stm25pBinderP$0$Volume$getVolumeId();
#line 48
      break;
#line 48
    default:
#line 48
      __nesc_result = Stm25pSectorP$Volume$default$getVolumeId(arg_0x101907b88);
#line 48
      break;
#line 48
    }
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 126 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline uint8_t Stm25pSectorP$getVolumeId(uint8_t client)
#line 126
{
  return Stm25pSectorP$Volume$getVolumeId(client);
}

#line 153
static inline stm25p_addr_t Stm25pSectorP$physicalAddr(uint8_t id, stm25p_addr_t addr)
#line 153
{
  return addr + ((stm25p_addr_t )STM25P_VMAP[Stm25pSectorP$getVolumeId(id)].base
   << STM25P_SECTOR_SIZE_LOG2);
}

# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
inline static error_t Stm25pSectorP$Spi$read(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = Stm25pSpiP$Spi$read(addr, buf, len);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 171 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline error_t Stm25pSectorP$Sector$read(uint8_t id, stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len)
#line 172
{

  Stm25pSectorP$m_state = Stm25pSectorP$S_READ;
  Stm25pSectorP$m_addr = addr;
  Stm25pSectorP$m_buf = buf;
  Stm25pSectorP$m_len = len;

  return Stm25pSectorP$Spi$read(Stm25pSectorP$physicalAddr(id, addr), buf, len);
}

# 230 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline error_t Stm25pBlockP$Sector$default$read(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len)
#line 230
{
#line 230
  return FAIL;
}

# 68 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
inline static error_t Stm25pBlockP$Sector$read(uint8_t arg_0x10165d468, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  switch (arg_0x10165d468) {
#line 68
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 68
      __nesc_result = Stm25pSectorP$Sector$read(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID, addr, buf, len);
#line 68
      break;
#line 68
    default:
#line 68
      __nesc_result = Stm25pBlockP$Sector$default$read(arg_0x10165d468, addr, buf, len);
#line 68
      break;
#line 68
    }
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static error_t Stm25pSpiP$SpiPacket$send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$send(/*HplStm25pSpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID, txBuf, rxBuf, len);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 361 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P$Usart$enableRxIntr(void )
#line 361
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 362
    {
      HplMsp430Usart0P$IFG1 &= ~(1 << 6);
      HplMsp430Usart0P$IE1 |= 1 << 6;
    }
#line 365
    __nesc_atomic_end(__nesc_atomic); }
}

# 180 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$enableRxIntr(void ){
#line 180
  HplMsp430Usart0P$Usart$enableRxIntr();
#line 180
}
#line 180
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 124 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static inline stm25p_len_t Stm25pSpiP$calcReadLen(void )
#line 124
{
  return Stm25pSpiP$m_cur_len < Stm25pSpiP$CRC_BUF_SIZE ? Stm25pSpiP$m_cur_len : Stm25pSpiP$CRC_BUF_SIZE;
}

#line 147
static inline error_t Stm25pSpiP$Spi$computeCrc(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len)
#line 148
{
  Stm25pSpiP$m_computing_crc = TRUE;
  Stm25pSpiP$m_crc = crc;
  Stm25pSpiP$m_addr = Stm25pSpiP$m_cur_addr = addr;
  Stm25pSpiP$m_len = Stm25pSpiP$m_cur_len = len;
  return Stm25pSpiP$Spi$read(addr, Stm25pSpiP$m_crc_buf, Stm25pSpiP$calcReadLen());
}

# 90 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
inline static error_t Stm25pSectorP$Spi$computeCrc(uint16_t crc, stm25p_addr_t addr, stm25p_len_t len){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = Stm25pSpiP$Spi$computeCrc(crc, addr, len);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 234 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline error_t Stm25pSectorP$Sector$computeCrc(uint8_t id, uint16_t crc, 
stm25p_addr_t addr, 
stm25p_len_t len)
#line 236
{

  Stm25pSectorP$m_state = Stm25pSectorP$S_CRC;
  Stm25pSectorP$m_addr = addr;
  Stm25pSectorP$m_len = len;

  return Stm25pSectorP$Spi$computeCrc(crc, Stm25pSectorP$physicalAddr(id, addr), Stm25pSectorP$m_len);
}

# 233 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline error_t Stm25pBlockP$Sector$default$computeCrc(uint8_t id, uint16_t crc, storage_addr_t addr, storage_len_t len)
#line 233
{
#line 233
  return FAIL;
}

# 133 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
inline static error_t Stm25pBlockP$Sector$computeCrc(uint8_t arg_0x10165d468, uint16_t crc, stm25p_addr_t addr, stm25p_len_t len){
#line 133
  unsigned char __nesc_result;
#line 133

#line 133
  switch (arg_0x10165d468) {
#line 133
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 133
      __nesc_result = Stm25pSectorP$Sector$computeCrc(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID, crc, addr, len);
#line 133
      break;
#line 133
    default:
#line 133
      __nesc_result = Stm25pBlockP$Sector$default$computeCrc(arg_0x10165d468, crc, addr, len);
#line 133
      break;
#line 133
    }
#line 133

#line 133
  return __nesc_result;
#line 133
}
#line 133
# 114 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
inline static error_t Stm25pSectorP$Spi$pageProgram(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len){
#line 114
  unsigned char __nesc_result;
#line 114

#line 114
  __nesc_result = Stm25pSpiP$Spi$pageProgram(addr, buf, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 188 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline error_t Stm25pSectorP$Sector$write(uint8_t id, stm25p_addr_t addr, 
uint8_t *buf, 
stm25p_len_t len)
#line 190
{

  Stm25pSectorP$m_state = Stm25pSectorP$S_WRITE;
  Stm25pSectorP$m_addr = addr;
  Stm25pSectorP$m_buf = buf;
  Stm25pSectorP$m_len = Stm25pSectorP$m_cur_len = len;

  return Stm25pSectorP$Spi$pageProgram(Stm25pSectorP$physicalAddr(id, addr), buf, 
  Stm25pSectorP$calcWriteLen(addr));
}

# 231 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline error_t Stm25pBlockP$Sector$default$write(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len)
#line 231
{
#line 231
  return FAIL;
}

# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
inline static error_t Stm25pBlockP$Sector$write(uint8_t arg_0x10165d468, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len){
#line 91
  unsigned char __nesc_result;
#line 91

#line 91
  switch (arg_0x10165d468) {
#line 91
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 91
      __nesc_result = Stm25pSectorP$Sector$write(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID, addr, buf, len);
#line 91
      break;
#line 91
    default:
#line 91
      __nesc_result = Stm25pBlockP$Sector$default$write(arg_0x10165d468, addr, buf, len);
#line 91
      break;
#line 91
    }
#line 91

#line 91
  return __nesc_result;
#line 91
}
#line 91
# 136 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
inline static error_t Stm25pSectorP$Spi$sectorErase(uint8_t sector){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = Stm25pSpiP$Spi$sectorErase(sector);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 213 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline error_t Stm25pSectorP$Sector$erase(uint8_t id, uint8_t sector, 
uint8_t num_sectors)
#line 214
{

  Stm25pSectorP$m_state = Stm25pSectorP$S_ERASE;
  Stm25pSectorP$m_addr = sector;
  Stm25pSectorP$m_len = num_sectors;
  Stm25pSectorP$m_cur_len = 0;

  return Stm25pSectorP$Spi$sectorErase(STM25P_VMAP[Stm25pSectorP$getVolumeId(id)].base + Stm25pSectorP$m_addr + 
  Stm25pSectorP$m_cur_len);
}

# 232 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline error_t Stm25pBlockP$Sector$default$erase(uint8_t id, uint8_t sector, uint8_t num_sectors)
#line 232
{
#line 232
  return FAIL;
}

# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
inline static error_t Stm25pBlockP$Sector$erase(uint8_t arg_0x10165d468, uint8_t sector, uint8_t num_sectors){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  switch (arg_0x10165d468) {
#line 112
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 112
      __nesc_result = Stm25pSectorP$Sector$erase(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID, sector, num_sectors);
#line 112
      break;
#line 112
    default:
#line 112
      __nesc_result = Stm25pBlockP$Sector$default$erase(arg_0x10165d468, sector, num_sectors);
#line 112
      break;
#line 112
    }
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 167 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline uint8_t Stm25pSectorP$Sector$getNumSectors(uint8_t id)
#line 167
{
  return STM25P_VMAP[Stm25pSectorP$getVolumeId(id)].size;
}

# 229 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline uint8_t Stm25pBlockP$Sector$default$getNumSectors(uint8_t id)
#line 229
{
#line 229
  return 0;
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
inline static uint8_t Stm25pBlockP$Sector$getNumSectors(uint8_t arg_0x10165d468){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  switch (arg_0x10165d468) {
#line 56
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 56
      __nesc_result = Stm25pSectorP$Sector$getNumSectors(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID);
#line 56
      break;
#line 56
    default:
#line 56
      __nesc_result = Stm25pBlockP$Sector$default$getNumSectors(arg_0x10165d468);
#line 56
      break;
#line 56
    }
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$timerTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$timerTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 103 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$ResourceDefaultOwner$granted(void )
#line 103
{
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$timerTask$postTask();
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void ){
#line 46
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$ResourceDefaultOwner$granted();
#line 46
}
#line 46
# 215 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 215
{
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x1019cd6e0){
#line 55
    /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x1019cd6e0);
#line 55
}
#line 55
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead != /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead;

#line 62
        /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead];
        if (/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead == /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 65
        /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[id] = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Queue$dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void )
#line 50
{
  return /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead == /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Queue$isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$state == /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$RES_BUSY && /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$resId == id) {
          if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$reqResId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Queue$dequeue();
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$NO_RES;
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$RES_GRANTING;
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask();
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
            }
          else {
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$default_owner_id;
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED;
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted();
            }
          {
            unsigned char __nesc_temp = 
#line 124
            SUCCESS;

            {
#line 124
              __nesc_atomic_end(__nesc_atomic); 
#line 124
              return __nesc_temp;
            }
          }
        }
    }
#line 128
    __nesc_atomic_end(__nesc_atomic); }
#line 127
  return FAIL;
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Stm25pSectorP$Stm25pResource$release(uint8_t arg_0x1019057d0){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(arg_0x1019057d0);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline error_t Stm25pSectorP$ClientResource$release(uint8_t id)
#line 110
{
  if (Stm25pSectorP$m_client == id) {
      Stm25pSectorP$m_state = Stm25pSectorP$S_IDLE;
      Stm25pSectorP$m_client = Stm25pSectorP$NO_CLIENT;
      Stm25pSectorP$SpiResource$release();
      Stm25pSectorP$Stm25pResource$release(id);
      return SUCCESS;
    }
  return FAIL;
}

# 235 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline error_t Stm25pBlockP$ClientResource$default$release(uint8_t id)
#line 235
{
#line 235
  return FAIL;
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Stm25pBlockP$ClientResource$release(uint8_t arg_0x101670220){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  switch (arg_0x101670220) {
#line 110
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 110
      __nesc_result = Stm25pSectorP$ClientResource$release(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID);
#line 110
      break;
#line 110
    default:
#line 110
      __nesc_result = Stm25pBlockP$ClientResource$default$release(arg_0x101670220);
#line 110
      break;
#line 110
    }
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 222 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline void Stm25pBlockP$Read$default$readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 222
{
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static void Stm25pBlockP$Read$readDone(uint8_t arg_0x101642bc0, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 67
  switch (arg_0x101642bc0) {
#line 67
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 67
      RandRWC$BlockRead$readDone(addr, buf, len, error);
#line 67
      break;
#line 67
    default:
#line 67
      Stm25pBlockP$Read$default$readDone(arg_0x101642bc0, addr, buf, len, error);
#line 67
      break;
#line 67
    }
#line 67
}
#line 67
# 80 "RandRWC.nc"
static inline void RandRWC$fail(error_t e)
#line 80
{
  ;
  RandRWC$Leds$led0On();
  RandRWC$report(e);
}

#line 98
static inline bool RandRWC$bcheck(bool b)
#line 98
{
  if (!b) {
    RandRWC$fail(FAIL);
    }
#line 101
  return b;
}

#line 186
static inline void RandRWC$BlockRead$computeCrcDone(storage_addr_t x, storage_len_t y, uint16_t z, error_t result)
#line 186
{
}

# 223 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline void Stm25pBlockP$Read$default$computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error)
#line 223
{
}

# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static void Stm25pBlockP$Read$computeCrcDone(uint8_t arg_0x101642bc0, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error){
#line 95
  switch (arg_0x101642bc0) {
#line 95
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 95
      RandRWC$BlockRead$computeCrcDone(addr, len, crc, error);
#line 95
      break;
#line 95
    default:
#line 95
      Stm25pBlockP$Read$default$computeCrcDone(arg_0x101642bc0, addr, len, crc, error);
#line 95
      break;
#line 95
    }
#line 95
}
#line 95
# 162 "RandRWC.nc"
static inline void RandRWC$BlockWrite$writeDone(storage_addr_t x, void *buf, storage_len_t y, error_t result)
#line 162
{
  if (RandRWC$scheck(result)) {
    RandRWC$nextWrite();
    }
}

# 224 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline void Stm25pBlockP$Write$default$writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 224
{
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static void Stm25pBlockP$Write$writeDone(uint8_t arg_0x101662dc0, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 71
  switch (arg_0x101662dc0) {
#line 71
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 71
      RandRWC$BlockWrite$writeDone(addr, buf, len, error);
#line 71
      break;
#line 71
    default:
#line 71
      Stm25pBlockP$Write$default$writeDone(arg_0x101662dc0, addr, buf, len, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 114 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline error_t Stm25pBlockP$Write$sync(uint8_t id)
#line 114
{
  Stm25pBlockP$m_req.req = Stm25pBlockP$S_SYNC;
  return Stm25pBlockP$newRequest(id);
}

# 103 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static error_t RandRWC$BlockWrite$sync(void ){
#line 103
  unsigned char __nesc_result;
#line 103

#line 103
  __nesc_result = Stm25pBlockP$Write$sync(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID);
#line 103

#line 103
  return __nesc_result;
#line 103
}
#line 103
# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline error_t Stm25pBlockP$Write$write(uint8_t id, storage_addr_t addr, void *buf, 
storage_len_t len)
#line 106
{
  Stm25pBlockP$m_req.req = Stm25pBlockP$S_WRITE;
  Stm25pBlockP$m_req.addr = addr;
  Stm25pBlockP$m_req.buf = buf;
  Stm25pBlockP$m_req.len = len;
  return Stm25pBlockP$newRequest(id);
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static error_t RandRWC$BlockWrite$write(storage_addr_t addr, void * buf, storage_len_t len){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = Stm25pBlockP$Write$write(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID, addr, buf, len);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 175 "RandRWC.nc"
static inline void RandRWC$BlockWrite$syncDone(error_t result)
#line 175
{
  if (RandRWC$scheck(result)) {
    RandRWC$done();
    }
}

# 226 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline void Stm25pBlockP$Write$default$syncDone(uint8_t id, error_t error)
#line 226
{
}

# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static void Stm25pBlockP$Write$syncDone(uint8_t arg_0x101662dc0, error_t error){
#line 112
  switch (arg_0x101662dc0) {
#line 112
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 112
      RandRWC$BlockWrite$syncDone(error);
#line 112
      break;
#line 112
    default:
#line 112
      Stm25pBlockP$Write$default$syncDone(arg_0x101662dc0, error);
#line 112
      break;
#line 112
    }
#line 112
}
#line 112
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$toggle(void ){
#line 44
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$toggle();
#line 44
}
#line 44
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$toggle(void )
#line 39
{
#line 39
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$toggle();
}

# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$toggle(void ){
#line 31
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$toggle();
#line 31
}
#line 31
# 103 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led2Toggle(void )
#line 103
{
  LedsP$Led2$toggle();
  ;
#line 105
  ;
}

# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RandRWC$Leds$led2Toggle(void ){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 167 "RandRWC.nc"
static inline void RandRWC$BlockWrite$eraseDone(error_t result)
#line 167
{
  if (RandRWC$scheck(result)) 
    {
      RandRWC$Leds$led2Toggle();
      RandRWC$nextWrite();
    }
}

# 225 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline void Stm25pBlockP$Write$default$eraseDone(uint8_t id, error_t error)
#line 225
{
}

# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static void Stm25pBlockP$Write$eraseDone(uint8_t arg_0x101662dc0, error_t error){
#line 91
  switch (arg_0x101662dc0) {
#line 91
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 91
      RandRWC$BlockWrite$eraseDone(error);
#line 91
      break;
#line 91
    default:
#line 91
      Stm25pBlockP$Write$default$eraseDone(arg_0x101662dc0, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t Stm25pSectorP$signalDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(Stm25pSectorP$signalDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 256 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$signalDone(error_t error)
#line 256
{
  Stm25pSectorP$m_error = error;
  Stm25pSectorP$signalDone_task$postTask();
}

#line 246
static inline void Stm25pSectorP$Spi$computeCrcDone(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len, error_t error)
#line 247
{
  Stm25pSectorP$m_crc = crc;
  Stm25pSectorP$signalDone(SUCCESS);
}

# 101 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
inline static void Stm25pSpiP$Spi$computeCrcDone(uint16_t crc, stm25p_addr_t addr, stm25p_len_t len, error_t error){
#line 101
  Stm25pSectorP$Spi$computeCrcDone(crc, addr, len, error);
#line 101
}
#line 101
# 183 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$Spi$readDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error)
#line 184
{
  Stm25pSectorP$signalDone(error);
}

# 77 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
inline static void Stm25pSpiP$Spi$readDone(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error){
#line 77
  Stm25pSectorP$Spi$readDone(addr, buf, len, error);
#line 77
}
#line 77
# 202 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$Spi$pageProgramDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error)
#line 203
{
  addr += len;
  buf += len;
  Stm25pSectorP$m_cur_len -= len;
  if (!Stm25pSectorP$m_cur_len) {
    Stm25pSectorP$signalDone(SUCCESS);
    }
  else {
#line 210
    Stm25pSectorP$Spi$pageProgram(addr, buf, Stm25pSectorP$calcWriteLen(addr));
    }
}

# 125 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
inline static void Stm25pSpiP$Spi$pageProgramDone(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error){
#line 125
  Stm25pSectorP$Spi$pageProgramDone(addr, buf, len, error);
#line 125
}
#line 125
# 226 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$Spi$sectorEraseDone(uint8_t sector, error_t error)
#line 226
{
  if (++Stm25pSectorP$m_cur_len < Stm25pSectorP$m_len) {
    Stm25pSectorP$Spi$sectorErase(STM25P_VMAP[Stm25pSectorP$getVolumeId(Stm25pSectorP$m_client)].base + Stm25pSectorP$m_addr + 
    Stm25pSectorP$m_cur_len);
    }
  else {
#line 231
    Stm25pSectorP$signalDone(error);
    }
}

# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
inline static void Stm25pSpiP$Spi$sectorEraseDone(uint8_t sector, error_t error){
#line 144
  Stm25pSectorP$Spi$sectorEraseDone(sector, error);
#line 144
}
#line 144
# 252 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$Spi$bulkEraseDone(error_t error)
#line 252
{
}

# 159 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpi.nc"
inline static void Stm25pSpiP$Spi$bulkEraseDone(error_t error){
#line 159
  Stm25pSectorP$Spi$bulkEraseDone(error);
#line 159
}
#line 159
# 190 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$default$sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 190
{
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$sendDone(uint8_t arg_0x101d36650, uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 71
  switch (arg_0x101d36650) {
#line 71
    case /*HplStm25pSpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 71
      Stm25pSpiP$SpiPacket$sendDone(txBuf, rxBuf, len, error);
#line 71
      break;
#line 71
    default:
#line 71
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$default$sendDone(arg_0x101d36650, txBuf, rxBuf, len, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 183 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone(void )
#line 183
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$sendDone(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_client, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len, 
  SUCCESS);
}

#line 166
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$runTask(void )
#line 166
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone();
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 153 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$TimerMilli$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
#line 67
}
#line 67
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$startTask$runTask(void )
#line 69
{
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$TimerMilli$stop();
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$stopTimer = FALSE;
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$start();
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$start();
}

# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$get(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$get();
}

# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 125
  unsigned long __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 133 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}






static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$TimerMilli$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, dt);
#line 62
}
#line 62
# 76 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$timerTask$runTask(void )
#line 76
{
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$TimerMilli$startOneShot(1024);
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 92
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 118
}
#line 118
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$disableEvents();
}

# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$stop(void ){
#line 62
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$stop();
}

# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 62
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(uint8_t id)
#line 112
{
#line 112
  return FAIL;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$request(uint8_t arg_0x101d34430){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  switch (arg_0x101d34430) {
#line 78
    case /*HplStm25pSpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 78
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$request(/*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(arg_0x101d34430);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$request(uint8_t id)
#line 73
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$request(id);
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Stm25pSpiP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$request(/*HplStm25pSpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 108 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static inline error_t Stm25pSpiP$ClientResource$request(void )
#line 108
{
  return Stm25pSpiP$SpiResource$request();
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Stm25pSectorP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = Stm25pSpiP$ClientResource$request();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline error_t Stm25pSectorP$SplitControl$stop(void )
#line 95
{
  error_t error = Stm25pSectorP$SpiResource$request();

#line 97
  if (error == SUCCESS) {
    Stm25pSectorP$m_power_state = Stm25pSectorP$S_STOP;
    }
#line 99
  return error;
}

# 109 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$stop(void ){
#line 109
  unsigned char __nesc_result;
#line 109

#line 109
  __nesc_result = Stm25pSectorP$SplitControl$stop();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 127 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/DeferredPowerManagerP.nc"
static inline error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$default$stop(void )
#line 127
{
  return SUCCESS;
}

# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$default$stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 135 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$PowerDownCleanup$default$cleanup(void )
#line 135
{
}

# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$PowerDownCleanup$cleanup(void ){
#line 52
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$PowerDownCleanup$default$cleanup();
#line 52
}
#line 52
# 107 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$TimerMilli$fired(void )
#line 107
{
  if (/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$stopTimer == FALSE) {
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$stopping = TRUE;
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$PowerDownCleanup$cleanup();
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$StdControl$stop();
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$SplitControl$stop();
    }
}

# 193 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x101bb2448){
#line 72
  switch (arg_0x101bb2448) {
#line 72
    case 0U:
#line 72
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$TimerMilli$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x101bb2448);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 128 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 82
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type __nesc_temp = 
#line 82
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;

      {
#line 82
        __nesc_atomic_end(__nesc_atomic); 
#line 82
        return __nesc_temp;
      }
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 105
  unsigned long __nesc_result;
#line 105

#line 105
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getAlarm();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 121 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$Stm25pResource$granted(uint8_t id)
#line 121
{
  Stm25pSectorP$m_client = id;
  Stm25pSectorP$SpiResource$request();
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x1019d1220){
#line 92
  Stm25pSectorP$Stm25pResource$granted(arg_0x1019d1220);
#line 92
}
#line 92
# 213 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 213
{
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x1019cd6e0){
#line 49
    /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x1019cd6e0);
#line 49
}
#line 49
# 187 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$reqResId;
      /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$resId);
  /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$Resource$granted(/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$resId);
}

# 176 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline void Stm25pBlockP$Sector$eraseDone(uint8_t id, uint8_t sector, 
uint8_t num_sectors, 
error_t error)
#line 178
{
  Stm25pBlockP$signalDone(id, 0, error);
}

# 287 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$Sector$default$eraseDone(uint8_t id, uint8_t sector, uint8_t num_sectors, error_t error)
#line 287
{
}

# 121 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
inline static void Stm25pSectorP$Sector$eraseDone(uint8_t arg_0x1019080c8, uint8_t sector, uint8_t num_sectors, error_t error){
#line 121
  switch (arg_0x1019080c8) {
#line 121
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID:
#line 121
      Stm25pBlockP$Sector$eraseDone(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID, sector, num_sectors, error);
#line 121
      break;
#line 121
    default:
#line 121
      Stm25pSectorP$Sector$default$eraseDone(arg_0x1019080c8, sector, num_sectors, error);
#line 121
      break;
#line 121
    }
#line 121
}
#line 121
# 171 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline void Stm25pBlockP$Sector$writeDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error)
#line 172
{
  Stm25pBlockP$signalDone(id, 0, error);
}

# 286 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$Sector$default$writeDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error)
#line 286
{
}

# 101 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
inline static void Stm25pSectorP$Sector$writeDone(uint8_t arg_0x1019080c8, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error){
#line 101
  switch (arg_0x1019080c8) {
#line 101
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID:
#line 101
      Stm25pBlockP$Sector$writeDone(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID, addr, buf, len, error);
#line 101
      break;
#line 101
    default:
#line 101
      Stm25pSectorP$Sector$default$writeDone(arg_0x1019080c8, addr, buf, len, error);
#line 101
      break;
#line 101
    }
#line 101
}
#line 101
# 182 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline void Stm25pBlockP$Sector$computeCrcDone(uint8_t id, stm25p_addr_t addr, 
stm25p_len_t len, 
uint16_t crc, 
error_t error)
#line 185
{
  Stm25pBlockP$signalDone(id, crc, error);
}

# 288 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$Sector$default$computeCrcDone(uint8_t id, stm25p_addr_t addr, stm25p_len_t len, uint16_t crc, error_t error)
#line 288
{
}

# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
inline static void Stm25pSectorP$Sector$computeCrcDone(uint8_t arg_0x1019080c8, stm25p_addr_t addr, stm25p_len_t len, uint16_t crc, error_t error){
#line 144
  switch (arg_0x1019080c8) {
#line 144
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID:
#line 144
      Stm25pBlockP$Sector$computeCrcDone(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID, addr, len, crc, error);
#line 144
      break;
#line 144
    default:
#line 144
      Stm25pSectorP$Sector$default$computeCrcDone(arg_0x1019080c8, addr, len, crc, error);
#line 144
      break;
#line 144
    }
#line 144
}
#line 144
# 166 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static inline void Stm25pBlockP$Sector$readDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error)
#line 167
{
  Stm25pBlockP$signalDone(id, 0, error);
}

# 285 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$Sector$default$readDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error)
#line 285
{
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSector.nc"
inline static void Stm25pSectorP$Sector$readDone(uint8_t arg_0x1019080c8, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error){
#line 78
  switch (arg_0x1019080c8) {
#line 78
    case /*RandRWAppC.BlockStorageC*/BlockStorageC$0$VOLUME_ID:
#line 78
      Stm25pBlockP$Sector$readDone(/*RandRWAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID, addr, buf, len, error);
#line 78
      break;
#line 78
    default:
#line 78
      Stm25pSectorP$Sector$default$readDone(arg_0x1019080c8, addr, buf, len, error);
#line 78
      break;
#line 78
    }
#line 78
}
#line 78
# 261 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP$signalDone_task$runTask(void )
#line 261
{
  switch (Stm25pSectorP$m_state) {
      case Stm25pSectorP$S_IDLE: 
        Stm25pSectorP$ClientResource$granted(Stm25pSectorP$m_client);
      break;
      case Stm25pSectorP$S_READ: 
        Stm25pSectorP$Sector$readDone(Stm25pSectorP$m_client, Stm25pSectorP$m_addr, Stm25pSectorP$m_buf, Stm25pSectorP$m_len, Stm25pSectorP$m_error);
      break;
      case Stm25pSectorP$S_CRC: 
        Stm25pSectorP$Sector$computeCrcDone(Stm25pSectorP$m_client, Stm25pSectorP$m_addr, Stm25pSectorP$m_len, 
        Stm25pSectorP$m_crc, Stm25pSectorP$m_error);
      break;
      case Stm25pSectorP$S_WRITE: 
        Stm25pSectorP$Sector$writeDone(Stm25pSectorP$m_client, Stm25pSectorP$m_addr, Stm25pSectorP$m_buf, Stm25pSectorP$m_len, Stm25pSectorP$m_error);
      break;
      case Stm25pSectorP$S_ERASE: 
        Stm25pSectorP$Sector$eraseDone(Stm25pSectorP$m_client, Stm25pSectorP$m_addr, Stm25pSectorP$m_len, Stm25pSectorP$m_error);
      break;
      default: 
        break;
    }
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP$31$IO$set(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 45
  * (volatile uint8_t * )29U |= 0x01 << 7;
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$HplGeneralIO$set(void ){
#line 34
  /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP$31$IO$set();
#line 34
}
#line 34
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$GeneralIO$set(void )
#line 37
{
#line 37
  /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$HplGeneralIO$set();
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pSpiP$Hold$set(void ){
#line 29
  /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$GeneralIO$set();
#line 29
}
#line 29
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$HplGeneralIO$set(void ){
#line 34
  /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$set();
#line 34
}
#line 34
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$set(void )
#line 37
{
#line 37
  /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$HplGeneralIO$set();
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pSpiP$CSN$set(void ){
#line 29
  /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$set();
#line 29
}
#line 29
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP$31$IO$makeOutput(void )
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t * )30U |= 0x01 << 7;
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$HplGeneralIO$makeOutput(void ){
#line 71
  /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP$31$IO$makeOutput();
#line 71
}
#line 71
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$GeneralIO$makeOutput(void )
#line 43
{
#line 43
  /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$HplGeneralIO$makeOutput();
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pSpiP$Hold$makeOutput(void ){
#line 35
  /*HplStm25pPinsC.HoldM*/Msp430GpioC$4$GeneralIO$makeOutput();
#line 35
}
#line 35
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$makeOutput(void )
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t * )30U |= 0x01 << 4;
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$HplGeneralIO$makeOutput(void ){
#line 71
  /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$makeOutput();
#line 71
}
#line 71
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$makeOutput(void )
#line 43
{
#line 43
  /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$HplGeneralIO$makeOutput();
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pSpiP$CSN$makeOutput(void ){
#line 35
  /*HplStm25pPinsC.CSNM*/Msp430GpioC$3$GeneralIO$makeOutput();
#line 35
}
#line 35
# 100 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static inline error_t Stm25pSpiP$Init$init(void )
#line 100
{
  Stm25pSpiP$CSN$makeOutput();
  Stm25pSpiP$Hold$makeOutput();
  Stm25pSpiP$CSN$set();
  Stm25pSpiP$Hold$set();
  return SUCCESS;
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init(void )
#line 45
{
  memset(/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ, /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t x)
#line 46
{
#line 46
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$__nesc_unnamed4362 {
#line 46
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t f;
#line 46
    uint16_t t;
  } 
#line 46
  c = { .f = x };

#line 46
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$CC2int(x);
}

#line 94
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$setControlAsCompare(void )
{
  * (volatile uint16_t * )386U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$compareControl();
}

# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$setControlAsCompare(void ){
#line 36
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$setControlAsCompare();
#line 36
}
#line 36
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Init$init(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$setControlAsCompare();
  return SUCCESS;
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$Init$init(void )
#line 45
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$resQ);
  return SUCCESS;
}

# 214 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline void SerialP$ackInit(void )
#line 214
{
  SerialP$ackQ.writePtr = SerialP$ackQ.readPtr = 0;
}

#line 205
static __inline void SerialP$rxInit(void )
#line 205
{
  SerialP$rxBuf.writePtr = SerialP$rxBuf.readPtr = 0;
  SerialP$rxState = SerialP$RXSTATE_NOSYNC;
  SerialP$rxByteCnt = 0;
  SerialP$rxProto = 0;
  SerialP$rxSeqno = 0;
  SerialP$rxCRC = 0;
}

#line 193
static __inline void SerialP$txInit(void )
#line 193
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 195
  for (i = 0; i < SerialP$TX_BUFFER_COUNT; i++) SerialP$txBuf[i].state = SerialP$BUFFER_AVAILABLE;
  SerialP$txState = SerialP$TXSTATE_IDLE;
  SerialP$txByteCnt = 0;
  SerialP$txProto = 0;
  SerialP$txSeqno = 0;
  SerialP$txCRC = 0;
  SerialP$txPending = FALSE;
  SerialP$txIndex = 0;
}

#line 218
static inline error_t SerialP$Init$init(void )
#line 218
{

  SerialP$txInit();
  SerialP$rxInit();
  SerialP$ackInit();

  return SUCCESS;
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$Init$init(void )
#line 45
{
  memset(/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$resQ, /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$NO_ENTRY, sizeof /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$resQ);
  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC$2$Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, SerialP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$1$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, Stm25pSpiP$Init$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$startDoneTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(SerialP$startDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 342 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SplitControl$start(void )
#line 342
{
  SerialP$startDoneTask$postTask();
  return SUCCESS;
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t RandRWC$SerialControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = SerialP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 114 "RandRWC.nc"
static inline void RandRWC$Boot$booted(void )
#line 114
{
  RandRWC$SerialControl$start();
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 49
  RandRWC$Boot$booted();
#line 49
}
#line 49
# 206 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_disable_interrupt(void )
{
   __asm volatile ("dint");
   __asm volatile ("nop");}

# 126 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void )
#line 126
{
  return MSP430_POWER_LPM4;
}

# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = McuSleepC$McuPowerOverride$default$lowestState();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void )
#line 66
{
  mcu_power_t pState = MSP430_POWER_LPM3;









  if ((((((
#line 69
  TA0CCTL0 & 0x0010 || 
  TA0CCTL1 & 0x0010) || 
  TA0CCTL2 & 0x0010) && (
  TA0CTL & (3 << 8)) == (2 << 8)) || (
  ME1 & ((1 << 7) | (1 << 6)) && U0TCTL & 0x20)) || (
  ME2 & ((1 << 5) | (1 << 4)) && U1TCTL & 0x20))


   || (U0CTLnr & 0x01 && I2CTCTLnr & 0x20 && 
  I2CDCTLnr & 0x20 && U0CTLnr & 0x04 && U0CTLnr & 0x20)) {


    pState = MSP430_POWER_LPM1;
    }


  if (ADC12CTL0 & 0x0010) {
      if (ADC12CTL1 & (2 << 3)) {

          if (ADC12CTL1 & (1 << 3)) {
            pState = MSP430_POWER_LPM1;
            }
          else {
#line 91
            pState = MSP430_POWER_ACTIVE;
            }
        }
      else {
#line 92
        if (ADC12CTL1 & 0x0400 && (TA0CTL & (3 << 8)) == (2 << 8)) {



            pState = MSP430_POWER_LPM1;
          }
        }
    }

  return pState;
}

# 194 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 194
{
  return m1 < m2 ? m1 : m2;
}

# 104 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/McuSleepC.nc"
static inline void McuSleepC$computePowerState(void )
#line 104
{
  McuSleepC$powerState = mcombine(McuSleepC$getPowerState(), 
  McuSleepC$McuPowerOverride$lowestState());
}

static inline void McuSleepC$McuSleep$sleep(void )
#line 109
{
  uint16_t temp;

#line 111
  if (McuSleepC$dirty) {
      McuSleepC$computePowerState();
    }

  temp = McuSleepC$msp430PowerBits[McuSleepC$powerState] | 0x0008;
   __asm volatile ("bis  %0, r2" :  : "m"(temp));

   __asm volatile ("" :  :  : "memory");
  __nesc_disable_interrupt();
}

# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP$McuSleep$sleep(void ){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void )
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 72
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$taskLoop(void ){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ArbiterInfo$userId();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 349 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P$Usart$disableRxIntr(void )
#line 349
{
  HplMsp430Usart0P$IE1 &= ~(1 << 6);
}

# 177 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableRxIntr(void ){
#line 177
  HplMsp430Usart0P$Usart$disableRxIntr();
#line 177
}
#line 177
# 170 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$rxDone(uint8_t data)
#line 170
{

  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos - 1] = data;
    }
  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos < /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$continueOp();
    }
  else 
#line 177
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone();
    }
}

# 65 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$rxDone(uint8_t arg_0x102105020, uint8_t data){
#line 54
  switch (arg_0x102105020) {
#line 54
    case /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 54
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$rxDone(data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$rxDone(arg_0x102105020, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$inUse(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ArbiterInfo$inUse();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$rxDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId(), data);
    }
}

# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P$Interrupts$rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$rxDone(data);
#line 54
}
#line 54
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P$HplI2C$isI2C(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  {
    unsigned char __nesc_temp = 
#line 56
    HplMsp430I2C0P$U0CTL & 0x20 && HplMsp430I2C0P$U0CTL & 0x04 && HplMsp430I2C0P$U0CTL & 0x01;

#line 56
    return __nesc_temp;
  }
}

# 6 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool HplMsp430Usart0P$HplI2C$isI2C(void ){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = HplMsp430I2C0P$HplI2C$isI2C();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$default$fired(uint8_t id)
#line 66
{
}

# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$fired(uint8_t arg_0x102105e18){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$default$fired(arg_0x102105e18);
#line 39
}
#line 39
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawI2CInterrupts$fired(void )
#line 59
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$fired(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId());
    }
}

# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void HplMsp430Usart0P$I2CInterrupts$fired(void ){
#line 39
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawI2CInterrupts$fired();
#line 39
}
#line 39
# 188 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$txDone(void )
#line 188
{
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$txDone(uint8_t id)
#line 64
{
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$txDone(uint8_t arg_0x102105020){
#line 49
  switch (arg_0x102105020) {
#line 49
    case /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$txDone();
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$txDone(arg_0x102105020);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$txDone(void )
#line 49
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$txDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId());
    }
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P$Interrupts$txDone(void ){
#line 49
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$txDone();
#line 49
}
#line 49
# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$ArbiterInfo$userId(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ArbiterInfo$userId();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 387 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$dataReceived(uint8_t data)
#line 387
{
  SerialP$rx_state_machine(FALSE, data);
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t data){
#line 83
  SerialP$SerialFrameComm$dataReceived(data);
#line 83
}
#line 83
# 384 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$delimiterReceived(void )
#line 384
{
  SerialP$rx_state_machine(TRUE, 0);
}

# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$delimiterReceived(void ){
#line 74
  SerialP$SerialFrameComm$delimiterReceived();
#line 74
}
#line 74
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$UartStream$receivedByte(uint8_t data)
#line 61
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC$SerialFrameComm$delimiterReceived();
      return;
    }
  else {
#line 73
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC$state.receiveEscape = 1;
        return;
      }
    else {
#line 78
      if (HdlcTranslateC$state.receiveEscape) {

          HdlcTranslateC$state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 83
  HdlcTranslateC$SerialFrameComm$dataReceived(data);
}

# 221 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$receivedByte(uint8_t id, uint8_t byte)
#line 221
{
}

# 79 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$receivedByte(uint8_t arg_0x1024af860, uint8_t byte){
#line 79
  switch (arg_0x1024af860) {
#line 79
    case /*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID:
#line 79
      HdlcTranslateC$UartStream$receivedByte(byte);
#line 79
      break;
#line 79
    default:
#line 79
      /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$receivedByte(arg_0x1024af860, byte);
#line 79
      break;
#line 79
    }
#line 79
}
#line 79
# 116 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 116
{
}

# 222 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 222
{
}

# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$receiveDone(uint8_t arg_0x1024af860, uint8_t * buf, uint16_t len, error_t error){
#line 99
  switch (arg_0x1024af860) {
#line 99
    case /*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID:
#line 99
      HdlcTranslateC$UartStream$receiveDone(buf, len, error);
#line 99
      break;
#line 99
    default:
#line 99
      /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$receiveDone(arg_0x1024af860, buf, len, error);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 134 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartInterrupts$rxDone(uint8_t id, uint8_t data)
#line 134
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_buf) {
      /*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_buf[/*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_pos++] = data;
      if (/*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_pos >= /*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_len) {
          uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_buf;

#line 139
          /*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_buf = (void *)0;
          /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$receiveDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP$0$m_rx_len, SUCCESS);
        }
    }
  else 
#line 142
    {
      /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$receivedByte(id, data);
    }
}

# 65 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$default$rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$rxDone(uint8_t arg_0x102105020, uint8_t data){
#line 54
  switch (arg_0x102105020) {
#line 54
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C$0$CLIENT_ID:
#line 54
      /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartInterrupts$rxDone(/*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID, data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$default$rxDone(arg_0x102105020, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$ArbiterInfo$inUse(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ArbiterInfo$inUse();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$RawInterrupts$rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$ArbiterInfo$inUse()) {
    /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$rxDone(/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$ArbiterInfo$userId(), data);
    }
}

# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P$Interrupts$rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$RawInterrupts$rxDone(data);
#line 54
}
#line 54
# 391 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline bool SerialP$valid_rx_proto(uint8_t proto)
#line 391
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 192 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void )
#line 192
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 1;
    }
}

#line 188
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void )
#line 188
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked;
}

#line 215
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void )
#line 215
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 217
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP$ReceiveBytePacket$startPacket(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 309 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP$rx_current_crc(void )
#line 309
{
  uint16_t crc;
  uint8_t tmp = SerialP$rxBuf.writePtr;

#line 312
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP$rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP$rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP$ReceiveBytePacket$endPacket(error_t result){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(result);
#line 69
}
#line 69
# 210 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void )
#line 210
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which];
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 232 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_full(void )
#line 232
{
  uint8_t tmp;
#line 233
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 234
  {
    tmp = SerialP$ackQ.writePtr;
    tmp2 = SerialP$ackQ.readPtr;
  }
  if (++tmp > SerialP$ACK_QUEUE_SIZE) {
#line 238
    tmp = 0;
    }
#line 239
  return tmp == tmp2;
}







static __inline void SerialP$ack_queue_push(uint8_t token)
#line 248
{
  if (!SerialP$ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 250
      {
        SerialP$ackQ.buf[SerialP$ackQ.writePtr] = token;
        if (++ SerialP$ackQ.writePtr > SerialP$ACK_QUEUE_SIZE) {
#line 252
          SerialP$ackQ.writePtr = 0;
          }
      }
#line 254
      SerialP$MaybeScheduleTx();
    }
}

# 233 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b)
#line 233
{
  /* atomic removed: atomic calls only */
#line 234
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE: 
          default: 
#line 255
            ;
      }
  }
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP$ReceiveBytePacket$byteReceived(uint8_t data){
#line 58
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(data);
#line 58
}
#line 58
# 299 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP$rx_buffer_top(void )
#line 299
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 301
  return tmp;
}

#line 303
static __inline uint8_t SerialP$rx_buffer_pop(void )
#line 303
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 305
  if (++ SerialP$rxBuf.readPtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 305
    SerialP$rxBuf.readPtr = 0;
    }
#line 306
  return tmp;
}

#line 295
static __inline void SerialP$rx_buffer_push(uint8_t data)
#line 295
{
  SerialP$rxBuf.buf[SerialP$rxBuf.writePtr] = data;
  if (++ SerialP$rxBuf.writePtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 297
    SerialP$rxBuf.writePtr = 0;
    }
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$SerialFrameComm$resetReceive(void )
#line 55
{
  HdlcTranslateC$state.receiveEscape = 0;
}

# 68 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP$SerialFrameComm$resetReceive(void ){
#line 68
  HdlcTranslateC$SerialFrameComm$resetReceive();
#line 68
}
#line 68
# 220 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 220
{
}

# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$sendDone(uint8_t arg_0x1024af860, uint8_t * buf, uint16_t len, error_t error){
#line 57
  switch (arg_0x1024af860) {
#line 57
    case /*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID:
#line 57
      HdlcTranslateC$UartStream$sendDone(buf, len, error);
#line 57
      break;
#line 57
    default:
#line 57
      /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$default$sendDone(arg_0x1024af860, buf, len, error);
#line 57
      break;
#line 57
    }
#line 57
}
#line 57
# 384 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P$Usart$tx(uint8_t data)
#line 384
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 385
    HplMsp430Usart1P$U1TXBUF = data;
#line 385
    __nesc_atomic_end(__nesc_atomic); }
}

# 224 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$tx(uint8_t data){
#line 224
  HplMsp430Usart1P$Usart$tx(data);
#line 224
}
#line 224
# 162 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartInterrupts$txDone(uint8_t id)
#line 162
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP$0$current_owner != id) {
      uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_buf;

#line 165
      /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_buf = (void *)0;
      /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$sendDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_len, FAIL);
    }
  else {
#line 168
    if (/*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_pos < /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_len) {
        /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$tx(/*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_buf[/*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_pos++]);
      }
    else {
        uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_buf;

#line 173
        /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_buf = (void *)0;
        /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$sendDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_len, SUCCESS);
      }
    }
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$default$txDone(uint8_t id)
#line 64
{
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$txDone(uint8_t arg_0x102105020){
#line 49
  switch (arg_0x102105020) {
#line 49
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C$0$CLIENT_ID:
#line 49
      /*Msp430Uart1P.UartP*/Msp430UartP$0$UsartInterrupts$txDone(/*PlatformSerialC.UartC*/Msp430Uart1C$0$CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$default$txDone(arg_0x102105020);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$RawInterrupts$txDone(void )
#line 49
{
  if (/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$ArbiterInfo$inUse()) {
    /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$Interrupts$txDone(/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$ArbiterInfo$userId());
    }
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P$Interrupts$txDone(void ){
#line 49
  /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP$1$RawInterrupts$txDone();
#line 49
}
#line 49
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP$SerialFrameComm$putData(uint8_t data){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HdlcTranslateC$SerialFrameComm$putData(data);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 513 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SendBytePacket$completeSend(void )
#line 513
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 515
  {
    SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = SerialP$SendBytePacket$completeSend();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 167 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void )
#line 167
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 170
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 70 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP$SendBytePacket$nextByte(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 642 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$putDone(void )
#line 642
{
  {
    error_t txResult = SUCCESS;

    switch (SerialP$txState) {

        case SerialP$TXSTATE_PROTO: 

          txResult = SerialP$SerialFrameComm$putData(SerialP$txProto);

        SerialP$txState = SerialP$TXSTATE_INFO;



        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txProto);
        break;

        case SerialP$TXSTATE_SEQNO: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txSeqno);
        SerialP$txState = SerialP$TXSTATE_INFO;
        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txSeqno);
        break;

        case SerialP$TXSTATE_INFO: /* atomic removed: atomic calls only */
          {
            txResult = SerialP$SerialFrameComm$putData(SerialP$txBuf[SerialP$txIndex].buf);
            SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txBuf[SerialP$txIndex].buf);
            ++SerialP$txByteCnt;

            if (SerialP$txIndex == SerialP$TX_DATA_INDEX) {
                uint8_t nextByte;

#line 673
                nextByte = SerialP$SendBytePacket$nextByte();
                if (SerialP$txBuf[SerialP$txIndex].state == SerialP$BUFFER_COMPLETE || SerialP$txByteCnt >= SerialP$SERIAL_MTU) {
                    SerialP$txState = SerialP$TXSTATE_FCS1;
                  }
                else {
                    SerialP$txBuf[SerialP$txIndex].buf = nextByte;
                  }
              }
            else {
                SerialP$txState = SerialP$TXSTATE_FCS1;
              }
          }
        break;

        case SerialP$TXSTATE_FCS1: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txCRC & 0xff);
        SerialP$txState = SerialP$TXSTATE_FCS2;
        break;

        case SerialP$TXSTATE_FCS2: 
          txResult = SerialP$SerialFrameComm$putData((SerialP$txCRC >> 8) & 0xff);
        SerialP$txState = SerialP$TXSTATE_ENDFLAG;
        break;

        case SerialP$TXSTATE_ENDFLAG: 
          txResult = SerialP$SerialFrameComm$putDelimiter();
        SerialP$txState = SerialP$TXSTATE_ENDWAIT;
        break;

        case SerialP$TXSTATE_ENDWAIT: 
          SerialP$txState = SerialP$TXSTATE_FINISH;
        case SerialP$TXSTATE_FINISH: 
          SerialP$MaybeScheduleTx();
        break;
        case SerialP$TXSTATE_ERROR: 
          default: 
            txResult = FAIL;
        break;
      }

    if (txResult != SUCCESS) {
        SerialP$txState = SerialP$TXSTATE_ERROR;
        SerialP$MaybeScheduleTx();
      }
  }
}

# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$putDone(void ){
#line 89
  SerialP$SerialFrameComm$putDone();
#line 89
}
#line 89
# 226 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
  __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (({
#line 228
    uint16_t __x;

#line 228
     __asm volatile ("mov	r2, %0" : "=r"((uint16_t )__x));__x;
  }
  )
#line 228
   & 0x0008) != 0;

#line 229
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}

  void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
   __asm volatile ("" :  :  : "memory");
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}

# 11 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(12)))  void sig_TIMERA0_VECTOR(void )
#line 11
{
#line 11
  Msp430TimerCommonP$VectorTimerA0$fired();
}

# 169 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Event$fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$captured(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$fired();
    }
}

#line 169
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Event$fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$captured(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$fired();
    }
}

#line 169
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Event$fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$captured(/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$fired();
    }
}

# 12 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(10)))  void sig_TIMERA1_VECTOR(void )
#line 12
{
#line 12
  Msp430TimerCommonP$VectorTimerA1$fired();
}

#line 13
__attribute((wakeup)) __attribute((interrupt(26)))  void sig_TIMERB0_VECTOR(void )
#line 13
{
#line 13
  Msp430TimerCommonP$VectorTimerB0$fired();
}

# 135 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$default$fired(uint8_t n)
{
}

# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$fired(uint8_t arg_0x1017aede8){
#line 28
  switch (arg_0x1017aede8) {
#line 28
    case 0:
#line 28
      /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Event$fired();
#line 28
      break;
#line 28
    case 1:
#line 28
      /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Event$fired();
#line 28
      break;
#line 28
    case 2:
#line 28
      /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Event$fired();
#line 28
      break;
#line 28
    case 3:
#line 28
      /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Event$fired();
#line 28
      break;
#line 28
    case 4:
#line 28
      /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Event$fired();
#line 28
      break;
#line 28
    case 5:
#line 28
      /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Event$fired();
#line 28
      break;
#line 28
    case 6:
#line 28
      /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Event$fired();
#line 28
      break;
#line 28
    case 7:
#line 28
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Overflow$fired();
#line 28
      break;
#line 28
    default:
#line 28
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$default$fired(arg_0x1017aede8);
#line 28
      break;
#line 28
    }
#line 28
}
#line 28
# 159 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 96 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$get();
#line 98
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type expires;
#line 98
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type )now << 5, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type )remaining << 5);
}

# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$get(void )
{
  /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC$0$m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$get();

#line 76
      if (/*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC$0$LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC$0$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get(void )
{




  if (1) {
      /* atomic removed: atomic calls only */
#line 58
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )400U;

#line 61
        do {
#line 61
            t0 = t1;
#line 61
            t1 = * (volatile uint16_t * )400U;
          }
        while (
#line 61
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 62
          t1;

#line 62
          return __nesc_temp;
        }
      }
    }
  else 
#line 65
    {
      return * (volatile uint16_t * )400U;
    }
}

# 14 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(24)))  void sig_TIMERB1_VECTOR(void )
#line 14
{
#line 14
  Msp430TimerCommonP$VectorTimerB1$fired();
}

# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void )
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 160 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static void Msp430ClockP$set_dco_calib(int calib)
{
  BCSCTL1 = (BCSCTL1 & ~0x07) | ((calib >> 8) & 0x07);
  DCOCTL = calib & 0xff;
}

# 16 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static void MotePlatformC$TOSH_FLASH_M25P_DP_bit(bool set)
#line 16
{
  if (set) {
    TOSH_SET_SIMO0_PIN();
    }
  else {
#line 20
    TOSH_CLR_SIMO0_PIN();
    }
#line 21
  TOSH_SET_UCLK0_PIN();
  TOSH_CLR_UCLK0_PIN();
}

# 123 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

#line 164
static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x10152b2f0){
#line 64
  switch (arg_0x10152b2f0) {
#line 64
    case Stm25pSectorP$signalDone_task:
#line 64
      Stm25pSectorP$signalDone_task$runTask();
#line 64
      break;
#line 64
    case /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$startTask:
#line 64
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$startTask$runTask();
#line 64
      break;
#line 64
    case /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$timerTask:
#line 64
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP$0$timerTask$runTask();
#line 64
      break;
#line 64
    case /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task:
#line 64
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$runTask();
#line 64
      break;
#line 64
    case /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$grantedTask:
#line 64
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$grantedTask$runTask();
#line 64
      break;
#line 64
    case SerialP$RunTx:
#line 64
      SerialP$RunTx$runTask();
#line 64
      break;
#line 64
    case SerialP$startDoneTask:
#line 64
      SerialP$startDoneTask$runTask();
#line 64
      break;
#line 64
    case SerialP$stopDoneTask:
#line 64
      SerialP$stopDoneTask$runTask();
#line 64
      break;
#line 64
    case SerialP$defaultSerialFlushTask:
#line 64
      SerialP$defaultSerialFlushTask$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask();
#line 64
      break;
#line 64
    case /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$grantedTask:
#line 64
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$grantedTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x10152b2f0);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP$0$ResourceConfigure$configure(uint8_t id)
#line 85
{
  msp430_uart_union_config_t *config = /*Msp430Uart1P.UartP*/Msp430UartP$0$Msp430UartConfigure$getConfig(id);

#line 87
  /*Msp430Uart1P.UartP*/Msp430UartP$0$m_byte_time = config->uartConfig.ubr / 2;
  /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$setModeUart(config);
  /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$enableIntr();
}

# 251 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static void HplMsp430Usart1P$Usart$disableSpi(void )
#line 251
{
  /* atomic removed: atomic calls only */
#line 252
  {
    HplMsp430Usart1P$ME2 &= ~(1 << 4);
    HplMsp430Usart1P$SIMO$selectIOFunc();
    HplMsp430Usart1P$SOMI$selectIOFunc();
    HplMsp430Usart1P$UCLK$selectIOFunc();
  }
}

#line 211
static void HplMsp430Usart1P$Usart$disableUart(void )
#line 211
{
  /* atomic removed: atomic calls only */
#line 212
  {
    HplMsp430Usart1P$ME2 &= ~((1 << 5) | (1 << 4));
    HplMsp430Usart1P$UTXD$selectIOFunc();
    HplMsp430Usart1P$URXD$selectIOFunc();
  }
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$clr(void )
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t * )49U &= ~(0x01 << 4);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
}

# 174 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$Resource$isOwner(uint8_t id)
#line 174
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 175
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId == id && /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_BUSY) {
          unsigned char __nesc_temp = 
#line 176
          TRUE;

          {
#line 176
            __nesc_atomic_end(__nesc_atomic); 
#line 176
            return __nesc_temp;
          }
        }
      else 
#line 177
        {
          unsigned char __nesc_temp = 
#line 177
          FALSE;

          {
#line 177
            __nesc_atomic_end(__nesc_atomic); 
#line 177
            return __nesc_temp;
          }
        }
    }
#line 180
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "RandRWC.nc"
static void RandRWC$resetSeed(void )
#line 53
{
  RandRWC$shiftReg = 119 * 119 * (TOS_NODE_ID % 100 + 1);
  RandRWC$initSeed = RandRWC$shiftReg;
  RandRWC$mask = 137 * 29 * (TOS_NODE_ID % 100 + 1);
}

#line 37
static uint16_t RandRWC$rand(void )
#line 37
{
  bool endbit;
  uint16_t tmpShiftReg;

  tmpShiftReg = RandRWC$shiftReg;
  endbit = (tmpShiftReg & 0x8000) != 0;
  tmpShiftReg <<= 1;
  if (endbit) {
    tmpShiftReg ^= 0x100b;
    }
#line 46
  tmpShiftReg++;
  RandRWC$shiftReg = tmpShiftReg;
  tmpShiftReg = tmpShiftReg ^ RandRWC$mask;

  return tmpShiftReg;
}

#line 212
static void RandRWC$done(void )
#line 212
{



  uint8_t act = TOS_NODE_ID / 100;


  RandRWC$Leds$led2Toggle();

  switch (act) 
    {
      case 0: 
        if (RandRWC$testCount < sizeof RandRWC$actions) {
          RandRWC$doAction(RandRWC$actions[RandRWC$testCount]);
          }
        else {
#line 227
          RandRWC$success();
          }
#line 228
      break;

      case RandRWC$A_READ: case RandRWC$A_WRITE: 
          if (RandRWC$testCount) {
            RandRWC$success();
            }
          else {
#line 234
            RandRWC$doAction(act);
            }
#line 235
      break;

      default: 
        RandRWC$fail(FAIL);
      break;
    }
  RandRWC$testCount++;
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$toggle(void )
#line 47
{
#line 47
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 47
    * (volatile uint8_t * )49U ^= 0x01 << 6;
#line 47
    __nesc_atomic_end(__nesc_atomic); }
}

# 191 "RandRWC.nc"
static void RandRWC$doAction(int act)
#line 191
{
  RandRWC$count = 0;
  RandRWC$resetSeed();

  switch (act) 
    {
      case RandRWC$A_WRITE: 
        ;
      RandRWC$scheck(RandRWC$BlockWrite$erase());
      break;
      case RandRWC$A_READ: 
        RandRWC$nextRead();
      break;
    }
}

#line 92
static __attribute((noinline)) bool RandRWC$scheck(error_t r)
#line 92
{
  if (r != SUCCESS) {
    RandRWC$fail(r);
    }
#line 95
  return r == SUCCESS;
}

#line 67
static void RandRWC$report(error_t e)
#line 67
{
  uint8_t *msg = RandRWC$AMSend$getPayload(&RandRWC$reportMsg, 1);

  msg[0] = e;
  if (RandRWC$AMSend$send(AM_BROADCAST_ADDR, &RandRWC$reportMsg, 1) != SUCCESS) {
    RandRWC$Leds$led0On();
    }
}

# 502 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$MaybeScheduleTx(void )
#line 502
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 503
    {
      if (SerialP$txPending == 0) {
          if (SerialP$RunTx$postTask() == SUCCESS) {
              SerialP$txPending = 1;
            }
        }
    }
#line 509
    __nesc_atomic_end(__nesc_atomic); }
}

# 124 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static error_t Stm25pBlockP$newRequest(uint8_t client)
#line 124
{

  if (Stm25pBlockP$m_block_state[client].req != Stm25pBlockP$S_IDLE) {
    return FAIL;
    }
  Stm25pBlockP$ClientResource$request(client);
  Stm25pBlockP$m_block_state[client] = Stm25pBlockP$m_req;

  return SUCCESS;
}

# 136 "RandRWC.nc"
static void RandRWC$nextRead(void )
#line 136
{
  if (++RandRWC$count == RandRWC$NWRITES) {
    RandRWC$done();
    }
  else {
      RandRWC$setParameters();
      ;
      RandRWC$scheck(RandRWC$BlockRead$read(RandRWC$addr, RandRWC$rdata, RandRWC$len));
    }
}

#line 104
static void RandRWC$setParameters(void )
#line 104
{
  RandRWC$addr = ((uint32_t )RandRWC$count << 12) | (RandRWC$rand() >> 6);
  RandRWC$len = RandRWC$rand() >> 7;
  if (RandRWC$addr + RandRWC$len > RandRWC$SIZE) {
    RandRWC$addr = RandRWC$SIZE - RandRWC$len;
    }
#line 109
  RandRWC$offset = RandRWC$rand() >> 8;
  if (RandRWC$offset + RandRWC$len > sizeof RandRWC$data) {
    RandRWC$offset = sizeof RandRWC$data - RandRWC$len;
    }
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$clr(void )
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t * )49U &= ~(0x01 << 5);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
}

# 347 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$testOff(void )
#line 347
{
  bool turnOff = FALSE;

#line 349
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP$txState == SerialP$TXSTATE_INACTIVE && 
      SerialP$rxState == SerialP$RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP$stopDoneTask$postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
        SerialP$offPending = FALSE;
#line 357
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
        SerialP$offPending = TRUE;
#line 360
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 86 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void )
#line 86
{
  HdlcTranslateC$state.sendEscape = 0;
  HdlcTranslateC$m_data = HDLC_FLAG_BYTE;
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 147 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP$0$UartStream$send(uint8_t id, uint8_t *buf, uint16_t len)
#line 147
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP$0$UsartResource$isOwner(id) == FALSE) {
    return FAIL;
    }
#line 150
  if (len == 0) {
    return FAIL;
    }
  else {
#line 152
    if (/*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_buf) {
      return EBUSY;
      }
    }
#line 154
  /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_buf = buf;
  /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_len = len;
  /*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_pos = 0;
  /*Msp430Uart1P.UartP*/Msp430UartP$0$current_owner = id;
  /*Msp430Uart1P.UartP*/Msp430UartP$0$Usart$tx(buf[/*Msp430Uart1P.UartP*/Msp430UartP$0$m_tx_pos++]);
  return SUCCESS;
}

# 86 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static uint8_t Stm25pSpiP$sendCmd(uint8_t cmd, uint8_t len)
#line 86
{

  uint8_t tmp = 0;
  int i;

  Stm25pSpiP$CSN$clr();
  for (i = 0; i < len; i++) 
    tmp = Stm25pSpiP$SpiByte$write(cmd);
  Stm25pSpiP$CSN$set();

  return tmp;
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$clr(void )
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t * )29U &= ~(0x01 << 4);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
}

# 386 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static uint8_t HplMsp430Usart0P$Usart$rx(void )
#line 386
{
  uint8_t value;

#line 388
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 388
    value = U0RXBUF;
#line 388
    __nesc_atomic_end(__nesc_atomic); }
  return value;
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP$28$IO$set(void )
#line 45
{
#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    * (volatile uint8_t * )29U |= 0x01 << 4;
#line 45
    __nesc_atomic_end(__nesc_atomic); }
}

# 108 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_BUSY && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$resId == id) {
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Queue$isEmpty() == FALSE) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$reqResId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Queue$dequeue();
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$NO_RES;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_GRANTING;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$grantedTask$postTask();
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$unconfigure(id);
            }
          else {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$default_owner_id;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_CONTROLLED;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceConfigure$unconfigure(id);
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$granted();
            }
          {
            unsigned char __nesc_temp = 
#line 124
            SUCCESS;

            {
#line 124
              __nesc_atomic_end(__nesc_atomic); 
#line 124
              return __nesc_temp;
            }
          }
        }
    }
#line 128
    __nesc_atomic_end(__nesc_atomic); }
#line 127
  return FAIL;
}

# 247 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P$Usart$disableSpi(void )
#line 247
{
  /* atomic removed: atomic calls only */
#line 248
  {
    HplMsp430Usart0P$ME1 &= ~(1 << 6);
    HplMsp430Usart0P$SIMO$selectIOFunc();
    HplMsp430Usart0P$SOMI$selectIOFunc();
    HplMsp430Usart0P$UCLK$selectIOFunc();
  }
}

# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static error_t Stm25pSectorP$SplitControl$start(void )
#line 88
{
  error_t error = Stm25pSectorP$SpiResource$request();

#line 90
  if (error == SUCCESS) {
    Stm25pSectorP$m_power_state = Stm25pSectorP$S_START;
    }
#line 92
  return error;
}

# 77 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Resource$request(uint8_t id)
#line 77
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceRequested$requested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_CONTROLLED) {
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_GRANTING;
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$Queue$enqueue(id);

          {
#line 84
            __nesc_atomic_end(__nesc_atomic); 
#line 84
            return __nesc_temp;
          }
        }
    }
#line 87
    __nesc_atomic_end(__nesc_atomic); }
#line 86
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ResourceDefaultOwner$requested();
  return SUCCESS;
}

# 136 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static void Stm25pBlockP$ClientResource$granted(uint8_t id)
#line 136
{

  switch (Stm25pBlockP$m_block_state[id].req) {
      case Stm25pBlockP$S_READ: 
        Stm25pBlockP$Sector$read(id, Stm25pBlockP$m_block_state[id].addr, 
        Stm25pBlockP$m_block_state[id].buf, 
        Stm25pBlockP$m_block_state[id].len);
      break;
      case Stm25pBlockP$S_CRC: 
        Stm25pBlockP$Sector$computeCrc(id, (uint16_t )Stm25pBlockP$m_block_state[id].buf, 
        Stm25pBlockP$m_block_state[id].addr, 
        Stm25pBlockP$m_block_state[id].len);
      break;
      case Stm25pBlockP$S_WRITE: 
        Stm25pBlockP$Sector$write(id, Stm25pBlockP$m_block_state[id].addr, 
        Stm25pBlockP$m_block_state[id].buf, 
        Stm25pBlockP$m_block_state[id].len);
      break;
      case Stm25pBlockP$S_ERASE: 
        Stm25pBlockP$Sector$erase(id, 0, Stm25pBlockP$Sector$getNumSectors(id));
      break;
      case Stm25pBlockP$S_SYNC: 
        Stm25pBlockP$signalDone(id, 0, SUCCESS);
      break;
      case Stm25pBlockP$S_IDLE: 
        break;
    }
}

# 138 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static error_t Stm25pSpiP$Spi$read(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len)
#line 139
{
  Stm25pSpiP$m_cmd[0] = Stm25pSpiP$S_READ;
  Stm25pSpiP$m_addr = addr;
  Stm25pSpiP$m_buf = buf;
  Stm25pSpiP$m_len = len;
  return Stm25pSpiP$newRequest(FALSE, 4);
}

#line 176
static error_t Stm25pSpiP$newRequest(bool write, stm25p_len_t cmd_len)
#line 176
{
  Stm25pSpiP$m_cmd[1] = Stm25pSpiP$m_addr >> 16;
  Stm25pSpiP$m_cmd[2] = Stm25pSpiP$m_addr >> 8;
  Stm25pSpiP$m_cmd[3] = Stm25pSpiP$m_addr;
  if (write) {
    Stm25pSpiP$sendCmd(Stm25pSpiP$S_WRITE_ENABLE, 1);
    }
#line 182
  Stm25pSpiP$CSN$clr();
  Stm25pSpiP$SpiPacket$send(Stm25pSpiP$m_cmd, (void *)0, cmd_len);
  return SUCCESS;
}

# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len)
#line 146
{

  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_client = id;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf = tx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf = rx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len = len;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos = 0;

  if (len) {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$enableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$continueOp();
    }
  else {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$postTask();
    }

  return SUCCESS;
}

#line 121
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$continueOp(void )
#line 121
{

  uint8_t end;
  uint8_t tmp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 126
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos] : 0);

      end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos + /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SPI_ATOMIC_SIZE;
      if (end > /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len) {
        end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len;
        }
      while (++/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos < end) {
          while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isRxIntrPending()) ;
          tmp = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$rx();
          if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf) {
            /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos - 1] = tmp;
            }
#line 138
          /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos] : 0);
        }
    }
#line 140
    __nesc_atomic_end(__nesc_atomic); }
}

# 156 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static error_t Stm25pSpiP$Spi$pageProgram(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len)
#line 157
{
  Stm25pSpiP$m_cmd[0] = Stm25pSpiP$S_PAGE_PROGRAM;
  Stm25pSpiP$m_addr = addr;
  Stm25pSpiP$m_buf = buf;
  Stm25pSpiP$m_len = len;
  return Stm25pSpiP$newRequest(TRUE, 4);
}

# 158 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSectorP.nc"
static stm25p_len_t Stm25pSectorP$calcWriteLen(stm25p_addr_t addr)
#line 158
{
  stm25p_len_t len = STM25P_PAGE_SIZE - (addr & STM25P_PAGE_MASK);

#line 160
  return Stm25pSectorP$m_cur_len < len ? Stm25pSectorP$m_cur_len : len;
}

# 165 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static error_t Stm25pSpiP$Spi$sectorErase(uint8_t sector)
#line 165
{
  Stm25pSpiP$m_cmd[0] = Stm25pSpiP$S_SECTOR_ERASE;
  Stm25pSpiP$m_addr = (stm25p_addr_t )sector << STM25P_SECTOR_SIZE_LOG2;
  return Stm25pSpiP$newRequest(TRUE, 4);
}

# 189 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pBlockP.nc"
static void Stm25pBlockP$signalDone(uint8_t id, uint16_t crc, error_t error)
#line 189
{

  Stm25pBlockP$stm25p_block_req_t req = Stm25pBlockP$m_block_state[id].req;

  Stm25pBlockP$ClientResource$release(id);
  Stm25pBlockP$m_block_state[id].req = Stm25pBlockP$S_IDLE;
  switch (req) {
      case Stm25pBlockP$S_READ: 
        Stm25pBlockP$Read$readDone(id, Stm25pBlockP$m_block_state[id].addr, 
        Stm25pBlockP$m_block_state[id].buf, 
        Stm25pBlockP$m_block_state[id].len, error);
      break;
      case Stm25pBlockP$S_CRC: 
        Stm25pBlockP$Read$computeCrcDone(id, Stm25pBlockP$m_block_state[id].addr, 
        Stm25pBlockP$m_block_state[id].len, crc, error);
      break;
      case Stm25pBlockP$S_WRITE: 
        Stm25pBlockP$Write$writeDone(id, Stm25pBlockP$m_block_state[id].addr, 
        Stm25pBlockP$m_block_state[id].buf, 
        Stm25pBlockP$m_block_state[id].len, error);
      break;
      case Stm25pBlockP$S_SYNC: 
        Stm25pBlockP$Write$syncDone(id, error);
      break;
      case Stm25pBlockP$S_ERASE: 
        Stm25pBlockP$Write$eraseDone(id, error);
      break;
      case Stm25pBlockP$S_IDLE: 
        break;
    }
}

# 180 "RandRWC.nc"
static __attribute((noinline)) void RandRWC$BlockRead$readDone(storage_addr_t x, void *buf, storage_len_t rlen, error_t result)
#line 180
{
  if (RandRWC$scheck(result) && RandRWC$bcheck(x == RandRWC$addr && rlen == RandRWC$len && buf == RandRWC$rdata && 
  memcmp(RandRWC$data + RandRWC$offset, RandRWC$rdata, rlen) == 0)) {
    RandRWC$nextRead();
    }
}

#line 147
static void RandRWC$nextWrite(void )
#line 147
{
  if (++RandRWC$count == RandRWC$NWRITES) 
    {
      RandRWC$Leds$led2Toggle();
      ;
      RandRWC$scheck(RandRWC$BlockWrite$sync());
    }
  else 
    {
      RandRWC$setParameters();
      ;
      RandRWC$scheck(RandRWC$BlockWrite$write(RandRWC$addr, RandRWC$data + RandRWC$offset, RandRWC$len));
    }
}

# 187 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/stm25p/Stm25pSpiP.nc"
static void Stm25pSpiP$releaseAndRequest(void )
#line 187
{
  Stm25pSpiP$SpiResource$release();
  Stm25pSpiP$SpiResource$request();
}

#line 249
static void Stm25pSpiP$signalDone(error_t error)
#line 249
{
  Stm25pSpiP$m_is_writing = FALSE;
  switch (Stm25pSpiP$m_cmd[0]) {
      case Stm25pSpiP$S_READ: 
        if (Stm25pSpiP$m_computing_crc) {
            Stm25pSpiP$m_computing_crc = FALSE;
            Stm25pSpiP$Spi$computeCrcDone(Stm25pSpiP$m_crc, Stm25pSpiP$m_addr, Stm25pSpiP$m_len, error);
          }
        else {
            Stm25pSpiP$Spi$readDone(Stm25pSpiP$m_addr, Stm25pSpiP$m_buf, Stm25pSpiP$m_len, error);
          }
      break;
      case Stm25pSpiP$S_PAGE_PROGRAM: 
        Stm25pSpiP$Spi$pageProgramDone(Stm25pSpiP$m_addr, Stm25pSpiP$m_buf, Stm25pSpiP$m_len, error);
      break;
      case Stm25pSpiP$S_SECTOR_ERASE: 
        Stm25pSpiP$Spi$sectorEraseDone(Stm25pSpiP$m_addr >> STM25P_SECTOR_SIZE_LOG2, error);
      break;
      case Stm25pSpiP$S_BULK_ERASE: 
        Stm25pSpiP$Spi$bulkEraseDone(error);
      break;
    }
}

#line 192
static void Stm25pSpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 193
{

  int i;

  switch (Stm25pSpiP$m_cmd[0]) {

      case Stm25pSpiP$S_READ: 
        if (tx_buf == Stm25pSpiP$m_cmd) {
            Stm25pSpiP$SpiPacket$send((void *)0, Stm25pSpiP$m_buf, Stm25pSpiP$m_len);
            break;
          }
        else {
#line 204
          if (Stm25pSpiP$m_computing_crc) {
              for (i = 0; i < len; i++) 
                Stm25pSpiP$m_crc = crcByte(Stm25pSpiP$m_crc, Stm25pSpiP$m_crc_buf[i]);
              Stm25pSpiP$m_cur_addr += len;
              Stm25pSpiP$m_cur_len -= len;
              if (Stm25pSpiP$m_cur_len) {
                  Stm25pSpiP$SpiPacket$send((void *)0, Stm25pSpiP$m_crc_buf, Stm25pSpiP$calcReadLen());
                  break;
                }
            }
          }
#line 214
      Stm25pSpiP$CSN$set();
      Stm25pSpiP$signalDone(SUCCESS);
      break;

      case Stm25pSpiP$S_PAGE_PROGRAM: 
        if (tx_buf == Stm25pSpiP$m_cmd) {
            Stm25pSpiP$SpiPacket$send(Stm25pSpiP$m_buf, (void *)0, Stm25pSpiP$m_len);
            break;
          }


      case Stm25pSpiP$S_SECTOR_ERASE: case Stm25pSpiP$S_BULK_ERASE: 
          Stm25pSpiP$CSN$set();
      Stm25pSpiP$m_is_writing = TRUE;
      Stm25pSpiP$releaseAndRequest();
      break;

      default: 
        break;
    }
}

# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b)
#line 80
{
  crc = (uint8_t )(crc >> 8) | (crc << 8);
  crc ^= b;
  crc ^= (uint8_t )(crc & 0xff) >> 4;
  crc ^= crc << 12;
  crc ^= (crc & 0xff) << 5;
  return crc;
}

# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 136 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

# 96 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(18)))  void sig_UART0RX_VECTOR(void )
#line 96
{
  uint8_t temp = U0RXBUF;

#line 98
  HplMsp430Usart0P$Interrupts$rxDone(temp);
}

# 150 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ArbiterInfo$inUse(void )
#line 150
{
  /* atomic removed: atomic calls only */
#line 151
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 153
        FALSE;

#line 153
        return __nesc_temp;
      }
  }
#line 155
  return TRUE;
}






static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$ArbiterInfo$userId(void )
#line 163
{
  /* atomic removed: atomic calls only */
#line 164
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$state != /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 166
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$NO_RES;

#line 166
        return __nesc_temp;
      }
#line 167
    {
      unsigned char __nesc_temp = 
#line 167
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$1$resId;

#line 167
      return __nesc_temp;
    }
  }
}

# 101 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(16)))  void sig_UART0TX_VECTOR(void )
#line 101
{
  if (HplMsp430Usart0P$HplI2C$isI2C()) {
    HplMsp430Usart0P$I2CInterrupts$fired();
    }
  else {
#line 105
    HplMsp430Usart0P$Interrupts$txDone();
    }
}

# 96 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
__attribute((wakeup)) __attribute((interrupt(6)))  void sig_UART1RX_VECTOR(void )
#line 96
{
  uint8_t temp = U1RXBUF;

#line 98
  HplMsp430Usart1P$Interrupts$rxDone(temp);
}

# 150 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ArbiterInfo$inUse(void )
#line 150
{
  /* atomic removed: atomic calls only */
#line 151
  {
    if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 153
        FALSE;

#line 153
        return __nesc_temp;
      }
  }
#line 155
  return TRUE;
}

# 402 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data)
#line 402
{

  switch (SerialP$rxState) {

      case SerialP$RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP$rxInit();
            SerialP$rxState = SerialP$RXSTATE_PROTO;
          }
      break;

      case SerialP$RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP$rxCRC = crcByte(SerialP$rxCRC, data);
            SerialP$rxState = SerialP$RXSTATE_TOKEN;
            SerialP$rxProto = data;
            if (!SerialP$valid_rx_proto(SerialP$rxProto)) {
              goto nosync;
              }
            if (SerialP$rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP$ReceiveBytePacket$startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP$RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP$rxSeqno = data;
            SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rxSeqno);
            SerialP$rxState = SerialP$RXSTATE_INFO;
          }
      break;

      case SerialP$RXSTATE_INFO: 
        if (SerialP$rxByteCnt < SerialP$SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP$rxByteCnt >= 2) {
                    if (SerialP$rx_current_crc() == SerialP$rxCRC) {
                        SerialP$ReceiveBytePacket$endPacket(SUCCESS);
                        SerialP$ack_queue_push(SerialP$rxSeqno);
                        goto nosync;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP$rxByteCnt >= 2) {
                    SerialP$ReceiveBytePacket$byteReceived(SerialP$rx_buffer_top());
                    SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rx_buffer_pop());
                  }
                SerialP$rx_buffer_push(data);
                SerialP$rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP$rxInit();
  SerialP$SerialFrameComm$resetReceive();
  SerialP$ReceiveBytePacket$endPacket(FAIL);
  if (SerialP$offPending) {
      SerialP$rxState = SerialP$RXSTATE_INACTIVE;
      SerialP$testOff();
    }
  else {
    if (isDelimeter) {
        SerialP$rxState = SerialP$RXSTATE_PROTO;
      }
    }
  done: ;
}

# 285 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result)
#line 285
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 287
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE;
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask();
    }
}

# 163 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$ArbiterInfo$userId(void )
#line 163
{
  /* atomic removed: atomic calls only */
#line 164
  {
    if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$state != /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 166
        /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$NO_RES;

#line 166
        return __nesc_temp;
      }
#line 167
    {
      unsigned char __nesc_temp = 
#line 167
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP$2$resId;

#line 167
      return __nesc_temp;
    }
  }
}

# 101 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
__attribute((wakeup)) __attribute((interrupt(4)))  void sig_UART1TX_VECTOR(void )
#line 101
{
  HplMsp430Usart1P$Interrupts$txDone();
}

# 104 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 105
{
  if (HdlcTranslateC$state.sendEscape) {
      HdlcTranslateC$state.sendEscape = 0;
      HdlcTranslateC$m_data = HdlcTranslateC$txTemp;
      HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
    }
  else {
      HdlcTranslateC$SerialFrameComm$putDone();
    }
}

#line 92
static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data)
#line 92
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC$state.sendEscape = 1;
      HdlcTranslateC$txTemp = data ^ 0x20;
      HdlcTranslateC$m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC$m_data = data;
    }
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

