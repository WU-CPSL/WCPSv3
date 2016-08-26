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
# 8 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/nesc/lib/ncc/deputy_nodeputy.h"
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
# 281 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/nesc/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
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
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/msp430/msp430/include/string.h" 3
extern void *memset(void *arg_0x10e1d65d8, int arg_0x10e1d6840, size_t arg_0x10e1d6ae8);
#line 63
extern void *memset(void *arg_0x10e1e8868, int arg_0x10e1e8ad0, size_t arg_0x10e1e8d78);
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

  void (*__cleanup)(struct _reent *arg_0x10e2220c8);


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


  void (**_sig_func)(int arg_0x10e22d180);




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

volatile unsigned char P1IFG __asm ("0x0023");

volatile unsigned char P1IES __asm ("0x0024");

volatile unsigned char P1IE __asm ("0x0025");

volatile unsigned char P1SEL __asm ("0x0026");










volatile unsigned char P2OUT __asm ("0x0029");

volatile unsigned char P2DIR __asm ("0x002A");

volatile unsigned char P2IFG __asm ("0x002B");



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
#line 277
volatile unsigned char U1TCTL __asm ("0x0079");
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
# 36 "RadioSenseToLeds.h"
#line 33
typedef nx_struct radio_sense_msg {
  nx_uint16_t error;
  nx_uint16_t data;
} __attribute__((packed)) radio_sense_msg_t;

enum __nesc_unnamed4259 {
  AM_RADIO_SENSE_MSG = 7
};
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4260 {
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
typedef struct __nesc_unnamed4261 {

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
typedef struct __nesc_unnamed4262 {

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
typedef struct __nesc_unnamed4263 {

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
# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4264 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4265 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4266 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4267 {
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
enum __nesc_unnamed4268 {

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

enum __nesc_unnamed4269 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4270 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4271 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4272 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4273 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4274 {
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
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12.h"
#line 48
typedef struct __nesc_unnamed4275 {

  unsigned int inch : 4;
  unsigned int sref : 3;
  unsigned int ref2_5v : 1;
  unsigned int adc12ssel : 2;
  unsigned int adc12div : 3;
  unsigned int sht : 4;
  unsigned int sampcon_ssel : 2;
  unsigned int sampcon_id : 2;
  unsigned int  : 0;
} msp430adc12_channel_config_t;








#line 61
typedef struct __nesc_unnamed4276 {


  volatile unsigned 
  inch : 4, 
  sref : 3, 
  eos : 1;
} __attribute((packed))  adc12memctl_t;

enum inch_enum {


  INPUT_CHANNEL_A0 = 0, 
  INPUT_CHANNEL_A1 = 1, 
  INPUT_CHANNEL_A2 = 2, 
  INPUT_CHANNEL_A3 = 3, 
  INPUT_CHANNEL_A4 = 4, 
  INPUT_CHANNEL_A5 = 5, 
  INPUT_CHANNEL_A6 = 6, 
  INPUT_CHANNEL_A7 = 7, 
  EXTERNAL_REF_VOLTAGE_CHANNEL = 8, 
  REF_VOLTAGE_NEG_TERMINAL_CHANNEL = 9, 
  TEMPERATURE_DIODE_CHANNEL = 10, 
  SUPPLY_VOLTAGE_HALF_CHANNEL = 11, 
  INPUT_CHANNEL_NONE = 12
};

enum sref_enum {

  REFERENCE_AVcc_AVss = 0, 
  REFERENCE_VREFplus_AVss = 1, 
  REFERENCE_VeREFplus_AVss = 2, 
  REFERENCE_AVcc_VREFnegterm = 4, 
  REFERENCE_VREFplus_VREFnegterm = 5, 
  REFERENCE_VeREFplus_VREFnegterm = 6
};

enum ref2_5v_enum {

  REFVOLT_LEVEL_1_5 = 0, 
  REFVOLT_LEVEL_2_5 = 1, 
  REFVOLT_LEVEL_NONE = 0
};

enum adc12ssel_enum {

  SHT_SOURCE_ADC12OSC = 0, 
  SHT_SOURCE_ACLK = 1, 
  SHT_SOURCE_MCLK = 2, 
  SHT_SOURCE_SMCLK = 3
};

enum adc12div_enum {

  SHT_CLOCK_DIV_1 = 0, 
  SHT_CLOCK_DIV_2 = 1, 
  SHT_CLOCK_DIV_3 = 2, 
  SHT_CLOCK_DIV_4 = 3, 
  SHT_CLOCK_DIV_5 = 4, 
  SHT_CLOCK_DIV_6 = 5, 
  SHT_CLOCK_DIV_7 = 6, 
  SHT_CLOCK_DIV_8 = 7
};

enum sht_enum {

  SAMPLE_HOLD_4_CYCLES = 0, 
  SAMPLE_HOLD_8_CYCLES = 1, 
  SAMPLE_HOLD_16_CYCLES = 2, 
  SAMPLE_HOLD_32_CYCLES = 3, 
  SAMPLE_HOLD_64_CYCLES = 4, 
  SAMPLE_HOLD_96_CYCLES = 5, 
  SAMPLE_HOLD_123_CYCLES = 6, 
  SAMPLE_HOLD_192_CYCLES = 7, 
  SAMPLE_HOLD_256_CYCLES = 8, 
  SAMPLE_HOLD_384_CYCLES = 9, 
  SAMPLE_HOLD_512_CYCLES = 10, 
  SAMPLE_HOLD_768_CYCLES = 11, 
  SAMPLE_HOLD_1024_CYCLES = 12
};

enum sampcon_ssel_enum {

  SAMPCON_SOURCE_TACLK = 0, 
  SAMPCON_SOURCE_ACLK = 1, 
  SAMPCON_SOURCE_SMCLK = 2, 
  SAMPCON_SOURCE_INCLK = 3
};

enum sampcon_id_enum {

  SAMPCON_CLOCK_DIV_1 = 0, 
  SAMPCON_CLOCK_DIV_2 = 1, 
  SAMPCON_CLOCK_DIV_3 = 2, 
  SAMPCON_CLOCK_DIV_4 = 3
};
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/msp430usart.h"
#line 48
typedef enum __nesc_unnamed4277 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










#line 58
typedef struct __nesc_unnamed4278 {
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
typedef struct __nesc_unnamed4279 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute((packed))  msp430_utctl_t;










#line 79
typedef struct __nesc_unnamed4280 {
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
typedef struct __nesc_unnamed4281 {
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
typedef struct __nesc_unnamed4282 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




#line 124
typedef union __nesc_unnamed4283 {
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
typedef enum __nesc_unnamed4284 {

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
typedef struct __nesc_unnamed4285 {
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
typedef struct __nesc_unnamed4286 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




#line 211
typedef union __nesc_unnamed4287 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;
#line 248
#line 240
typedef struct __nesc_unnamed4288 {
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
typedef struct __nesc_unnamed4289 {
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
typedef struct __nesc_unnamed4290 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




#line 287
typedef union __nesc_unnamed4291 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;
typedef uint16_t RadioSenseToLedsC$Read$val_t;
typedef TMilli RadioSenseToLedsC$MilliTimer$precision_tag;
typedef uint16_t AdcP$Read$val_t;
typedef uint16_t AdcP$ReadNow$val_t;
typedef const msp430adc12_channel_config_t *AdcP$Config$adc_config_t;
typedef TMilli Msp430RefVoltGeneratorP$SwitchOffTimer$precision_tag;
typedef TMilli Msp430RefVoltGeneratorP$SwitchOnTimer$precision_tag;
typedef const msp430adc12_channel_config_t *Msp430RefVoltArbiterImplP$Config$adc_config_t;
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
enum /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$__nesc_unnamed4293 {
  Msp430Adc12ClientAutoRVGC$0$ID = 0U
};
typedef const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfSub$adc_config_t;
typedef const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfUp$adc_config_t;
enum /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC$0$__nesc_unnamed4294 {
  AdcReadClientC$0$CLIENT = 0U
};
typedef TMilli AdcStreamP$Alarm$precision_tag;
typedef uint32_t AdcStreamP$Alarm$size_type;
typedef const msp430adc12_channel_config_t *AdcStreamP$AdcConfigure$adc_config_t;
typedef uint16_t AdcStreamP$ReadStream$val_t;
enum /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Timer*/Msp430Timer32khzC$1$__nesc_unnamed4295 {
  Msp430Timer32khzC$1$ALARM_ID = 1U
};
typedef T32khz /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$frequency_tag;
typedef /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$frequency_tag /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$precision_tag;
typedef uint16_t /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$size_type;
typedef TMilli /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_precision_tag;
typedef uint32_t /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type;
typedef T32khz /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$from_precision_tag;
typedef uint16_t /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$from_size_type;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_precision_tag /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$precision_tag;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$size_type;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$from_precision_tag /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$precision_tag;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$from_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$size_type;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_precision_tag /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$precision_tag;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$size_type;
typedef uint16_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$val_t;
typedef /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$val_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$val_t;
typedef /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$val_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$val_t;
enum /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$__nesc_unnamed4296 {
  Msp430Adc12ClientAutoRVGC$1$ID = 1U
};
typedef const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfSub$adc_config_t;
typedef const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfUp$adc_config_t;
enum /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC$0$__nesc_unnamed4297 {
  AdcReadStreamClientC$0$RSCLIENT = 0U
};
typedef const msp430adc12_channel_config_t *Msp430InternalVoltageP$AdcConfigure$adc_config_t;
enum /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$__nesc_unnamed4298 {
  Msp430Adc12ClientAutoRVGC$2$ID = 2U
};
typedef const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfSub$adc_config_t;
typedef const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfUp$adc_config_t;
enum /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC$0$__nesc_unnamed4299 {
  AdcReadNowClientC$0$CLIENT = 1U
};
typedef T32khz CC2420ControlP$StartupTimer$precision_tag;
typedef uint32_t CC2420ControlP$StartupTimer$size_type;
typedef uint16_t CC2420ControlP$ReadRssi$val_t;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC$2$__nesc_unnamed4300 {
  Msp430Timer32khzC$2$ALARM_ID = 2U
};
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$frequency_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC$1$to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform*/TransformCounterC$1$to_size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC$1$from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC$1$from_size_type;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC$1$upper_count_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC$1$from_precision_tag /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC$1$from_size_type /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$size_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC$1$to_precision_tag /*Counter32khz32C.Transform*/TransformCounterC$1$Counter$precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC$1$to_size_type /*Counter32khz32C.Transform*/TransformCounterC$1$Counter$size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC$0$__nesc_unnamed4301 {
  CC2420SpiC$0$CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$__nesc_unnamed4302 {
  Msp430Spi0C$0$CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$__nesc_unnamed4303 {
  Msp430Usart0C$0$CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$__nesc_unnamed4304 {
  CC2420SpiC$1$CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC$2$__nesc_unnamed4305 {
  CC2420SpiC$2$CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP$PacketTimeStamp$precision_tag;
typedef uint32_t CC2420TransmitP$PacketTimeStamp$size_type;
typedef T32khz CC2420TransmitP$BackoffTimer$precision_tag;
typedef uint32_t CC2420TransmitP$BackoffTimer$size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC$3$__nesc_unnamed4306 {
  CC2420SpiC$3$CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP$PacketTimeStamp$precision_tag;
typedef uint32_t CC2420ReceiveP$PacketTimeStamp$size_type;
typedef T32khz CC2420PacketP$PacketTimeStamp32khz$precision_tag;
typedef uint32_t CC2420PacketP$PacketTimeStamp32khz$size_type;
typedef T32khz CC2420PacketP$LocalTime32khz$precision_tag;
typedef TMilli CC2420PacketP$LocalTimeMilli$precision_tag;
typedef TMilli CC2420PacketP$PacketTimeStampMilli$precision_tag;
typedef uint32_t CC2420PacketP$PacketTimeStampMilli$size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$LocalTime$precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC$4$__nesc_unnamed4307 {
  CC2420SpiC$4$CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC$SeedInit$parameter;
enum AMQueueP$__nesc_unnamed4308 {
  AMQueueP$NUM_CLIENTS = 1U
};
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
uint8_t arg_0x10e7ed780);
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$clear(void );


static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setClockSource(uint16_t clockSource);
#line 43
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$disableEvents(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setMode(int mode);





static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setInputDivider(uint16_t inputDivider);
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX0$fired(void );
#line 28
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Overflow$fired(void );
#line 28
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX1$fired(void );
#line 28
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$default$fired(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x10e7ed780);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$isOverflowPending(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$getControl(void );



static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$setControl(msp430_compare_control_t control);
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Event$fired(void );
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$setEvent(uint16_t time);
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Timer$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$getControl(void );



static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$setControl(msp430_compare_control_t control);
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Event$fired(void );
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$setEvent(uint16_t time);
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
#line 57
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$clearOverflow(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$setControlAsCapture(uint8_t cm);
#line 31
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$getControl(void );
#line 46
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$disableEvents(void );
#line 33
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$clearPendingInterrupt(void );
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
#line 46
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$disableEvents(void );
#line 33
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$clearPendingInterrupt(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Event$fired(void );
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEventFromNow(uint16_t delta);
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$getEvent(void );
#line 75
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$default$captured(uint16_t time);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$getControl(void );
#line 46
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$enableEvents(void );
#line 36
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$disableEvents(void );
#line 33
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$clearPendingInterrupt(void );
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Event$fired(void );
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$setEventFromNow(uint16_t delta);
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
uint8_t arg_0x10e70e650);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x10e70e650);
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
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RadioSenseToLedsC$Boot$booted(void );
# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void RadioSenseToLedsC$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void RadioSenseToLedsC$Read$readDone(error_t result, RadioSenseToLedsC$Read$val_t val);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void RadioSenseToLedsC$RadioControl$startDone(error_t error);
#line 117
static void RadioSenseToLedsC$RadioControl$stopDone(error_t error);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



RadioSenseToLedsC$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void RadioSenseToLedsC$MilliTimer$fired(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0Off(void );










static void LedsP$Leds$led1On(void );










static void LedsP$Leds$led1Toggle(void );
#line 66
static void LedsP$Leds$led1Off(void );
#line 83
static void LedsP$Leds$led2Off(void );
#line 45
static void LedsP$Leds$led0On(void );
#line 78
static void LedsP$Leds$led2On(void );
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$get(void );
#line 52
static uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$getRaw(void );






static bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$get(void );
#line 52
static uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$getRaw(void );
#line 64
static void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$makeInput(void );
#line 59
static bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$get(void );
#line 52
static uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$getRaw(void );
#line 85
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
#line 64
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$makeInput(void );
#line 59
static bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$get(void );
#line 85
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectIOFunc(void );
#line 52
static uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$getRaw(void );
#line 78
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectModuleFunc(void );
#line 71
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$makeOutput(void );
#line 34
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$set(void );




static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$clr(void );
#line 71
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$makeOutput(void );
#line 34
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$set(void );




static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$clr(void );
#line 71
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$makeOutput(void );
#line 34
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$set(void );




static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$clr(void );
#line 71
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$makeOutput(void );
#line 34
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$set(void );




static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$clr(void );




static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$toggle(void );
#line 71
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$makeOutput(void );
#line 34
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$set(void );




static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$clr(void );
#line 71
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$makeOutput(void );
#line 34
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$set(void );




static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$clr(void );
#line 64
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$makeInput(void );
#line 85
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$selectModuleFunc(void );
#line 64
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$makeInput(void );
#line 85
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$selectModuleFunc(void );
#line 64
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$makeInput(void );
#line 85
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$selectModuleFunc(void );
#line 64
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$makeInput(void );
#line 85
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$selectModuleFunc(void );
#line 64
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$makeInput(void );
#line 85
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$selectModuleFunc(void );
#line 64
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$makeInput(void );
#line 85
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$selectModuleFunc(void );
#line 64
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$makeInput(void );
#line 85
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$selectModuleFunc(void );
#line 64
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$makeInput(void );
#line 85
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$selectModuleFunc(void );
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$makeOutput(void );
#line 29
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$set(void );
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$clr(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$toggle(void );



static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$makeOutput(void );
#line 29
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$set(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$clr(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$makeOutput(void );
#line 29
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$set(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$clr(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void AdcP$SubResourceReadNow$granted(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec11298);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
static error_t AdcP$Read$read(
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec191c8);
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void AdcP$Read$default$readDone(
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec191c8, 
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, AdcP$Read$val_t val);
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
static void AdcP$ReadNow$default$readDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec16020, 
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t result, AdcP$ReadNow$val_t val);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void AdcP$ResourceReadNow$default$granted(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec15bf0);
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static AdcP$Config$adc_config_t AdcP$Config$default$getConfiguration(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec10748);
# 189 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP$SingleChannel$default$getData(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec2e910);
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP$SingleChannel$default$configureSingle(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec2e910, 
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 227
static uint16_t * AdcP$SingleChannel$multipleDataReady(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec2e910, 
# 227 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t AdcP$SingleChannel$singleDataReady(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec2e910, 
# 206 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t AdcP$ResourceRead$default$release(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec12020);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t AdcP$ResourceRead$default$request(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec12020);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void AdcP$ResourceRead$granted(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec12020);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void AdcP$readDone$runTask(void );
# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static void Msp430Adc12ImplP$MultiChannel$default$dataReady(
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec940c8, 
# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
uint16_t *buffer, uint16_t numSamples);
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static void Msp430Adc12ImplP$HplAdc12$conversionDone(uint16_t iv);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP$CompareA1$fired(void );
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP$Overflow$default$memOverflow(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec92020);
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP$Overflow$default$conversionTimeOverflow(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec92020);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t Msp430Adc12ImplP$Init$init(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430Adc12ImplP$TimerA$overflow(void );
# 189 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12ImplP$SingleChannel$getData(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec96ac0);
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12ImplP$SingleChannel$configureSingle(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec96ac0, 
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 227
static uint16_t * Msp430Adc12ImplP$SingleChannel$default$multipleDataReady(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec96ac0, 
# 227 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 138
static error_t Msp430Adc12ImplP$SingleChannel$configureMultiple(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec96ac0, 
# 138 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
#line 206
static error_t Msp430Adc12ImplP$SingleChannel$default$singleDataReady(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec96ac0, 
# 206 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP$CompareA0$fired(void );
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t HplAdc12P$HplAdc12$getCtl0(void );
#line 82
static adc12memctl_t HplAdc12P$HplAdc12$getMCtl(uint8_t idx);
#line 106
static void HplAdc12P$HplAdc12$resetIFGs(void );
#line 118
static bool HplAdc12P$HplAdc12$isBusy(void );
#line 75
static void HplAdc12P$HplAdc12$setMCtl(uint8_t idx, adc12memctl_t memControl);
#line 128
static void HplAdc12P$HplAdc12$startConversion(void );
#line 51
static void HplAdc12P$HplAdc12$setCtl0(adc12ctl0_t control0);
#line 89
static uint16_t HplAdc12P$HplAdc12$getMem(uint8_t idx);





static void HplAdc12P$HplAdc12$setIEFlags(uint16_t mask);
#line 123
static void HplAdc12P$HplAdc12$stopConversion(void );
#line 57
static void HplAdc12P$HplAdc12$setCtl1(adc12ctl1_t control1);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void );
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void );








static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void );
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x10eda72f0);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x10eda6868);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x10eda6868);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x10eda8158);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x10eda8158);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$default$granted(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x10eda8158);
# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$userId(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static void Msp430RefVoltGeneratorP$HplAdc12$conversionDone(uint16_t iv);
# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP$SwitchOffTimer$fired(void );
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltGeneratorP$RefVolt_2_5V$start(void );
#line 83
static error_t Msp430RefVoltGeneratorP$RefVolt_1_5V$start(void );
#line 109
static error_t Msp430RefVoltGeneratorP$RefVolt_1_5V$stop(void );
# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP$SwitchOnTimer$fired(void );
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static Msp430RefVoltArbiterImplP$Config$adc_config_t Msp430RefVoltArbiterImplP$Config$default$getConfiguration(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10ee63e08);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void Msp430RefVoltArbiterImplP$RefVolt_2_5V$startDone(error_t error);
#line 117
static void Msp430RefVoltArbiterImplP$RefVolt_2_5V$stopDone(error_t error);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP$AdcResource$default$release(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10ee2c108);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP$AdcResource$default$request(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10ee2c108);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP$AdcResource$granted(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10ee2c108);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP$ClientResource$release(
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10edfcde0);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP$ClientResource$request(
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10edfcde0);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP$ClientResource$default$granted(
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10edfcde0);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void Msp430RefVoltArbiterImplP$switchOff$runTask(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void Msp430RefVoltArbiterImplP$RefVolt_1_5V$startDone(error_t error);
#line 117
static void Msp430RefVoltArbiterImplP$RefVolt_1_5V$stopDone(error_t error);
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
uint8_t arg_0x10efce5d8);
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x10efce5d8, 
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x10efce5d8, 
# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x10efce5d8);
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfSub$adc_config_t /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfSub$getConfiguration(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void AdcStreamP$bufferDone$runTask(void );
#line 64
static void AdcStreamP$readStreamDone$runTask(void );
#line 64
static void AdcStreamP$readStreamFail$runTask(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void AdcStreamP$Alarm$fired(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t AdcStreamP$Init$init(void );
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static AdcStreamP$AdcConfigure$adc_config_t AdcStreamP$AdcConfigure$default$getConfiguration(
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06ac00);
# 189 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP$SingleChannel$default$getData(
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06b3d0);
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP$SingleChannel$default$configureSingle(
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06b3d0, 
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 227
static uint16_t * AdcStreamP$SingleChannel$multipleDataReady(
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06b3d0, 
# 227 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 138
static error_t AdcStreamP$SingleChannel$default$configureMultiple(
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06b3d0, 
# 138 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
#line 206
static error_t AdcStreamP$SingleChannel$singleDataReady(
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06b3d0, 
# 206 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
static error_t AdcStreamP$ReadStream$read(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06f368, 
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
uint32_t usPeriod);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$overflow(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$startAt(/*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$size_type t0, /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$size_type dt);





static /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$getNow(void );
#line 92
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$size_type dt);
#line 67
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$fired(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$overflow(void );
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$bufferDone(
# 26 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10f0bf720, 
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
/*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$val_t * buf, 



uint16_t count);
#line 102
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$readDone(
# 26 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10f0bf720, 
# 102 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
#line 89
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$default$bufferDone(
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10f0c3530, 
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
/*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$val_t * buf, 



uint16_t count);
#line 102
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$default$readDone(
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10f0c3530, 
# 102 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Resource$default$release(
# 27 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10f0bb5c8);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Resource$granted(
# 27 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10f0bb5c8);
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfSub$adc_config_t /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfSub$getConfiguration(void );
#line 58
static Msp430InternalVoltageP$AdcConfigure$adc_config_t Msp430InternalVoltageP$AdcConfigure$getConfiguration(void );
#line 58
static /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfSub$adc_config_t /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfSub$getConfiguration(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420ActiveMessageP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error);
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$RadioBackoff$default$requestCca(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f18d1a0, 
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f18d1a0, 
# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f18d1a0, 
# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f18e630, 
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$SubBackoff$requestCca(message_t * msg);
#line 81
static void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t * msg);






static void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t * msg);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t CC2420ActiveMessageP$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


CC2420ActiveMessageP$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void );
#line 83
static void CC2420ActiveMessageP$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t CC2420ActiveMessageP$AMSend$send(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f194aa8, 
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Snoop$default$receive(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f1917c0, 
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



CC2420ActiveMessageP$Receive$default$receive(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f193c18, 
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t CC2420ActiveMessageP$AMPacket$address(void );









static am_addr_t CC2420ActiveMessageP$AMPacket$destination(
#line 63
message_t * amsg);
#line 92
static void CC2420ActiveMessageP$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t CC2420ActiveMessageP$AMPacket$type(
#line 132
message_t * amsg);
#line 151
static void CC2420ActiveMessageP$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool CC2420ActiveMessageP$AMPacket$isForMe(
#line 122
message_t * amsg);
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP$SplitControl$start(void );
# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t * msg);






static void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t * msg);
# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP$CC2420Transmit$sendDone(message_t * p_msg, error_t error);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420CsmaP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420CsmaP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t CC2420CsmaP$Send$maxPayloadLength(void );
# 76 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP$CC2420Power$startOscillatorDone(void );
#line 56
static void CC2420CsmaP$CC2420Power$startVRegDone(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420CsmaP$Resource$granted(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420CsmaP$sendDone_task$runTask(void );
#line 64
static void CC2420CsmaP$stopDone_task$runTask(void );
#line 64
static void CC2420CsmaP$startDone_task$runTask(void );
# 86 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void );
#line 105
static bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void );
#line 52
static error_t CC2420ControlP$CC2420Config$sync(void );
#line 70
static uint16_t CC2420ControlP$CC2420Config$getPanAddr(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420ControlP$StartupTimer$fired(void );
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void CC2420ControlP$ReadRssi$default$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP$syncDone$runTask(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ControlP$Init$init(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP$SpiResource$granted(void );
#line 92
static void CC2420ControlP$SyncResource$granted(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP$CC2420Power$startOscillator(void );
#line 90
static error_t CC2420ControlP$CC2420Power$rxOn(void );
#line 51
static error_t CC2420ControlP$CC2420Power$startVReg(void );
#line 63
static error_t CC2420ControlP$CC2420Power$stopVReg(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP$sync$runTask(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$Resource$release(void );
#line 78
static error_t CC2420ControlP$Resource$request(void );
# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP$InterruptCCA$fired(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP$RssiResource$granted(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Compare$fired(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Timer$overflow(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$stop(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Init$init(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$overflow(void );
#line 53
static /*Counter32khz32C.Transform*/TransformCounterC$1$Counter$size_type /*Counter32khz32C.Transform*/TransformCounterC$1$Counter$get(void );
# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$getNow(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$size_type dt);
#line 55
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$fired(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$overflow(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$GeneralIO$makeInput(void );
#line 32
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$GeneralIO$get(void );


static void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$makeOutput(void );
#line 29
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$set(void );
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$clr(void );

static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC$5$GeneralIO$get(void );
#line 32
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$6$GeneralIO$get(void );


static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$makeOutput(void );
#line 29
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$set(void );
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$clr(void );


static void /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$GeneralIO$makeInput(void );
#line 32
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$GeneralIO$get(void );


static void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$makeOutput(void );
#line 29
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$set(void );
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$clr(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$captured(uint16_t time);
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureFallingEdge(void );
#line 55
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$disable(void );
#line 42
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureRisingEdge(void );
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP$Port14$clear(void );
#line 36
static void HplMsp430InterruptP$Port14$disable(void );
#line 56
static void HplMsp430InterruptP$Port14$edge(bool low_to_high);
#line 31
static void HplMsp430InterruptP$Port14$enable(void );









static void HplMsp430InterruptP$Port26$clear(void );
#line 61
static void HplMsp430InterruptP$Port26$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port17$clear(void );
#line 61
static void HplMsp430InterruptP$Port17$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port21$clear(void );
#line 61
static void HplMsp430InterruptP$Port21$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port12$clear(void );
#line 61
static void HplMsp430InterruptP$Port12$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port24$clear(void );
#line 61
static void HplMsp430InterruptP$Port24$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port15$clear(void );
#line 61
static void HplMsp430InterruptP$Port15$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port27$clear(void );
#line 61
static void HplMsp430InterruptP$Port27$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port10$clear(void );
#line 36
static void HplMsp430InterruptP$Port10$disable(void );
#line 56
static void HplMsp430InterruptP$Port10$edge(bool low_to_high);
#line 31
static void HplMsp430InterruptP$Port10$enable(void );









static void HplMsp430InterruptP$Port22$clear(void );
#line 61
static void HplMsp430InterruptP$Port22$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port13$clear(void );
#line 61
static void HplMsp430InterruptP$Port13$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port25$clear(void );
#line 61
static void HplMsp430InterruptP$Port25$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port16$clear(void );
#line 61
static void HplMsp430InterruptP$Port16$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port20$clear(void );
#line 61
static void HplMsp430InterruptP$Port20$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port11$clear(void );
#line 61
static void HplMsp430InterruptP$Port11$default$fired(void );
#line 41
static void HplMsp430InterruptP$Port23$clear(void );
#line 61
static void HplMsp430InterruptP$Port23$default$fired(void );
#line 61
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$fired(void );
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$disable(void );
#line 42
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$enableRisingEdge(void );
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$fired(void );
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$disable(void );
#line 43
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$enableFallingEdge(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP$SpiPacket$sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP$Fifo$continueRead(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f509ca8, 
# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP$Fifo$default$writeDone(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f509ca8, 
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP$Fifo$write(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f509ca8, 
# 82 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP$Fifo$beginRead(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f509ca8, 
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP$Fifo$default$readDone(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f509ca8, 
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP$ChipSpiResource$abortRelease(void );







static error_t CC2420SpiP$ChipSpiResource$attemptRelease(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420SpiP$SpiResource$granted(void );
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP$Ram$write(
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x10f508e68, 
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP$Reg$read(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f507b98, 
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP$Reg$write(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f507b98, 
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$release(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f50aa68);
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$immediateRequest(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f50aa68);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$request(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f50aa68);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420SpiP$Resource$default$granted(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f50aa68);
# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool CC2420SpiP$Resource$isOwner(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f50aa68);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP$grant$runTask(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP$Strobe$strobe(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f5058f0);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t StateImplP$Init$init(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
static void StateImplP$State$toIdle(
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x10f593020);
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
static bool StateImplP$State$isState(
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x10f593020, 
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP$State$isIdle(
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x10f593020);
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
static error_t StateImplP$State$requestState(
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x10f593020, 
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP$State$forceState(
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x10f593020, 
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$unconfigure(
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f6282f0);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$configure(
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f6282f0);
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$send(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f626650, 
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
#line 71
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$default$sendDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f626650, 
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$default$getConfig(
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f6246a8);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiByte$write(uint8_t tx);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$release(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f625430);
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$immediateRequest(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f625430);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f625430);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$granted(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f625430);
# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$isOwner(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f625430);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$release(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f629120);
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$immediateRequest(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f629120);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$request(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f629120);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$default$granted(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f629120);
# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$isOwner(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f629120);
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
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$rxDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x10f7530c8, 
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$txDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x10f7530c8);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawI2CInterrupts$fired(void );
#line 39
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$default$fired(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x10f752020);
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$txDone(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init(void );
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );








static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f7777e8);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f7777e8);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f7749b8);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f7749b8);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
#line 73
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$immediateRequested(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f778528);
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$immediateRequest(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f778528);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f778528);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$default$granted(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f778528);
# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$isOwner(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f778528);
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$inUse(void );







static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$userId(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
# 7 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430I2C0P$HplI2C$clearModeI2C(void );
#line 6
static bool HplMsp430I2C0P$HplI2C$isI2C(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );




static am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime);
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP$BackoffTimer$fired(void );
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t * message);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca);
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP$ChipSpiResource$releasing(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420TransmitP$Init$init(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420TransmitP$SpiResource$granted(void );
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP$StdControl$start(void );









static error_t CC2420TransmitP$StdControl$stop(void );
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP$TXFIFO$writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP$TXFIFO$readDone(uint8_t * data, uint8_t length, error_t error);
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP$CC2420Config$syncDone(error_t error);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP$receiveDone_task$runTask(void );
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP$CC2420Receive$sfd_dropped(void );
#line 49
static void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP$Init$init(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ReceiveP$SpiResource$granted(void );
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP$RXFIFO$writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP$RXFIFO$readDone(uint8_t * data, uint8_t length, error_t error);
# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP$InterruptFIFOP$fired(void );
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP$StdControl$start(void );









static error_t CC2420ReceiveP$StdControl$stop(void );
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP$PacketTimeStamp32khz$clear(
#line 55
message_t * msg);
#line 67
static void CC2420PacketP$PacketTimeStamp32khz$set(
#line 62
message_t * msg, 




CC2420PacketP$PacketTimeStamp32khz$size_type value);
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420PacketP$CC2420PacketBody$getMetadata(message_t * msg);
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP$PacketTimeSyncOffset$get(
#line 42
message_t * msg);
#line 39
static bool CC2420PacketP$PacketTimeSyncOffset$isSet(
#line 35
message_t * msg);
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 35
static uint32_t RandomMlcgC$Random$rand32(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void UniqueSendP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
#line 64
static error_t UniqueSendP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

UniqueSendP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueSendP$Init$init(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueReceiveP$Init$init(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$DuplicateReceive$default$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420TinyosNetworkP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$NonTinyosReceive$default$receive(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x10fb8ed08, 
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x10fbe8c70, 
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x10fbe9990, 
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x10fbe9990, 
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
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

enum Msp430ClockP$__nesc_unnamed4309 {

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
uint8_t arg_0x10e7ed780);
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$overflow(void );
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setMode(int mode);









static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$clear(void );









static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$disableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setClockSource(uint16_t clockSource);




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setInputDivider(uint16_t inputDivider);




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX0$fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX1$fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Overflow$fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$default$fired(uint8_t n);
# 28 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$fired(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x10e7ed780);
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

static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$CC2int(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$getControl(void );
#line 89
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$setControl(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t x);
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$setEvent(uint16_t x);
#line 169
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$default$captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$fired(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$CC2int(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$getControl(void );
#line 89
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$setControl(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t x);
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$setEvent(uint16_t x);
#line 169
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$default$captured(uint16_t n);







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

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$int2CC(uint16_t x)  ;
#line 61
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$captureControl(uint8_t l_cm);
#line 74
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$clearPendingInterrupt(void );
#line 99
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$setControlAsCapture(uint8_t cm);
#line 119
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$disableEvents(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$getEvent(void );
#line 164
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$clearOverflow(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Event$fired(void );
#line 181
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$default$fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$get(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t;


static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$int2CC(uint16_t x)  ;
#line 74
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$clearPendingInterrupt(void );
#line 119
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$disableEvents(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEventFromNow(uint16_t x);
#line 169
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$default$captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$overflow(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$captured(uint16_t time);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$fired(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Timer$get(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$CC2int(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$compareControl(void );
#line 74
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$setControlAsCompare(void );
#line 119
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$disableEvents(void );
#line 139
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$setEventFromNow(uint16_t x);
#line 169
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Event$fired(void );







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$default$captured(uint16_t n);







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
uint8_t arg_0x10e70e650);
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP$McuSleep$sleep(void );
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4310 {

  SchedulerBasicP$NUM_TASKS = 19U, 
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
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t RadioSenseToLedsC$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static 
#line 112
void * 


RadioSenseToLedsC$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
static error_t RadioSenseToLedsC$Read$read(void );
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t RadioSenseToLedsC$RadioControl$start(void );
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void RadioSenseToLedsC$MilliTimer$startPeriodic(uint32_t dt);
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void RadioSenseToLedsC$Leds$led0Off(void );










static void RadioSenseToLedsC$Leds$led1On(void );










static void RadioSenseToLedsC$Leds$led1Toggle(void );
#line 66
static void RadioSenseToLedsC$Leds$led1Off(void );
#line 83
static void RadioSenseToLedsC$Leds$led2Off(void );
#line 45
static void RadioSenseToLedsC$Leds$led0On(void );
#line 78
static void RadioSenseToLedsC$Leds$led2On(void );
# 60 "RadioSenseToLedsC.nc"
message_t RadioSenseToLedsC$packet;
bool RadioSenseToLedsC$locked = FALSE;

static inline void RadioSenseToLedsC$Boot$booted(void );



static inline void RadioSenseToLedsC$RadioControl$startDone(error_t err);




static inline void RadioSenseToLedsC$RadioControl$stopDone(error_t err);

static inline void RadioSenseToLedsC$MilliTimer$fired(void );



static void RadioSenseToLedsC$Read$readDone(error_t result, uint16_t data);
#line 97
static inline message_t *RadioSenseToLedsC$Receive$receive(message_t *bufPtr, 
void *payload, uint8_t len);
#line 120
static inline void RadioSenseToLedsC$AMSend$sendDone(message_t *bufPtr, error_t error);
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$makeOutput(void );
#line 29
static void LedsP$Led0$set(void );
static void LedsP$Led0$clr(void );
static void LedsP$Led1$toggle(void );



static void LedsP$Led1$makeOutput(void );
#line 29
static void LedsP$Led1$set(void );
static void LedsP$Led1$clr(void );




static void LedsP$Led2$makeOutput(void );
#line 29
static void LedsP$Led2$set(void );
static void LedsP$Led2$clr(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 63
static inline void LedsP$Leds$led0On(void );




static inline void LedsP$Leds$led0Off(void );









static inline void LedsP$Leds$led1On(void );




static inline void LedsP$Leds$led1Off(void );




static inline void LedsP$Leds$led1Toggle(void );




static inline void LedsP$Leds$led2On(void );




static inline void LedsP$Leds$led2Off(void );
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$get(void );
#line 48
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$get(void );
#line 48
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$get(void );
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$makeInput(void );



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
#line 48
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$get(void );
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$makeInput(void );



static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectIOFunc(void );
#line 45
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$set(void );
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$clr(void );





static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$makeOutput(void );
#line 45
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$set(void );
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$clr(void );





static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$set(void );
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$clr(void );





static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$set(void );
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$clr(void );





static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$set(void );
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$clr(void );
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$toggle(void );




static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$set(void );
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$clr(void );





static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$makeOutput(void );
#line 50
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$makeInput(void );



static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$selectIOFunc(void );
#line 50
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$makeInput(void );



static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$selectIOFunc(void );
#line 50
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$makeInput(void );



static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$selectIOFunc(void );
#line 50
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$makeInput(void );



static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$selectIOFunc(void );
#line 50
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$makeInput(void );



static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$selectIOFunc(void );
#line 50
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$makeInput(void );



static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$selectIOFunc(void );
#line 50
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$makeInput(void );



static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$selectIOFunc(void );
#line 50
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$makeInput(void );



static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$selectIOFunc(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$makeOutput(void );
#line 34
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$set(void );




static void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$HplGeneralIO$clr(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$set(void );
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$clr(void );




static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC$0$GeneralIO$makeOutput(void );
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$toggle(void );
#line 71
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$makeOutput(void );
#line 34
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$set(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$clr(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$set(void );
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$clr(void );
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$toggle(void );



static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$makeOutput(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$makeOutput(void );
#line 34
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$set(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$clr(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$set(void );
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$clr(void );




static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$makeOutput(void );
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void AdcP$Read$readDone(
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec191c8, 
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, AdcP$Read$val_t val);
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
static void AdcP$ReadNow$readDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec16020, 
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t result, AdcP$ReadNow$val_t val);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void AdcP$ResourceReadNow$granted(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec15bf0);
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static AdcP$Config$adc_config_t AdcP$Config$getConfiguration(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec10748);
# 189 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP$SingleChannel$getData(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec2e910);
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP$SingleChannel$configureSingle(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec2e910, 
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t AdcP$ResourceRead$release(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec12020);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t AdcP$ResourceRead$request(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10ec12020);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t AdcP$readDone$postTask(void );
# 136 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
enum AdcP$__nesc_unnamed4311 {
#line 136
  AdcP$readDone = 0U
};
#line 136
typedef int AdcP$__nesc_sillytask_readDone[AdcP$readDone];
#line 54
enum AdcP$__nesc_unnamed4312 {
  AdcP$STATE_READ, 
  AdcP$STATE_READNOW, 
  AdcP$STATE_READNOW_INVALID_CONFIG
};


uint8_t AdcP$state;
uint8_t AdcP$owner;
uint16_t AdcP$value;

static error_t AdcP$configure(uint8_t client);









static inline error_t AdcP$Read$read(uint8_t client);




static void AdcP$ResourceRead$granted(uint8_t client);
#line 98
static void AdcP$SubResourceReadNow$granted(uint8_t nowClient);
#line 136
static inline void AdcP$readDone$runTask(void );





static error_t AdcP$SingleChannel$singleDataReady(uint8_t client, uint16_t data);
#line 161
static inline uint16_t *AdcP$SingleChannel$multipleDataReady(uint8_t client, 
uint16_t *buf, uint16_t numSamples);





static inline error_t AdcP$ResourceRead$default$request(uint8_t client);

static inline error_t AdcP$ResourceRead$default$release(uint8_t client);

static inline void AdcP$Read$default$readDone(uint8_t client, error_t result, uint16_t val);




static inline void AdcP$ResourceReadNow$default$granted(uint8_t nowClient);
static inline void AdcP$ReadNow$default$readDone(uint8_t client, error_t result, uint16_t val);

static inline error_t AdcP$SingleChannel$default$getData(uint8_t client);




const msp430adc12_channel_config_t AdcP$defaultConfig = { INPUT_CHANNEL_NONE, 0, 0, 0, 0, 0, 0, 0 };
static inline const msp430adc12_channel_config_t *
AdcP$Config$default$getConfiguration(uint8_t client);



static inline error_t AdcP$SingleChannel$default$configureSingle(uint8_t client, 
const msp430adc12_channel_config_t *config);
# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static void Msp430Adc12ImplP$MultiChannel$dataReady(
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec940c8, 
# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
uint16_t *buffer, uint16_t numSamples);
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t Msp430Adc12ImplP$HplAdc12$getCtl0(void );
#line 82
static adc12memctl_t Msp430Adc12ImplP$HplAdc12$getMCtl(uint8_t idx);
#line 106
static void Msp430Adc12ImplP$HplAdc12$resetIFGs(void );
#line 75
static void Msp430Adc12ImplP$HplAdc12$setMCtl(uint8_t idx, adc12memctl_t memControl);
#line 128
static void Msp430Adc12ImplP$HplAdc12$startConversion(void );
#line 51
static void Msp430Adc12ImplP$HplAdc12$setCtl0(adc12ctl0_t control0);
#line 89
static uint16_t Msp430Adc12ImplP$HplAdc12$getMem(uint8_t idx);





static void Msp430Adc12ImplP$HplAdc12$setIEFlags(uint16_t mask);
#line 123
static void Msp430Adc12ImplP$HplAdc12$stopConversion(void );
#line 57
static void Msp430Adc12ImplP$HplAdc12$setCtl1(adc12ctl1_t control1);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP$Port64$makeInput(void );
#line 85
static void Msp430Adc12ImplP$Port64$selectIOFunc(void );
#line 78
static void Msp430Adc12ImplP$Port64$selectModuleFunc(void );
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP$CompareA1$setEvent(uint16_t time);
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430Adc12ImplP$ControlA0$setControl(msp430_compare_control_t control);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP$Port62$makeInput(void );
#line 85
static void Msp430Adc12ImplP$Port62$selectIOFunc(void );
#line 78
static void Msp430Adc12ImplP$Port62$selectModuleFunc(void );
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP$Overflow$memOverflow(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec92020);
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP$Overflow$conversionTimeOverflow(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec92020);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP$Port67$makeInput(void );
#line 85
static void Msp430Adc12ImplP$Port67$selectIOFunc(void );
#line 78
static void Msp430Adc12ImplP$Port67$selectModuleFunc(void );
#line 64
static void Msp430Adc12ImplP$Port60$makeInput(void );
#line 85
static void Msp430Adc12ImplP$Port60$selectIOFunc(void );
#line 78
static void Msp430Adc12ImplP$Port60$selectModuleFunc(void );
#line 64
static void Msp430Adc12ImplP$Port65$makeInput(void );
#line 85
static void Msp430Adc12ImplP$Port65$selectIOFunc(void );
#line 78
static void Msp430Adc12ImplP$Port65$selectModuleFunc(void );
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430Adc12ImplP$TimerA$clear(void );


static void Msp430Adc12ImplP$TimerA$setClockSource(uint16_t clockSource);
#line 43
static void Msp430Adc12ImplP$TimerA$disableEvents(void );
#line 39
static void Msp430Adc12ImplP$TimerA$setMode(int mode);





static void Msp430Adc12ImplP$TimerA$setInputDivider(uint16_t inputDivider);
# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static uint8_t Msp430Adc12ImplP$ADCArbiterInfo$userId(void );
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430Adc12ImplP$ControlA1$setControl(msp430_compare_control_t control);
# 227 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static uint16_t * Msp430Adc12ImplP$SingleChannel$multipleDataReady(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec96ac0, 
# 227 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t Msp430Adc12ImplP$SingleChannel$singleDataReady(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x10ec96ac0, 
# 206 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP$Port63$makeInput(void );
#line 85
static void Msp430Adc12ImplP$Port63$selectIOFunc(void );
#line 78
static void Msp430Adc12ImplP$Port63$selectModuleFunc(void );
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP$CompareA0$setEvent(uint16_t time);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP$Port61$makeInput(void );
#line 85
static void Msp430Adc12ImplP$Port61$selectIOFunc(void );
#line 78
static void Msp430Adc12ImplP$Port61$selectModuleFunc(void );
#line 64
static void Msp430Adc12ImplP$Port66$makeInput(void );
#line 85
static void Msp430Adc12ImplP$Port66$selectIOFunc(void );
#line 78
static void Msp430Adc12ImplP$Port66$selectModuleFunc(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
enum Msp430Adc12ImplP$__nesc_unnamed4313 {
  Msp430Adc12ImplP$SINGLE_DATA = 1, 
  Msp430Adc12ImplP$SINGLE_DATA_REPEAT = 2, 
  Msp430Adc12ImplP$MULTIPLE_DATA = 4, 
  Msp430Adc12ImplP$MULTIPLE_DATA_REPEAT = 8, 
  Msp430Adc12ImplP$MULTI_CHANNEL = 16, 
  Msp430Adc12ImplP$CONVERSION_MODE_MASK = 0x1F, 

  Msp430Adc12ImplP$ADC_BUSY = 32, 
  Msp430Adc12ImplP$USE_TIMERA = 64, 
  Msp430Adc12ImplP$ADC_OVERFLOW = 128
};

uint8_t Msp430Adc12ImplP$state;

uint16_t Msp430Adc12ImplP$resultBufferLength;
uint16_t * Msp430Adc12ImplP$resultBufferStart;
uint16_t Msp430Adc12ImplP$resultBufferIndex;
uint8_t Msp430Adc12ImplP$numChannels;
uint8_t Msp430Adc12ImplP$clientID;

static inline error_t Msp430Adc12ImplP$Init$init(void );










static inline void Msp430Adc12ImplP$prepareTimerA(uint16_t interval, uint16_t csSAMPCON, uint16_t cdSAMPCON);
#line 121
static inline void Msp430Adc12ImplP$startTimerA(void );
#line 142
static inline void Msp430Adc12ImplP$configureAdcPin(uint8_t inch);
#line 159
static void Msp430Adc12ImplP$resetAdcPin(uint8_t inch);
#line 176
static error_t Msp430Adc12ImplP$SingleChannel$configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config);
#line 271
static inline error_t Msp430Adc12ImplP$SingleChannel$configureMultiple(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies);
#line 394
static error_t Msp430Adc12ImplP$SingleChannel$getData(uint8_t id);
#line 503
static void Msp430Adc12ImplP$stopConversion(void );
#line 540
static inline void Msp430Adc12ImplP$TimerA$overflow(void );
static inline void Msp430Adc12ImplP$CompareA0$fired(void );
static inline void Msp430Adc12ImplP$CompareA1$fired(void );

static inline void Msp430Adc12ImplP$HplAdc12$conversionDone(uint16_t iv);
#line 640
static inline error_t Msp430Adc12ImplP$SingleChannel$default$singleDataReady(uint8_t id, uint16_t data);




static inline uint16_t *Msp430Adc12ImplP$SingleChannel$default$multipleDataReady(uint8_t id, 
uint16_t *buf, uint16_t numSamples);




static inline void Msp430Adc12ImplP$MultiChannel$default$dataReady(uint8_t id, uint16_t *buffer, uint16_t numSamples);

static inline void Msp430Adc12ImplP$Overflow$default$memOverflow(uint8_t id);
static inline void Msp430Adc12ImplP$Overflow$default$conversionTimeOverflow(uint8_t id);
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static void HplAdc12P$HplAdc12$conversionDone(uint16_t iv);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static volatile uint16_t HplAdc12P$ADC12CTL0 __asm ("0x01A0");
static volatile uint16_t HplAdc12P$ADC12CTL1 __asm ("0x01A2");
static volatile uint16_t HplAdc12P$ADC12IFG __asm ("0x01A4");
static volatile uint16_t HplAdc12P$ADC12IE __asm ("0x01A6");
static volatile uint16_t HplAdc12P$ADC12IV __asm ("0x01A8");





static inline void HplAdc12P$HplAdc12$setCtl0(adc12ctl0_t control0);



static inline void HplAdc12P$HplAdc12$setCtl1(adc12ctl1_t control1);



static inline adc12ctl0_t HplAdc12P$HplAdc12$getCtl0(void );







static inline void HplAdc12P$HplAdc12$setMCtl(uint8_t i, adc12memctl_t memControl);





static adc12memctl_t HplAdc12P$HplAdc12$getMCtl(uint8_t i);







static inline uint16_t HplAdc12P$HplAdc12$getMem(uint8_t i);



static inline void HplAdc12P$HplAdc12$setIEFlags(uint16_t mask);


static inline void HplAdc12P$HplAdc12$resetIFGs(void );




static inline void HplAdc12P$HplAdc12$startConversion(void );




static void HplAdc12P$HplAdc12$stopConversion(void );
#line 121
static inline bool HplAdc12P$HplAdc12$isBusy(void );

void sig_ADC_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(14)))  ;
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
enum /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$__nesc_unnamed4314 {
  RoundRobinResourceQueueC$0$NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC$0$SIZE = 3U ? (3U - 1) / 8 + 1 : 0
};

uint8_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$resQ[/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$SIZE];
uint8_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$last = 0;

static inline void /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id);



static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void );




static inline bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void );








static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void );
#line 87
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id);
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x10eda72f0);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x10eda6868);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x10eda6868);
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x10eda8158);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void );
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4315 {
#line 69
  SimpleArbiterP$0$grantedTask = 1U
};
#line 69
typedef int /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 62
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4316 {
#line 62
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 63
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4317 {
#line 63
  SimpleArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;



static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id);
#line 97
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id);
#line 137
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$userId(void );
#line 155
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );









static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$default$granted(uint8_t id);

static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id);



static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t Msp430RefVoltGeneratorP$HplAdc12$getCtl0(void );
#line 118
static bool Msp430RefVoltGeneratorP$HplAdc12$isBusy(void );
#line 51
static void Msp430RefVoltGeneratorP$HplAdc12$setCtl0(adc12ctl0_t control0);
# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP$SwitchOffTimer$startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP$SwitchOffTimer$stop(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void Msp430RefVoltGeneratorP$RefVolt_2_5V$startDone(error_t error);
#line 117
static void Msp430RefVoltGeneratorP$RefVolt_2_5V$stopDone(error_t error);
#line 92
static void Msp430RefVoltGeneratorP$RefVolt_1_5V$startDone(error_t error);
#line 117
static void Msp430RefVoltGeneratorP$RefVolt_1_5V$stopDone(error_t error);
# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP$SwitchOnTimer$startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP$SwitchOnTimer$stop(void );
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
enum Msp430RefVoltGeneratorP$__nesc_unnamed4318 {

  Msp430RefVoltGeneratorP$GENERATOR_OFF, 
  Msp430RefVoltGeneratorP$REFERENCE_1_5V_PENDING, 
  Msp430RefVoltGeneratorP$REFERENCE_2_5V_PENDING, 
  Msp430RefVoltGeneratorP$REFERENCE_1_5V_STABLE, 
  Msp430RefVoltGeneratorP$REFERENCE_2_5V_STABLE
};

uint8_t Msp430RefVoltGeneratorP$state;

static error_t Msp430RefVoltGeneratorP$switchOn(uint8_t level);
#line 78
static error_t Msp430RefVoltGeneratorP$switchOff(void );
#line 94
static inline error_t Msp430RefVoltGeneratorP$RefVolt_1_5V$start(void );
#line 127
static inline error_t Msp430RefVoltGeneratorP$RefVolt_1_5V$stop(void );
#line 157
static inline error_t Msp430RefVoltGeneratorP$RefVolt_2_5V$start(void );
#line 220
static inline void Msp430RefVoltGeneratorP$SwitchOnTimer$fired(void );
#line 244
static inline void Msp430RefVoltGeneratorP$SwitchOffTimer$fired(void );
#line 274
static inline void Msp430RefVoltGeneratorP$HplAdc12$conversionDone(uint16_t iv);
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static Msp430RefVoltArbiterImplP$Config$adc_config_t Msp430RefVoltArbiterImplP$Config$getConfiguration(
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10ee63e08);
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltArbiterImplP$RefVolt_2_5V$start(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP$AdcResource$release(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10ee2c108);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP$AdcResource$request(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10ee2c108);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP$ClientResource$granted(
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10edfcde0);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t Msp430RefVoltArbiterImplP$switchOff$postTask(void );
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltArbiterImplP$RefVolt_1_5V$start(void );
#line 109
static error_t Msp430RefVoltArbiterImplP$RefVolt_1_5V$stop(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
enum Msp430RefVoltArbiterImplP$__nesc_unnamed4319 {
#line 51
  Msp430RefVoltArbiterImplP$switchOff = 2U
};
#line 51
typedef int Msp430RefVoltArbiterImplP$__nesc_sillytask_switchOff[Msp430RefVoltArbiterImplP$switchOff];
#line 46
enum Msp430RefVoltArbiterImplP$__nesc_unnamed4320 {
  Msp430RefVoltArbiterImplP$NO_OWNER = 0xFF
};
uint8_t Msp430RefVoltArbiterImplP$syncOwner = Msp430RefVoltArbiterImplP$NO_OWNER;



static inline error_t Msp430RefVoltArbiterImplP$ClientResource$request(uint8_t client);
#line 70
static void Msp430RefVoltArbiterImplP$AdcResource$granted(uint8_t client);
#line 98
static inline void Msp430RefVoltArbiterImplP$RefVolt_1_5V$startDone(error_t error);








static void Msp430RefVoltArbiterImplP$RefVolt_2_5V$startDone(error_t error);








static error_t Msp430RefVoltArbiterImplP$ClientResource$release(uint8_t client);
#line 136
static inline void Msp430RefVoltArbiterImplP$switchOff$runTask(void );










static inline void Msp430RefVoltArbiterImplP$RefVolt_1_5V$stopDone(error_t error);



static inline void Msp430RefVoltArbiterImplP$RefVolt_2_5V$stopDone(error_t error);








static inline void Msp430RefVoltArbiterImplP$ClientResource$default$granted(uint8_t client);
static inline error_t Msp430RefVoltArbiterImplP$AdcResource$default$request(uint8_t client);








static inline error_t Msp430RefVoltArbiterImplP$AdcResource$default$release(uint8_t client);
const msp430adc12_channel_config_t Msp430RefVoltArbiterImplP$defaultConfig = { INPUT_CHANNEL_NONE, 0, 0, 0, 0, 0, 0, 0 };
static inline const msp430adc12_channel_config_t *
Msp430RefVoltArbiterImplP$Config$default$getConfiguration(uint8_t client);
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

enum /*CounterMilli32C.Transform*/TransformCounterC$0$__nesc_unnamed4321 {

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

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$__nesc_unnamed4322 {

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
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4323 {
#line 63
  AlarmToTimerC$0$fired = 3U
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
uint8_t arg_0x10efce5d8);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4324 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 4U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4325 {

  VirtualizeTimerC$0$NUM_TIMERS = 4U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4326 {

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




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfUp$adc_config_t /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfUp$getConfiguration(void );
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfSub$getConfiguration(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t AdcStreamP$bufferDone$postTask(void );
#line 56
static error_t AdcStreamP$readStreamDone$postTask(void );
#line 56
static error_t AdcStreamP$readStreamFail$postTask(void );
# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static AdcStreamP$Alarm$size_type AdcStreamP$Alarm$getNow(void );
#line 92
static void AdcStreamP$Alarm$startAt(AdcStreamP$Alarm$size_type t0, AdcStreamP$Alarm$size_type dt);
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static AdcStreamP$AdcConfigure$adc_config_t AdcStreamP$AdcConfigure$getConfiguration(
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06ac00);
# 189 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP$SingleChannel$getData(
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06b3d0);
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP$SingleChannel$configureSingle(
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06b3d0, 
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 138
static error_t AdcStreamP$SingleChannel$configureMultiple(
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06b3d0, 
# 138 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
static void AdcStreamP$ReadStream$bufferDone(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06f368, 
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
AdcStreamP$ReadStream$val_t * buf, 



uint16_t count);
#line 102
static void AdcStreamP$ReadStream$readDone(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10f06f368, 
# 102 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
# 119 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
enum AdcStreamP$__nesc_unnamed4327 {
#line 119
  AdcStreamP$readStreamDone = 5U
};
#line 119
typedef int AdcStreamP$__nesc_sillytask_readStreamDone[AdcStreamP$readStreamDone];
#line 135
enum AdcStreamP$__nesc_unnamed4328 {
#line 135
  AdcStreamP$readStreamFail = 6U
};
#line 135
typedef int AdcStreamP$__nesc_sillytask_readStreamFail[AdcStreamP$readStreamFail];
#line 156
enum AdcStreamP$__nesc_unnamed4329 {
#line 156
  AdcStreamP$bufferDone = 7U
};
#line 156
typedef int AdcStreamP$__nesc_sillytask_bufferDone[AdcStreamP$bufferDone];
#line 58
enum AdcStreamP$__nesc_unnamed4330 {
  AdcStreamP$NSTREAM = 1U
};




uint8_t AdcStreamP$client = AdcStreamP$NSTREAM;


struct AdcStreamP$list_entry_t {
  uint16_t count;
  struct AdcStreamP$list_entry_t * next;
};
struct AdcStreamP$list_entry_t *AdcStreamP$bufferQueue[AdcStreamP$NSTREAM];
struct AdcStreamP$list_entry_t * *AdcStreamP$bufferQueueEnd[AdcStreamP$NSTREAM];
uint16_t * AdcStreamP$lastBuffer;
#line 74
uint16_t AdcStreamP$lastCount;

uint16_t AdcStreamP$count;
uint16_t * AdcStreamP$buffer;
uint16_t * AdcStreamP$pos;
uint32_t AdcStreamP$now;
#line 79
uint32_t AdcStreamP$period;
bool AdcStreamP$periodModified;


static inline error_t AdcStreamP$Init$init(void );








static inline void AdcStreamP$sampleSingle(void );



static inline error_t AdcStreamP$postBuffer(uint8_t c, uint16_t *buf, uint16_t n);
#line 119
static inline void AdcStreamP$readStreamDone$runTask(void );
#line 135
static inline void AdcStreamP$readStreamFail$runTask(void );
#line 156
static inline void AdcStreamP$bufferDone$runTask(void );
#line 168
static inline void AdcStreamP$nextAlarm(void );




static inline void AdcStreamP$Alarm$fired(void );



static error_t AdcStreamP$nextBuffer(bool startNextAlarm);
#line 206
static void AdcStreamP$nextMultiple(uint8_t c);
#line 221
static error_t AdcStreamP$ReadStream$read(uint8_t c, uint32_t usPeriod);
#line 242
static error_t AdcStreamP$SingleChannel$singleDataReady(uint8_t streamClient, uint16_t data);
#line 281
static uint16_t *AdcStreamP$SingleChannel$multipleDataReady(uint8_t streamClient, 
uint16_t *buf, uint16_t length);
#line 304
const msp430adc12_channel_config_t AdcStreamP$defaultConfig = { 
.inch = SUPPLY_VOLTAGE_HALF_CHANNEL, 
.sref = REFERENCE_VREFplus_AVss, 
.ref2_5v = REFVOLT_LEVEL_1_5, 
.adc12ssel = SHT_SOURCE_ACLK, 
.adc12div = SHT_CLOCK_DIV_1, 
.sht = SAMPLE_HOLD_4_CYCLES, 
.sampcon_ssel = SAMPCON_SOURCE_SMCLK, 
.sampcon_id = SAMPCON_CLOCK_DIV_1 };

static inline const msp430adc12_channel_config_t *AdcStreamP$AdcConfigure$default$getConfiguration(uint8_t c);



static inline error_t AdcStreamP$SingleChannel$default$configureMultiple(uint8_t c, 
const msp430adc12_channel_config_t *config, uint16_t b[], 
uint16_t numSamples, uint16_t jiffies);



static inline error_t AdcStreamP$SingleChannel$default$getData(uint8_t c);



static inline error_t AdcStreamP$SingleChannel$default$configureSingle(uint8_t c, 
const msp430adc12_channel_config_t *config);
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEvent(uint16_t time);

static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEventFromNow(uint16_t delta);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$get(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$fired(void );
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$enableEvents(void );
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$disableEvents(void );
#line 33
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$clearPendingInterrupt(void );
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$fired(void );










static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$startAt(uint16_t t0, uint16_t dt);
#line 103
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$overflow(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$fired(void );
#line 92
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$size_type dt);
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$get(void );
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_t0;
/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_dt;

enum /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$__nesc_unnamed4331 {

  TransformAlarmC$1$MAX_DELAY_LOG2 = 8 * sizeof(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$from_size_type ) - 1 - 5, 
  TransformAlarmC$1$MAX_DELAY = (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type )1 << /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$MAX_DELAY_LOG2
};

static inline /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$getNow(void );
#line 96
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$set_alarm(void );
#line 136
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type dt);
#line 151
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$fired(void );
#line 166
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$overflow(void );
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$read(
# 26 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10f0bf720, 
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
uint32_t usPeriod);










static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$bufferDone(
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10f0c3530, 
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
/*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$val_t * buf, 



uint16_t count);
#line 102
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$readDone(
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10f0c3530, 
# 102 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Resource$release(
# 27 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10f0bb5c8);



uint32_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$period[1U];
#line 48
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$val_t *buf, uint16_t count);




static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$readDone(uint8_t client, error_t result, uint32_t actualPeriod);





static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Resource$granted(uint8_t client);







static inline error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Resource$default$release(uint8_t client);
#line 79
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$default$bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$val_t *buf, uint16_t count);



static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$default$readDone(uint8_t client, error_t result, uint32_t actualPeriod);
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfUp$adc_config_t /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfUp$getConfiguration(void );
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfSub$getConfiguration(void );
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/sensors/Msp430InternalVoltageP.nc"
const msp430adc12_channel_config_t Msp430InternalVoltageP$config = { 
.inch = SUPPLY_VOLTAGE_HALF_CHANNEL, 
.sref = REFERENCE_VREFplus_AVss, 
.ref2_5v = REFVOLT_LEVEL_1_5, 
.adc12ssel = SHT_SOURCE_ACLK, 
.adc12div = SHT_CLOCK_DIV_1, 
.sht = SAMPLE_HOLD_4_CYCLES, 
.sampcon_ssel = SAMPCON_SOURCE_SMCLK, 
.sampcon_id = SAMPCON_CLOCK_DIV_1 };


static inline const msp430adc12_channel_config_t *Msp430InternalVoltageP$AdcConfigure$getConfiguration(void );
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfUp$adc_config_t /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfUp$getConfiguration(void );
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfSub$getConfiguration(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420ActiveMessageP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420ActiveMessageP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 70 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void );
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$RadioBackoff$requestCca(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f18d1a0, 
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f18d1a0, 
# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f18d1a0, 
# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP$SendNotifier$aboutToSend(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f18e630, 
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void CC2420ActiveMessageP$AMSend$sendDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f194aa8, 
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Snoop$receive(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f1917c0, 
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void );
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420ActiveMessageP$CC2420PacketBody$getMetadata(message_t * msg);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Receive$receive(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x10f193c18, 
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 93
static inline am_addr_t CC2420ActiveMessageP$AMPacket$address(void );



static am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg);









static inline void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg);




static inline am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg);




static inline void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type);
#line 152
static inline uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg);



static inline void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void );



static inline void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len);





static inline void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result);





static inline message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 196
static inline void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error);





static inline void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t *msg);




static inline void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t *msg);



static inline void CC2420ActiveMessageP$SubBackoff$requestCca(message_t *msg);
#line 242
static inline message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static inline void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);

static inline void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCca(am_id_t id, 
message_t *msg);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void CC2420CsmaP$SplitControl$startDone(error_t error);
#line 117
static void CC2420CsmaP$SplitControl$stopDone(error_t error);
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP$RadioBackoff$requestCca(message_t * msg);
#line 81
static void CC2420CsmaP$RadioBackoff$requestInitialBackoff(message_t * msg);






static void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(message_t * msg);
#line 66
static void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t backoffTime);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP$CC2420Transmit$send(message_t * p_msg, bool useCca);
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420CsmaP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t CC2420CsmaP$Random$rand16(void );
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP$SubControl$start(void );









static error_t CC2420CsmaP$SubControl$stop(void );
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420CsmaP$CC2420PacketBody$getMetadata(message_t * msg);
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP$CC2420Power$startOscillator(void );
#line 90
static error_t CC2420CsmaP$CC2420Power$rxOn(void );
#line 51
static error_t CC2420CsmaP$CC2420Power$startVReg(void );
#line 63
static error_t CC2420CsmaP$CC2420Power$stopVReg(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420CsmaP$Resource$release(void );
#line 78
static error_t CC2420CsmaP$Resource$request(void );
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
static bool CC2420CsmaP$SplitControlState$isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP$SplitControlState$requestState(uint8_t reqState);





static void CC2420CsmaP$SplitControlState$forceState(uint8_t reqState);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP$sendDone_task$postTask(void );
#line 56
static error_t CC2420CsmaP$stopDone_task$postTask(void );
#line 56
static error_t CC2420CsmaP$startDone_task$postTask(void );
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP$__nesc_unnamed4332 {
#line 74
  CC2420CsmaP$startDone_task = 8U
};
#line 74
typedef int CC2420CsmaP$__nesc_sillytask_startDone_task[CC2420CsmaP$startDone_task];
enum CC2420CsmaP$__nesc_unnamed4333 {
#line 75
  CC2420CsmaP$stopDone_task = 9U
};
#line 75
typedef int CC2420CsmaP$__nesc_sillytask_stopDone_task[CC2420CsmaP$stopDone_task];
enum CC2420CsmaP$__nesc_unnamed4334 {
#line 76
  CC2420CsmaP$sendDone_task = 10U
};
#line 76
typedef int CC2420CsmaP$__nesc_sillytask_sendDone_task[CC2420CsmaP$sendDone_task];
#line 58
enum CC2420CsmaP$__nesc_unnamed4335 {
  CC2420CsmaP$S_STOPPED, 
  CC2420CsmaP$S_STARTING, 
  CC2420CsmaP$S_STARTED, 
  CC2420CsmaP$S_STOPPING, 
  CC2420CsmaP$S_TRANSMITTING
};

message_t * CC2420CsmaP$m_msg;

error_t CC2420CsmaP$sendErr = SUCCESS;


bool CC2420CsmaP$ccaOn;






static inline void CC2420CsmaP$shutdown(void );


static inline error_t CC2420CsmaP$SplitControl$start(void );
#line 122
static inline error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len);
#line 157
static void *CC2420CsmaP$Send$getPayload(message_t *m, uint8_t len);








static inline uint8_t CC2420CsmaP$Send$maxPayloadLength(void );
#line 198
static inline void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP$CC2420Power$startVRegDone(void );



static inline void CC2420CsmaP$Resource$granted(void );



static inline void CC2420CsmaP$CC2420Power$startOscillatorDone(void );




static inline void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg);






static inline void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg);
#line 237
static inline void CC2420CsmaP$sendDone_task$runTask(void );
#line 250
static inline void CC2420CsmaP$startDone_task$runTask(void );







static inline void CC2420CsmaP$stopDone_task$runTask(void );









static inline void CC2420CsmaP$shutdown(void );
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP$CC2420Config$syncDone(error_t error);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t data);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type dt);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t data);
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP$RSTN$makeOutput(void );
#line 29
static void CC2420ControlP$RSTN$set(void );
static void CC2420ControlP$RSTN$clr(void );
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void CC2420ControlP$ReadRssi$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP$syncDone$postTask(void );
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *data);







static cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t data);
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void );




static am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void );
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP$CSN$makeOutput(void );
#line 29
static void CC2420ControlP$CSN$set(void );
static void CC2420ControlP$CSN$clr(void );




static void CC2420ControlP$VREN$makeOutput(void );
#line 29
static void CC2420ControlP$VREN$set(void );
static void CC2420ControlP$VREN$clr(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SXOSCON$strobe(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$SpiResource$release(void );
#line 78
static error_t CC2420ControlP$SpiResource$request(void );
#line 110
static error_t CC2420ControlP$SyncResource$release(void );
#line 78
static error_t CC2420ControlP$SyncResource$request(void );
# 76 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP$CC2420Power$startOscillatorDone(void );
#line 56
static void CC2420ControlP$CC2420Power$startVRegDone(void );
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t data);
#line 55
static cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t data);
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SRXON$strobe(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP$Resource$granted(void );
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP$PANID$write(uint8_t offset, uint8_t * data, uint8_t length);
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP$InterruptCCA$disable(void );
#line 42
static error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$RssiResource$release(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SRFOFF$strobe(void );
# 117 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP$__nesc_unnamed4336 {
#line 117
  CC2420ControlP$sync = 11U
};
#line 117
typedef int CC2420ControlP$__nesc_sillytask_sync[CC2420ControlP$sync];
enum CC2420ControlP$__nesc_unnamed4337 {
#line 118
  CC2420ControlP$syncDone = 12U
};
#line 118
typedef int CC2420ControlP$__nesc_sillytask_syncDone[CC2420ControlP$syncDone];
#line 85
#line 79
typedef enum CC2420ControlP$__nesc_unnamed4338 {
  CC2420ControlP$S_VREG_STOPPED, 
  CC2420ControlP$S_VREG_STARTING, 
  CC2420ControlP$S_VREG_STARTED, 
  CC2420ControlP$S_XOSC_STARTING, 
  CC2420ControlP$S_XOSC_STARTED
} CC2420ControlP$cc2420_control_state_t;

uint8_t CC2420ControlP$m_channel;

uint8_t CC2420ControlP$m_tx_power;

uint16_t CC2420ControlP$m_pan;

uint16_t CC2420ControlP$m_short_addr;

bool CC2420ControlP$m_sync_busy;


bool CC2420ControlP$autoAckEnabled;


bool CC2420ControlP$hwAutoAckDefault;


bool CC2420ControlP$addressRecognition;


bool CC2420ControlP$hwAddressRecognition;

CC2420ControlP$cc2420_control_state_t CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;



static void CC2420ControlP$writeFsctrl(void );
static void CC2420ControlP$writeMdmctrl0(void );
static void CC2420ControlP$writeId(void );





static inline error_t CC2420ControlP$Init$init(void );
#line 171
static inline error_t CC2420ControlP$Resource$request(void );







static inline error_t CC2420ControlP$Resource$release(void );







static inline error_t CC2420ControlP$CC2420Power$startVReg(void );
#line 199
static inline error_t CC2420ControlP$CC2420Power$stopVReg(void );







static inline error_t CC2420ControlP$CC2420Power$startOscillator(void );
#line 249
static inline error_t CC2420ControlP$CC2420Power$rxOn(void );
#line 279
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void );







static inline uint16_t CC2420ControlP$CC2420Config$getPanAddr(void );
#line 300
static inline error_t CC2420ControlP$CC2420Config$sync(void );
#line 332
static inline bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void );
#line 359
static inline bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void );






static inline bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void );









static inline void CC2420ControlP$SyncResource$granted(void );
#line 390
static inline void CC2420ControlP$SpiResource$granted(void );




static inline void CC2420ControlP$RssiResource$granted(void );
#line 408
static inline void CC2420ControlP$StartupTimer$fired(void );









static inline void CC2420ControlP$InterruptCCA$fired(void );
#line 442
static inline void CC2420ControlP$sync$runTask(void );



static inline void CC2420ControlP$syncDone$runTask(void );









static void CC2420ControlP$writeFsctrl(void );
#line 473
static void CC2420ControlP$writeMdmctrl0(void );
#line 492
static void CC2420ControlP$writeId(void );
#line 509
static inline void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data);
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Compare$setEvent(uint16_t time);

static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Compare$setEventFromNow(uint16_t delta);
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Timer$get(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$fired(void );
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$enableEvents(void );
#line 36
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$setControlAsCompare(void );










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$disableEvents(void );
#line 33
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$clearPendingInterrupt(void );
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Init$init(void );
#line 54
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$stop(void );




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Compare$fired(void );










static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$startAt(uint16_t t0, uint16_t dt);
#line 103
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Timer$overflow(void );
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$size_type /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$get(void );






static bool /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC$1$Counter$overflow(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform*/TransformCounterC$1$upper_count_type /*Counter32khz32C.Transform*/TransformCounterC$1$m_upper;

enum /*Counter32khz32C.Transform*/TransformCounterC$1$__nesc_unnamed4339 {

  TransformCounterC$1$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$1$HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC$1$from_size_type ) - /*Counter32khz32C.Transform*/TransformCounterC$1$LOW_SHIFT_RIGHT, 
  TransformCounterC$1$NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC$1$to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC$1$from_size_type ) + 0, 



  TransformCounterC$1$OVERFLOW_MASK = /*Counter32khz32C.Transform*/TransformCounterC$1$NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform*/TransformCounterC$1$upper_count_type )2 << (/*Counter32khz32C.Transform*/TransformCounterC$1$NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform*/TransformCounterC$1$to_size_type /*Counter32khz32C.Transform*/TransformCounterC$1$Counter$get(void );
#line 122
static inline void /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$overflow(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$fired(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$stop(void );
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$get(void );
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$__nesc_unnamed4340 {

  TransformAlarmC$2$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$from_size_type ) - 1 - 0, 
  TransformAlarmC$2$MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$getNow(void );
#line 91
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$set_alarm(void );
#line 136
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$fired(void );
#line 166
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$overflow(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$HplGeneralIO$makeInput(void );
#line 59
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$HplGeneralIO$get(void );
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$GeneralIO$get(void );
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$GeneralIO$makeInput(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$HplGeneralIO$makeOutput(void );
#line 34
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$HplGeneralIO$set(void );




static void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$HplGeneralIO$clr(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$set(void );
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$clr(void );




static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$makeOutput(void );
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC$5$HplGeneralIO$get(void );
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC$5$GeneralIO$get(void );
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$6$HplGeneralIO$get(void );
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$6$GeneralIO$get(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$HplGeneralIO$makeOutput(void );
#line 34
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$HplGeneralIO$set(void );




static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$HplGeneralIO$clr(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$set(void );
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$clr(void );




static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$makeOutput(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$HplGeneralIO$makeInput(void );
#line 59
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$HplGeneralIO$get(void );
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$GeneralIO$get(void );
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$GeneralIO$makeInput(void );
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$HplGeneralIO$makeOutput(void );
#line 34
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$HplGeneralIO$set(void );




static void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$HplGeneralIO$clr(void );
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$set(void );
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$clr(void );




static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$makeOutput(void );
# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$clearOverflow(void );
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captured(uint16_t time);
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$setControlAsCapture(uint8_t cm);

static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$enableEvents(void );
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$disableEvents(void );
#line 33
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$clearPendingInterrupt(void );
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectIOFunc(void );
#line 78
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectModuleFunc(void );
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$enableCapture(uint8_t mode);
#line 50
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$disable(void );






static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$captured(uint16_t time);
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP$Port14$fired(void );
#line 61
static void HplMsp430InterruptP$Port26$fired(void );
#line 61
static void HplMsp430InterruptP$Port17$fired(void );
#line 61
static void HplMsp430InterruptP$Port21$fired(void );
#line 61
static void HplMsp430InterruptP$Port12$fired(void );
#line 61
static void HplMsp430InterruptP$Port24$fired(void );
#line 61
static void HplMsp430InterruptP$Port15$fired(void );
#line 61
static void HplMsp430InterruptP$Port27$fired(void );
#line 61
static void HplMsp430InterruptP$Port10$fired(void );
#line 61
static void HplMsp430InterruptP$Port22$fired(void );
#line 61
static void HplMsp430InterruptP$Port13$fired(void );
#line 61
static void HplMsp430InterruptP$Port25$fired(void );
#line 61
static void HplMsp430InterruptP$Port16$fired(void );
#line 61
static void HplMsp430InterruptP$Port20$fired(void );
#line 61
static void HplMsp430InterruptP$Port11$fired(void );
#line 61
static void HplMsp430InterruptP$Port23$fired(void );
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
void sig_PORT1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(8)))  ;
#line 68
static inline void HplMsp430InterruptP$Port11$default$fired(void );
static inline void HplMsp430InterruptP$Port12$default$fired(void );
static inline void HplMsp430InterruptP$Port13$default$fired(void );

static inline void HplMsp430InterruptP$Port15$default$fired(void );
static inline void HplMsp430InterruptP$Port16$default$fired(void );
static inline void HplMsp430InterruptP$Port17$default$fired(void );
static inline void HplMsp430InterruptP$Port10$enable(void );



static inline void HplMsp430InterruptP$Port14$enable(void );



static inline void HplMsp430InterruptP$Port10$disable(void );



static inline void HplMsp430InterruptP$Port14$disable(void );



static inline void HplMsp430InterruptP$Port10$clear(void );
static inline void HplMsp430InterruptP$Port11$clear(void );
static inline void HplMsp430InterruptP$Port12$clear(void );
static inline void HplMsp430InterruptP$Port13$clear(void );
static inline void HplMsp430InterruptP$Port14$clear(void );
static inline void HplMsp430InterruptP$Port15$clear(void );
static inline void HplMsp430InterruptP$Port16$clear(void );
static inline void HplMsp430InterruptP$Port17$clear(void );








static inline void HplMsp430InterruptP$Port10$edge(bool l2h);
#line 131
static inline void HplMsp430InterruptP$Port14$edge(bool l2h);
#line 158
void sig_PORT2_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(2)))  ;
#line 171
static inline void HplMsp430InterruptP$Port20$default$fired(void );
static inline void HplMsp430InterruptP$Port21$default$fired(void );
static inline void HplMsp430InterruptP$Port22$default$fired(void );
static inline void HplMsp430InterruptP$Port23$default$fired(void );
static inline void HplMsp430InterruptP$Port24$default$fired(void );
static inline void HplMsp430InterruptP$Port25$default$fired(void );
static inline void HplMsp430InterruptP$Port26$default$fired(void );
static inline void HplMsp430InterruptP$Port27$default$fired(void );
#line 195
static inline void HplMsp430InterruptP$Port20$clear(void );
static inline void HplMsp430InterruptP$Port21$clear(void );
static inline void HplMsp430InterruptP$Port22$clear(void );
static inline void HplMsp430InterruptP$Port23$clear(void );
static inline void HplMsp430InterruptP$Port24$clear(void );
static inline void HplMsp430InterruptP$Port25$clear(void );
static inline void HplMsp430InterruptP$Port26$clear(void );
static inline void HplMsp430InterruptP$Port27$clear(void );
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$clear(void );
#line 36
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$disable(void );
#line 56
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$edge(bool low_to_high);
#line 31
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$enable(void );
# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$fired(void );
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$enable(bool rising);








static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$enableRisingEdge(void );







static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$disable(void );







static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$fired(void );
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$clear(void );
#line 36
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$disable(void );
#line 56
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$edge(bool low_to_high);
#line 31
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$enable(void );
# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$fired(void );
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$enable(bool rising);
#line 54
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$disable(void );







static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$fired(void );
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP$SpiPacket$send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP$Fifo$writeDone(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f509ca8, 
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP$Fifo$readDone(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f509ca8, 
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP$ChipSpiResource$releasing(void );
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP$SpiByte$write(uint8_t tx);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
static void CC2420SpiP$WorkingState$toIdle(void );




static bool CC2420SpiP$WorkingState$isIdle(void );
#line 45
static error_t CC2420SpiP$WorkingState$requestState(uint8_t reqState);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$SpiResource$release(void );
#line 87
static error_t CC2420SpiP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420SpiP$SpiResource$request(void );
#line 118
static bool CC2420SpiP$SpiResource$isOwner(void );
#line 92
static void CC2420SpiP$Resource$granted(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x10f50aa68);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP$grant$postTask(void );
# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP$__nesc_unnamed4341 {
#line 88
  CC2420SpiP$grant = 13U
};
#line 88
typedef int CC2420SpiP$__nesc_sillytask_grant[CC2420SpiP$grant];
#line 63
enum CC2420SpiP$__nesc_unnamed4342 {
  CC2420SpiP$RESOURCE_COUNT = 5U, 
  CC2420SpiP$NO_HOLDER = 0xFF
};


enum CC2420SpiP$__nesc_unnamed4343 {
  CC2420SpiP$S_IDLE, 
  CC2420SpiP$S_BUSY
};


uint16_t CC2420SpiP$m_addr;


uint8_t CC2420SpiP$m_requests = 0;


uint8_t CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;


bool CC2420SpiP$release;


static error_t CC2420SpiP$attemptRelease(void );







static inline void CC2420SpiP$ChipSpiResource$abortRelease(void );






static inline error_t CC2420SpiP$ChipSpiResource$attemptRelease(void );




static error_t CC2420SpiP$Resource$request(uint8_t id);
#line 126
static error_t CC2420SpiP$Resource$immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP$Resource$release(uint8_t id);
#line 178
static inline uint8_t CC2420SpiP$Resource$isOwner(uint8_t id);





static inline void CC2420SpiP$SpiResource$granted(void );




static cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr);










static void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP$attemptRelease(void );
#line 358
static inline void CC2420SpiP$grant$runTask(void );








static inline void CC2420SpiP$Resource$default$granted(uint8_t id);


static inline void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP$state[4U];

enum StateImplP$__nesc_unnamed4344 {
  StateImplP$S_IDLE = 0
};


static inline error_t StateImplP$Init$init(void );
#line 96
static error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP$State$forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP$State$toIdle(uint8_t id);







static inline bool StateImplP$State$isIdle(uint8_t id);






static bool StateImplP$State$isState(uint8_t id, uint8_t myState);
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$sendDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f626650, 
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$getConfig(
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f6246a8);
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
uint8_t arg_0x10f625430);
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$immediateRequest(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f625430);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$request(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f625430);
# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$isOwner(
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f625430);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$granted(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x10f629120);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$postTask(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$__nesc_unnamed4345 {
#line 67
  Msp430SpiNoDmaP$0$signalDone_task = 14U
};
#line 67
typedef int /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$__nesc_sillytask_signalDone_task[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task];
#line 56
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$__nesc_unnamed4346 {
  Msp430SpiNoDmaP$0$SPI_ATOMIC_SIZE = 2
};

uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf;
uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos;
uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_client;

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone(void );


static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$immediateRequest(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$request(uint8_t id);



static inline uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$isOwner(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$release(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$configure(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$unconfigure(uint8_t id);





static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$granted(uint8_t id);



static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiByte$write(uint8_t tx);
#line 111
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$isOwner(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$immediateRequest(uint8_t id);
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








static void HplMsp430Usart0P$Usart$setModeSpi(msp430_spi_union_config_t *config);
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
# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$inUse(void );







static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId(void );
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$rxDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x10f7530c8, 
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$txDone(
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x10f7530c8);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$fired(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x10f752020);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawI2CInterrupts$fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$default$fired(uint8_t id);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4347 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[1U];
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init(void );




static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );



static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
#line 72
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f7777e8);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f7777e8);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f7749b8);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f7749b8);
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$dequeue(void );
# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$granted(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x10f778528);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$__nesc_unnamed4348 {
#line 75
  ArbiterP$0$grantedTask = 15U
};
#line 75
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$__nesc_unnamed4349 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$__nesc_unnamed4350 {
#line 68
  ArbiterP$0$default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$__nesc_unnamed4351 {
#line 69
  ArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$default_owner_id;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId;



static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 90
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$immediateRequest(uint8_t id);
#line 108
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 130
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
#line 150
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$inUse(void );
#line 163
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$userId(void );










static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$isOwner(uint8_t id);
#line 187
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
#line 199
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void );

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$immediateRequested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 97 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430I2C0P$HplUsart$resetUsart(bool reset);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static volatile uint8_t HplMsp430I2C0P$U0CTL __asm ("0x0070");





static inline bool HplMsp430I2C0P$HplI2C$isI2C(void );



static inline void HplMsp430I2C0P$HplI2C$clearModeI2C(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC$group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 82
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
#line 95
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t * msg);






static void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t * msg);
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP$PacketTimeStamp$clear(
#line 55
message_t * msg);
#line 67
static void CC2420TransmitP$PacketTimeStamp$set(
#line 62
message_t * msg, 




CC2420TransmitP$PacketTimeStamp$size_type value);
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void );
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void );
#line 55
static void CC2420TransmitP$CaptureSFD$disable(void );
#line 42
static error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void );
# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static CC2420TransmitP$BackoffTimer$size_type CC2420TransmitP$BackoffTimer$getNow(void );
#line 55
static void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type dt);






static void CC2420TransmitP$BackoffTimer$stop(void );
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP$TXFIFO_RAM$write(uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t data);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP$CC2420Receive$sfd_dropped(void );
#line 49
static void CC2420TransmitP$CC2420Receive$sfd(uint32_t time);
# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP$Send$sendDone(message_t * p_msg, error_t error);
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP$ChipSpiResource$abortRelease(void );







static error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void );
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$CSN$makeOutput(void );
#line 29
static void CC2420TransmitP$CSN$set(void );
static void CC2420TransmitP$CSN$clr(void );
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420TransmitP$CC2420PacketBody$getMetadata(message_t * msg);
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP$PacketTimeSyncOffset$get(
#line 42
message_t * msg);
#line 39
static bool CC2420TransmitP$PacketTimeSyncOffset$isSet(
#line 35
message_t * msg);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP$SpiResource$release(void );
#line 87
static error_t CC2420TransmitP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420TransmitP$SpiResource$request(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$CCA$makeInput(void );
#line 32
static bool CC2420TransmitP$CCA$get(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$SNOP$strobe(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$SFD$makeInput(void );
#line 32
static bool CC2420TransmitP$SFD$get(void );
# 82 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t * data, uint8_t length);
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$STXON$strobe(void );
# 90 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 80
typedef enum CC2420TransmitP$__nesc_unnamed4352 {
  CC2420TransmitP$S_STOPPED, 
  CC2420TransmitP$S_STARTED, 
  CC2420TransmitP$S_LOAD, 
  CC2420TransmitP$S_SAMPLE_CCA, 
  CC2420TransmitP$S_BEGIN_TRANSMIT, 
  CC2420TransmitP$S_SFD, 
  CC2420TransmitP$S_EFD, 
  CC2420TransmitP$S_ACK_WAIT, 
  CC2420TransmitP$S_CANCEL
} CC2420TransmitP$cc2420_transmit_state_t;





enum CC2420TransmitP$__nesc_unnamed4353 {
  CC2420TransmitP$CC2420_ABORT_PERIOD = 320
};

message_t * CC2420TransmitP$m_msg;

bool CC2420TransmitP$m_cca;

uint8_t CC2420TransmitP$m_tx_power;

CC2420TransmitP$cc2420_transmit_state_t CC2420TransmitP$m_state = CC2420TransmitP$S_STOPPED;

bool CC2420TransmitP$m_receiving = FALSE;

uint16_t CC2420TransmitP$m_prev_time;


bool CC2420TransmitP$sfdHigh;


bool CC2420TransmitP$abortSpiRelease;


int8_t CC2420TransmitP$totalCcaChecks;


uint16_t CC2420TransmitP$myInitialBackoff;


uint16_t CC2420TransmitP$myCongestionBackoff;



static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca);

static void CC2420TransmitP$loadTXFIFO(void );
static void CC2420TransmitP$attemptSend(void );
static void CC2420TransmitP$congestionBackoff(void );
static error_t CC2420TransmitP$acquireSpiResource(void );
static inline error_t CC2420TransmitP$releaseSpiResource(void );
static void CC2420TransmitP$signalDone(error_t err);



static inline error_t CC2420TransmitP$Init$init(void );







static inline error_t CC2420TransmitP$StdControl$start(void );










static inline error_t CC2420TransmitP$StdControl$stop(void );
#line 172
static inline error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca);
#line 223
static inline void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime);







static inline void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP$time16to32(uint16_t time, uint32_t recent_time);
#line 260
static inline void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
#line 341
static inline void CC2420TransmitP$ChipSpiResource$releasing(void );
#line 353
static inline void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg);
#line 381
static inline void CC2420TransmitP$SpiResource$granted(void );
#line 419
static inline void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 451
static inline void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP$BackoffTimer$fired(void );
#line 512
static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca);
#line 580
static void CC2420TransmitP$attemptSend(void );
#line 622
static void CC2420TransmitP$congestionBackoff(void );






static error_t CC2420TransmitP$acquireSpiResource(void );







static inline error_t CC2420TransmitP$releaseSpiResource(void );
#line 659
static void CC2420TransmitP$loadTXFIFO(void );
#line 684
static void CC2420TransmitP$signalDone(error_t err);
# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP$FIFO$get(void );
# 86 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void );
#line 105
static bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP$receiveDone_task$postTask(void );
# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP$FIFOP$get(void );
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP$PacketTimeStamp$clear(
#line 55
message_t * msg);
#line 67
static void CC2420ReceiveP$PacketTimeStamp$set(
#line 62
message_t * msg, 




CC2420ReceiveP$PacketTimeStamp$size_type value);
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP$CC2420Receive$receive(uint8_t type, message_t * message);
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP$SACK$strobe(void );
# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP$CSN$set(void );
static void CC2420ReceiveP$CSN$clr(void );
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t * msg);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ReceiveP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP$SpiResource$release(void );
#line 87
static error_t CC2420ReceiveP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420ReceiveP$SpiResource$request(void );
#line 118
static bool CC2420ReceiveP$SpiResource$isOwner(void );
# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t * data, uint8_t length);
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP$InterruptFIFOP$disable(void );
#line 43
static error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void );
# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP$__nesc_unnamed4354 {
#line 115
  CC2420ReceiveP$receiveDone_task = 16U
};
#line 115
typedef int CC2420ReceiveP$__nesc_sillytask_receiveDone_task[CC2420ReceiveP$receiveDone_task];
#line 76
#line 70
typedef enum CC2420ReceiveP$__nesc_unnamed4355 {
  CC2420ReceiveP$S_STOPPED, 
  CC2420ReceiveP$S_STARTED, 
  CC2420ReceiveP$S_RX_LENGTH, 
  CC2420ReceiveP$S_RX_FCF, 
  CC2420ReceiveP$S_RX_PAYLOAD
} CC2420ReceiveP$cc2420_receive_state_t;

enum CC2420ReceiveP$__nesc_unnamed4356 {
  CC2420ReceiveP$RXFIFO_SIZE = 128, 
  CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP$SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP$m_timestamp_head;

uint8_t CC2420ReceiveP$m_timestamp_size;


uint8_t CC2420ReceiveP$m_missed_packets;


bool CC2420ReceiveP$receivingPacket;


uint8_t CC2420ReceiveP$rxFrameLength;

uint8_t CC2420ReceiveP$m_bytes_left;

message_t * CC2420ReceiveP$m_p_rx_buf;

message_t CC2420ReceiveP$m_rx_buf;

CC2420ReceiveP$cc2420_receive_state_t CC2420ReceiveP$m_state;


static void CC2420ReceiveP$reset_state(void );
static void CC2420ReceiveP$beginReceive(void );
static void CC2420ReceiveP$receive(void );
static void CC2420ReceiveP$waitForNextPacket(void );
static void CC2420ReceiveP$flush(void );
static inline bool CC2420ReceiveP$passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP$Init$init(void );





static inline error_t CC2420ReceiveP$StdControl$start(void );
#line 138
static inline error_t CC2420ReceiveP$StdControl$stop(void );
#line 153
static inline void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time);








static inline void CC2420ReceiveP$CC2420Receive$sfd_dropped(void );
#line 179
static inline void CC2420ReceiveP$InterruptFIFOP$fired(void );










static inline void CC2420ReceiveP$SpiResource$granted(void );








static inline void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 322
static inline void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP$receiveDone_task$runTask(void );
#line 351
static inline void CC2420ReceiveP$CC2420Config$syncDone(error_t error);






static void CC2420ReceiveP$beginReceive(void );
#line 376
static void CC2420ReceiveP$flush(void );
#line 393
static void CC2420ReceiveP$receive(void );









static void CC2420ReceiveP$waitForNextPacket(void );
#line 441
static void CC2420ReceiveP$reset_state(void );










static inline bool CC2420ReceiveP$passesAddressCheck(message_t *msg);
# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg);



static inline cc2420_metadata_t *CC2420PacketP$CC2420PacketBody$getMetadata(message_t *msg);
#line 122
static void CC2420PacketP$PacketTimeStamp32khz$clear(message_t *msg);





static inline void CC2420PacketP$PacketTimeStamp32khz$set(message_t *msg, uint32_t value);
#line 161
static inline bool CC2420PacketP$PacketTimeSyncOffset$isSet(message_t *msg);








static inline uint8_t CC2420PacketP$PacketTimeSyncOffset$get(message_t *msg);
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed;


static inline error_t RandomMlcgC$Init$init(void );
#line 58
static uint32_t RandomMlcgC$Random$rand32(void );
#line 78
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t UniqueSendP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

UniqueSendP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 89
static void UniqueSendP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t UniqueSendP$Random$rand16(void );
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP$CC2420PacketBody$getHeader(message_t * msg);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
static void UniqueSendP$State$toIdle(void );
#line 45
static error_t UniqueSendP$State$requestState(uint8_t reqState);
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP$localSendId;

enum UniqueSendP$__nesc_unnamed4357 {
  UniqueSendP$S_IDLE, 
  UniqueSendP$S_SENDING
};


static inline error_t UniqueSendP$Init$init(void );
#line 75
static inline error_t UniqueSendP$Send$send(message_t *msg, uint8_t len);
#line 100
static inline void *UniqueSendP$Send$getPayload(message_t *msg, uint8_t len);




static inline void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP$CC2420PacketBody$getHeader(message_t * msg);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$DuplicateReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP$__nesc_unnamed4358 {
  am_addr_t source;
  uint8_t dsn;
} UniqueReceiveP$receivedMessages[4];

uint8_t UniqueReceiveP$writeIndex = 0;


uint8_t UniqueReceiveP$recycleSourceElement;

enum UniqueReceiveP$__nesc_unnamed4359 {
  UniqueReceiveP$INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP$Init$init(void );









static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);


static inline message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len);
#line 115
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 141
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);
#line 162
static inline message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420TinyosNetworkP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 89
static void CC2420TinyosNetworkP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$NonTinyosReceive$receive(
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x10fb8ed08, 
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP$CC2420PacketBody$getHeader(message_t * msg);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP$Send$send(message_t *msg, uint8_t len);
#line 74
static inline void *CC2420TinyosNetworkP$Send$getPayload(message_t *msg, uint8_t len);




static inline void CC2420TinyosNetworkP$SubSend$sendDone(message_t *msg, error_t error);




static inline message_t *CC2420TinyosNetworkP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);









static inline message_t *CC2420TinyosNetworkP$NonTinyosReceive$default$receive(uint8_t networkId, message_t *msg, void *payload, uint8_t len);
# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x10fbe8c70, 
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x10fbe9990, 
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 63
message_t * msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 132
message_t * amsg);
# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4360 {
#line 118
  AMQueueImplP$0$CancelTask = 17U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4361 {
#line 161
  AMQueueImplP$0$errorTask = 18U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4362 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 82
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
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

# 540 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP$TimerA$overflow(void )
#line 540
{
}

# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$overflow(void ){
#line 37
  Msp430Adc12ImplP$TimerA$overflow();
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
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$fired(uint8_t arg_0x10e7ed780){
#line 28
  switch (arg_0x10e7ed780) {
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
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$default$fired(arg_0x10e7ed780);
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
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$__nesc_unnamed4363 {
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

# 541 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP$CompareA0$fired(void )
#line 541
{
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$fired(void ){
#line 34
  Msp430Adc12ImplP$CompareA0$fired();
#line 34
}
#line 34
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$__nesc_unnamed4364 {
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

# 542 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP$CompareA1$fired(void )
#line 542
{
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$fired(void ){
#line 34
  Msp430Adc12ImplP$CompareA1$fired();
#line 34
}
#line 34
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$__nesc_unnamed4365 {
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
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Timer$overflow(void )
{
}

#line 103
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$overflow(void )
{
}

#line 103
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

#line 166
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$overflow(void )
{
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$overflow(void ){
#line 71
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$overflow();
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

# 166 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$overflow(void )
{
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void )
{
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform*/TransformCounterC$1$Counter$overflow(void ){
#line 71
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow();
#line 71
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$overflow();
#line 71
}
#line 71
# 122 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.Transform*/TransformCounterC$1$m_upper++;
    if ((/*Counter32khz32C.Transform*/TransformCounterC$1$m_upper & /*Counter32khz32C.Transform*/TransformCounterC$1$OVERFLOW_MASK) == 0) {
      /*Counter32khz32C.Transform*/TransformCounterC$1$Counter$overflow();
      }
  }
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$overflow(void ){
#line 71
  /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$overflow();
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
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$overflow();
#line 37
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Timer$overflow();
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
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$__nesc_unnamed4366 {
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

# 322 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/nesc/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

#line 347
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 340
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP$PacketTimeStamp$clear(message_t * msg){
#line 59
  CC2420PacketP$PacketTimeStamp32khz$clear(msg);
#line 59
}
#line 59
# 162 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Receive$sfd_dropped(void )
#line 162
{
  if (CC2420ReceiveP$m_timestamp_size) {
      CC2420ReceiveP$m_timestamp_size--;
    }
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP$CC2420Receive$sfd_dropped(void ){
#line 55
  CC2420ReceiveP$CC2420Receive$sfd_dropped();
#line 55
}
#line 55
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureRisingEdge(void )
#line 50
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$enableCapture(MSP430TIMER_CM_RISING);
}

# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureRisingEdge();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$getRaw(void )
#line 48
{
#line 48
  return * (volatile uint8_t * )28U & (0x01 << 1);
}

#line 49
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$get(void )
#line 49
{
#line 49
  return /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$getRaw() != 0;
}

# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$HplGeneralIO$get(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$get();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$GeneralIO$get(void )
#line 40
{
#line 40
  return /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$HplGeneralIO$get();
}

# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP$SFD$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$GeneralIO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 153 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time)
#line 153
{
  if (CC2420ReceiveP$m_timestamp_size < CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP$m_timestamp_head + CC2420ReceiveP$m_timestamp_size) % 
      CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;

#line 157
      CC2420ReceiveP$m_timestamp_queue[tail] = time;
      CC2420ReceiveP$m_timestamp_size++;
    }
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP$CC2420Receive$sfd(uint32_t time){
#line 49
  CC2420ReceiveP$CC2420Receive$sfd(time);
#line 49
}
#line 49
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureFallingEdge(void )
#line 54
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$enableCapture(MSP430TIMER_CM_FALLING);
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureFallingEdge();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$get(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC$1$Counter$get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$get();
}

#line 146
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$getNow(), dt);
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$start(dt);
#line 55
}
#line 55
# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg)
#line 99
{
  return (cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TransmitP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 103 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP$CC2420PacketBody$getMetadata(message_t *msg)
#line 103
{
  return (cc2420_metadata_t *)msg->metadata;
}

#line 128
static inline void CC2420PacketP$PacketTimeStamp32khz$set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timestamp.nxdata, value);
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP$PacketTimeStamp$set(message_t * msg, CC2420TransmitP$PacketTimeStamp$size_type value){
#line 67
  CC2420PacketP$PacketTimeStamp32khz$set(msg, value);
#line 67
}
#line 67
# 124 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$disableEvents(void )
{
  * (volatile uint16_t * )392U &= ~0x0010;
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$disableEvents(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$disableEvents();
#line 47
}
#line 47
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$disableEvents();
}

# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$stop();
#line 62
}
#line 62
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$stop();
}

# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP$BackoffTimer$stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$stop();
#line 62
}
#line 62
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 637 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$releaseSpiResource(void )
#line 637
{
  CC2420TransmitP$SpiResource$release();
  return SUCCESS;
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$HplGeneralIO$set(void ){
#line 34
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$set();
#line 34
}
#line 34
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$set(void )
#line 37
{
#line 37
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$HplGeneralIO$set();
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CSN$set(void ){
#line 29
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$set();
#line 29
}
#line 29
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP$TXFIFO_RAM$write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP$Ram$write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$HplGeneralIO$clr(void ){
#line 39
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$clr();
#line 39
}
#line 39
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$clr(void )
#line 38
{
#line 38
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$HplGeneralIO$clr();
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CSN$clr(void ){
#line 30
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$clr();
#line 30
}
#line 30
# 292 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/nesc/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 170 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP$PacketTimeSyncOffset$get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP$CC2420PacketBody$getHeader(msg)->length.nxdata)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP$PacketTimeSyncOffset$get(message_t * msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$PacketTimeSyncOffset$get(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 281 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/nesc/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

#line 303
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 303
{
#line 303
  return __nesc_ntoh_uint8(source);
}

# 161 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP$PacketTimeSyncOffset$isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timesync.nxdata);
}

# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP$PacketTimeSyncOffset$isSet(message_t * msg){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420PacketP$PacketTimeSyncOffset$isSet(msg);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static CC2420TransmitP$BackoffTimer$size_type CC2420TransmitP$BackoffTimer$getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 239 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP$time16to32(uint16_t time, uint32_t recent_time)
{
  if ((recent_time & 0xFFFF) < time) {
    return ((recent_time - 0x10000UL) & 0xFFFF0000UL) | time;
    }
  else {
#line 244
    return (recent_time & 0xFFFF0000UL) | time;
    }
}

#line 260
static inline void CC2420TransmitP$CaptureSFD$captured(uint16_t time)
#line 260
{
  unsigned char *__nesc_temp44;
#line 261
  uint32_t time32 = CC2420TransmitP$time16to32(time, CC2420TransmitP$BackoffTimer$getNow());

  /* atomic removed: atomic calls only */
#line 262
  {
    switch (CC2420TransmitP$m_state) {

        case CC2420TransmitP$S_SFD: 
          CC2420TransmitP$m_state = CC2420TransmitP$S_EFD;
        CC2420TransmitP$sfdHigh = TRUE;
        CC2420TransmitP$CaptureSFD$captureFallingEdge();
        CC2420TransmitP$PacketTimeStamp$set(CC2420TransmitP$m_msg, time32);
        if (CC2420TransmitP$PacketTimeSyncOffset$isSet(CC2420TransmitP$m_msg)) {
            uint8_t absOffset = sizeof(message_header_t ) - sizeof(cc2420_header_t ) + CC2420TransmitP$PacketTimeSyncOffset$get(CC2420TransmitP$m_msg);
            timesync_radio_t *timesync = (timesync_radio_t *)((nx_uint8_t *)CC2420TransmitP$m_msg + absOffset);

            (__nesc_temp44 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
            CC2420TransmitP$CSN$clr();
            CC2420TransmitP$TXFIFO_RAM$write(absOffset, (uint8_t *)timesync, sizeof(timesync_radio_t ));
            CC2420TransmitP$CSN$set();
          }

        if (__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {

            CC2420TransmitP$abortSpiRelease = TRUE;
          }
        CC2420TransmitP$releaseSpiResource();
        CC2420TransmitP$BackoffTimer$stop();


        if (((__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {
            CC2420TransmitP$PacketTimeStamp$set(CC2420TransmitP$m_msg, time32);
          }

        if (CC2420TransmitP$SFD$get()) {
            break;
          }


        case CC2420TransmitP$S_EFD: 
          CC2420TransmitP$sfdHigh = FALSE;
        CC2420TransmitP$CaptureSFD$captureRisingEdge();

        if (__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {
            CC2420TransmitP$m_state = CC2420TransmitP$S_ACK_WAIT;
            CC2420TransmitP$BackoffTimer$start(CC2420_ACK_WAIT_DELAY);
          }
        else 
#line 304
          {
            CC2420TransmitP$signalDone(SUCCESS);
          }

        if (!CC2420TransmitP$SFD$get()) {
            break;
          }


        default: 
          if (!CC2420TransmitP$m_receiving) {
              CC2420TransmitP$sfdHigh = TRUE;
              CC2420TransmitP$CaptureSFD$captureFallingEdge();
              CC2420TransmitP$CC2420Receive$sfd(time32);
              CC2420TransmitP$m_receiving = TRUE;
              CC2420TransmitP$m_prev_time = time;
              if (CC2420TransmitP$SFD$get()) {

                  return;
                }
            }

        CC2420TransmitP$sfdHigh = FALSE;
        CC2420TransmitP$CaptureSFD$captureRisingEdge();
        CC2420TransmitP$m_receiving = FALSE;
        if (time - CC2420TransmitP$m_prev_time < 10) {
            CC2420TransmitP$CC2420Receive$sfd_dropped();
            if (CC2420TransmitP$m_msg) {
              CC2420TransmitP$PacketTimeStamp$clear(CC2420TransmitP$m_msg);
              }
          }
#line 334
        break;
      }
  }
}

# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captured(uint16_t time){
#line 50
  CC2420TransmitP$CaptureSFD$captured(time);
#line 50
}
#line 50
# 164 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$clearOverflow(void )
{
  * (volatile uint16_t * )388U &= ~0x0002;
}

# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$clearOverflow(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$clearOverflow();
#line 57
}
#line 57
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$clearPendingInterrupt(void )
{
  * (volatile uint16_t * )388U &= ~0x0001;
}

# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$clearPendingInterrupt(void ){
#line 33
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$clearPendingInterrupt();
#line 33
}
#line 33
# 65 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$captured(uint16_t time)
#line 65
{
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$clearPendingInterrupt();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$clearOverflow();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captured(time);
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$captured(uint16_t time){
#line 75
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$captured(time);
#line 75
}
#line 75
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$__nesc_unnamed4367 {
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

# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$size_type /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$get(void ){
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







inline static bool /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$isOverflowPending(void ){
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
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )31U |= 0x01 << 1;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectModuleFunc();
#line 78
}
#line 78
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t x)
#line 46
{
#line 46
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$__nesc_unnamed4368 {
#line 46
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t f;
#line 46
    uint16_t t;
  } 
#line 46
  c = { .f = x };

#line 46
  return c.t;
}

#line 61
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$captureControl(uint8_t l_cm)
{
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t x = { 
  .cm = l_cm & 0x03, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 1, 
  .scs = 1, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$CC2int(x);
}

#line 99
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$setControlAsCapture(uint8_t cm)
{
  * (volatile uint16_t * )388U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$captureControl(cm);
}

# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$setControlAsCapture(uint8_t cm){
#line 44
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$setControlAsCapture(cm);
#line 44
}
#line 44
# 119 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$enableEvents(void )
{
  * (volatile uint16_t * )388U |= 0x0010;
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$enableEvents(void ){
#line 46
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$enableEvents();
#line 46
}
#line 46
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
#line 231
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
# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP$State$toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP$state[id] = StateImplP$S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static void CC2420SpiP$WorkingState$toIdle(void ){
#line 56
  StateImplP$State$toIdle(0U);
#line 56
}
#line 56
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$ChipSpiResource$abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP$release = FALSE;
}

# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP$ChipSpiResource$abortRelease(void ){
#line 31
  CC2420SpiP$ChipSpiResource$abortRelease();
#line 31
}
#line 31
# 341 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$ChipSpiResource$releasing(void )
#line 341
{
  if (CC2420TransmitP$abortSpiRelease) {
      CC2420TransmitP$ChipSpiResource$abortRelease();
    }
}

# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP$ChipSpiResource$releasing(void ){
#line 24
  CC2420TransmitP$ChipSpiResource$releasing();
#line 24
}
#line 24
# 205 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void )
#line 205
{
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void ){
#line 46
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted();
#line 46
}
#line 46
# 151 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
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
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 215
{
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x10f7749b8){
#line 55
  switch (arg_0x10f7749b8) {
#line 55
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 55
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$unconfigure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 55
      break;
#line 55
    default:
#line 55
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x10f7749b8);
#line 55
      break;
#line 55
    }
#line 55
}
#line 55
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead;

#line 62
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead];
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 65
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[id] = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
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
      /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void )
#line 50
{
  return /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 108
{
  /* atomic removed: atomic calls only */
#line 109
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_BUSY && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId == id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$dequeue();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$NO_RES;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_GRANTING;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
          }
        else {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$default_owner_id;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted();
          }
        {
          unsigned char __nesc_temp = 
#line 124
          SUCCESS;

#line 124
          return __nesc_temp;
        }
      }
  }
#line 127
  return FAIL;
}

# 114 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$release(uint8_t id)
#line 114
{
#line 114
  return FAIL;
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$release(uint8_t arg_0x10f625430){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  switch (arg_0x10f625430) {
#line 110
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 110
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID);
#line 110
      break;
#line 110
    default:
#line 110
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$release(arg_0x10f625430);
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
inline static error_t CC2420SpiP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
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
# 119 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$enableEvents(void )
{
  * (volatile uint16_t * )392U |= 0x0010;
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$enableEvents(void ){
#line 46
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$enableEvents();
#line 46
}
#line 46
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$clearPendingInterrupt(void )
{
  * (volatile uint16_t * )392U &= ~0x0001;
}

# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$clearPendingInterrupt(void ){
#line 33
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$clearPendingInterrupt();
#line 33
}
#line 33
# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$setEvent(uint16_t x)
{
  * (volatile uint16_t * )408U = x;
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Compare$setEvent(uint16_t time){
#line 30
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$setEvent(time);
#line 30
}
#line 30
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Timer$get(void ){
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
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )408U = /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Timer$get() + x;
}

# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Compare$setEventFromNow(uint16_t delta){
#line 32
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$setEventFromNow(delta);
#line 32
}
#line 32
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Timer$get(void ){
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
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Timer$get();
    uint16_t elapsed = now - t0;

#line 76
    if (elapsed >= dt) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Compare$setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 83
        if (remaining <= 2) {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Compare$setEventFromNow(2);
          }
        else {
#line 86
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Compare$setEvent(now + remaining);
          }
      }
#line 88
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$clearPendingInterrupt();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$enableEvents();
  }
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$size_type dt){
#line 92
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 102 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP$ChipSpiResource$attemptRelease(void )
#line 102
{
  return CC2420SpiP$attemptRelease();
}

# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP$ChipSpiResource$attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 324 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP$SingleChannel$default$getData(uint8_t c)
{
  return FAIL;
}

# 189 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcStreamP$SingleChannel$getData(uint8_t arg_0x10f06b3d0){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  switch (arg_0x10f06b3d0) {
#line 189
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC$0$RSCLIENT:
#line 189
      __nesc_result = Msp430Adc12ImplP$SingleChannel$getData(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID);
#line 189
      break;
#line 189
    default:
#line 189
      __nesc_result = AdcStreamP$SingleChannel$default$getData(arg_0x10f06b3d0);
#line 189
      break;
#line 189
    }
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP$sampleSingle(void )
#line 92
{
  AdcStreamP$SingleChannel$getData(AdcStreamP$client);
}

#line 173
static inline void AdcStreamP$Alarm$fired(void )
#line 173
{
  AdcStreamP$sampleSingle();
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$fired(void ){
#line 67
  AdcStreamP$Alarm$fired();
#line 67
}
#line 67
# 151 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_dt == 0) 
      {
        /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$fired();
      }
    else 
      {
        /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$set_alarm();
      }
  }
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$fired(void ){
#line 67
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$fired();
#line 67
}
#line 67
# 124 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$disableEvents(void )
{
  * (volatile uint16_t * )390U &= ~0x0010;
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$disableEvents(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$disableEvents();
#line 47
}
#line 47
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$fired(void )
{
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$disableEvents();
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$fired();
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$fired(void ){
#line 34
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$fired();
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
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$__nesc_unnamed4369 {
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

# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$makeInput(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t * )54U &= ~(0x01 << 7);
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port67$makeInput(void ){
#line 64
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$makeInput();
#line 64
}
#line 64
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )55U |= 0x01 << 7;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port67$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$selectModuleFunc();
#line 78
}
#line 78
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$makeInput(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t * )54U &= ~(0x01 << 6);
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port66$makeInput(void ){
#line 64
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$makeInput();
#line 64
}
#line 64
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )55U |= 0x01 << 6;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port66$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$selectModuleFunc();
#line 78
}
#line 78
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$makeInput(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t * )54U &= ~(0x01 << 5);
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port65$makeInput(void ){
#line 64
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$makeInput();
#line 64
}
#line 64
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )55U |= 0x01 << 5;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port65$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$selectModuleFunc();
#line 78
}
#line 78
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$makeInput(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t * )54U &= ~(0x01 << 4);
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port64$makeInput(void ){
#line 64
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$makeInput();
#line 64
}
#line 64
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )55U |= 0x01 << 4;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port64$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$selectModuleFunc();
#line 78
}
#line 78
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$makeInput(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t * )54U &= ~(0x01 << 3);
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port63$makeInput(void ){
#line 64
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$makeInput();
#line 64
}
#line 64
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )55U |= 0x01 << 3;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port63$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$selectModuleFunc();
#line 78
}
#line 78
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$makeInput(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t * )54U &= ~(0x01 << 2);
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port62$makeInput(void ){
#line 64
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$makeInput();
#line 64
}
#line 64
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )55U |= 0x01 << 2;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port62$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$selectModuleFunc();
#line 78
}
#line 78
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$makeInput(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t * )54U &= ~(0x01 << 1);
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port61$makeInput(void ){
#line 64
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$makeInput();
#line 64
}
#line 64
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )55U |= 0x01 << 1;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port61$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$selectModuleFunc();
#line 78
}
#line 78
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$makeInput(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t * )54U &= ~(0x01 << 0);
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port60$makeInput(void ){
#line 64
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$makeInput();
#line 64
}
#line 64
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$selectModuleFunc(void )
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t * )55U |= 0x01 << 0;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port60$selectModuleFunc(void ){
#line 78
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$selectModuleFunc();
#line 78
}
#line 78
# 142 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP$configureAdcPin(uint8_t inch)
{

  switch (inch) 
    {
      case 0: Msp430Adc12ImplP$Port60$selectModuleFunc();
#line 147
      Msp430Adc12ImplP$Port60$makeInput();
#line 147
      break;
      case 1: Msp430Adc12ImplP$Port61$selectModuleFunc();
#line 148
      Msp430Adc12ImplP$Port61$makeInput();
#line 148
      break;
      case 2: Msp430Adc12ImplP$Port62$selectModuleFunc();
#line 149
      Msp430Adc12ImplP$Port62$makeInput();
#line 149
      break;
      case 3: Msp430Adc12ImplP$Port63$selectModuleFunc();
#line 150
      Msp430Adc12ImplP$Port63$makeInput();
#line 150
      break;
      case 4: Msp430Adc12ImplP$Port64$selectModuleFunc();
#line 151
      Msp430Adc12ImplP$Port64$makeInput();
#line 151
      break;
      case 5: Msp430Adc12ImplP$Port65$selectModuleFunc();
#line 152
      Msp430Adc12ImplP$Port65$makeInput();
#line 152
      break;
      case 6: Msp430Adc12ImplP$Port66$selectModuleFunc();
#line 153
      Msp430Adc12ImplP$Port66$makeInput();
#line 153
      break;
      case 7: Msp430Adc12ImplP$Port67$selectModuleFunc();
#line 154
      Msp430Adc12ImplP$Port67$makeInput();
#line 154
      break;
    }
}

# 103 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P$HplAdc12$startConversion(void )
#line 103
{
  HplAdc12P$ADC12CTL0 |= 0x0010;
  HplAdc12P$ADC12CTL0 |= 0x0001 + 0x0002;
}

# 128 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP$HplAdc12$startConversion(void ){
#line 128
  HplAdc12P$HplAdc12$startConversion();
#line 128
}
#line 128
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP$TimerA$setMode(int mode){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setMode(mode);
#line 39
}
#line 39
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$CC2int(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t x)
#line 46
{
#line 46
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$__nesc_unnamed4370 {
#line 46
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t f;
#line 46
    uint16_t t;
  } 
#line 46
  c = { .f = x };

#line 46
  return c.t;
}

#line 89
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$setControl(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t x)
{
  * (volatile uint16_t * )356U = /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$CC2int(x);
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430Adc12ImplP$ControlA1$setControl(msp430_compare_control_t control){
#line 35
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$setControl(control);
#line 35
}
#line 35
# 121 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP$startTimerA(void )
{

  msp430_compare_control_t ccSetSHI = { 
  .ccifg = 0, .cov = 0, .out = 1, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };
  msp430_compare_control_t ccResetSHI = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };
  msp430_compare_control_t ccRSOutmod = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 7, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };

  Msp430Adc12ImplP$ControlA1$setControl(ccResetSHI);
  Msp430Adc12ImplP$ControlA1$setControl(ccSetSHI);

  Msp430Adc12ImplP$ControlA1$setControl(ccRSOutmod);
  Msp430Adc12ImplP$TimerA$setMode(MSP430TIMER_UP_MODE);
}

# 119 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$enableEvents(void )
{
  * (volatile uint16_t * )390U |= 0x0010;
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$enableEvents(void ){
#line 46
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$enableEvents();
#line 46
}
#line 46
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$clearPendingInterrupt(void )
{
  * (volatile uint16_t * )390U &= ~0x0001;
}

# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$clearPendingInterrupt(void ){
#line 33
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$clearPendingInterrupt();
#line 33
}
#line 33
# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEvent(uint16_t x)
{
  * (volatile uint16_t * )406U = x;
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEvent(uint16_t time){
#line 30
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEvent(time);
#line 30
}
#line 30
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$get(void ){
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
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )406U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$get() + x;
}

# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEventFromNow(uint16_t delta){
#line 32
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEventFromNow(delta);
#line 32
}
#line 32
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$get(void ){
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
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$get();
    uint16_t elapsed = now - t0;

#line 76
    if (elapsed >= dt) 
      {
        /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 83
        if (remaining <= 2) {
          /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEventFromNow(2);
          }
        else {
#line 86
          /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEvent(now + remaining);
          }
      }
#line 88
    /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$clearPendingInterrupt();
    /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$enableEvents();
  }
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$size_type dt){
#line 92
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 171 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Resource$request(void )
#line 171
{
  return CC2420ControlP$SpiResource$request();
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP$Resource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ControlP$Resource$request();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 203 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Power$startVRegDone(void )
#line 203
{
  CC2420CsmaP$Resource$request();
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP$CC2420Power$startVRegDone(void ){
#line 56
  CC2420CsmaP$CC2420Power$startVRegDone();
#line 56
}
#line 56
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$HplGeneralIO$set(void ){
#line 34
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$set();
#line 34
}
#line 34
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$set(void )
#line 37
{
#line 37
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$HplGeneralIO$set();
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$set(void ){
#line 29
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$set();
#line 29
}
#line 29
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$HplGeneralIO$clr(void ){
#line 39
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$clr();
#line 39
}
#line 39
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$clr(void )
#line 38
{
#line 38
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$HplGeneralIO$clr();
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$clr(void ){
#line 30
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$clr();
#line 30
}
#line 30
# 408 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$StartupTimer$fired(void )
#line 408
{
  if (CC2420ControlP$m_state == CC2420ControlP$S_VREG_STARTING) {
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTED;
      CC2420ControlP$RSTN$clr();
      CC2420ControlP$RSTN$set();
      CC2420ControlP$CC2420Power$startVRegDone();
    }
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHTX);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$getRaw(void )
#line 48
{
#line 48
  return * (volatile uint8_t * )32U & (0x01 << 4);
}

#line 49
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$get(void )
#line 49
{
#line 49
  return /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$getRaw() != 0;
}

# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$HplGeneralIO$get(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$get();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$GeneralIO$get(void )
#line 40
{
#line 40
  return /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$HplGeneralIO$get();
}

# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP$CCA$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$GeneralIO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 463 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$BackoffTimer$fired(void )
#line 463
{
  /* atomic removed: atomic calls only */
#line 464
  {
    switch (CC2420TransmitP$m_state) {

        case CC2420TransmitP$S_SAMPLE_CCA: 


          if (CC2420TransmitP$CCA$get()) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
              CC2420TransmitP$BackoffTimer$start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP$congestionBackoff();
            }
        break;

        case CC2420TransmitP$S_BEGIN_TRANSMIT: 
          case CC2420TransmitP$S_CANCEL: 
            if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
                CC2420TransmitP$attemptSend();
              }
        break;

        case CC2420TransmitP$S_ACK_WAIT: 
          CC2420TransmitP$signalDone(SUCCESS);
        break;

        case CC2420TransmitP$S_SFD: 


          CC2420TransmitP$SFLUSHTX$strobe();
        CC2420TransmitP$CaptureSFD$captureRisingEdge();
        CC2420TransmitP$releaseSpiResource();
        CC2420TransmitP$signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$fired(void ){
#line 67
  CC2420TransmitP$BackoffTimer$fired();
#line 67
  CC2420ControlP$StartupTimer$fired();
#line 67
}
#line 67
# 151 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_dt == 0) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$fired();
      }
    else 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$set_alarm();
      }
  }
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$fired(void ){
#line 67
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$fired();
#line 67
}
#line 67
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Compare$fired(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Alarm$fired();
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$fired(void ){
#line 34
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430Compare$fired();
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
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$__nesc_unnamed4371 {
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

# 259 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(am_id_t id, 
message_t *msg)
#line 260
{
}

# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(am_id_t arg_0x10f18d1a0, message_t * msg){
#line 88
    CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(arg_0x10f18d1a0, msg);
#line 88
}
#line 88
# 207 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t *msg)
#line 207
{
  CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(message_t * msg){
#line 88
  CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(msg);
#line 88
}
#line 88
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t CC2420CsmaP$Random$rand16(void ){
#line 41
  unsigned int __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 231 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime)
#line 231
{
  CC2420TransmitP$myCongestionBackoff = backoffTime + 1;
}

# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420TransmitP$RadioBackoff$setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 223 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg)
#line 223
{
  CC2420CsmaP$SubBackoff$setCongestionBackoff(CC2420CsmaP$Random$rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP$RadioBackoff$requestCongestionBackoff(msg);
}

# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP$SubBackoff$requestCongestionBackoff(msg);
#line 88
}
#line 88
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = CC2420SpiP$Resource$immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t CC2420SpiP$WorkingState$requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP$State$requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 111 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$isOwner(uint8_t id)
#line 111
{
#line 111
  return FAIL;
}

# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$isOwner(uint8_t arg_0x10f625430){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  switch (arg_0x10f625430) {
#line 118
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 118
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID);
#line 118
      break;
#line 118
    default:
#line 118
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$isOwner(arg_0x10f625430);
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
# 77 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$isOwner(uint8_t id)
#line 77
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$isOwner(id);
}

# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP$SpiResource$isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$default$getConfig(uint8_t id)
#line 115
{
  return &msp430_spi_default_config;
}

# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
inline static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$getConfig(uint8_t arg_0x10f6246a8){
#line 39
  union __nesc_unnamed4283 *__nesc_result;
#line 39

#line 39
    __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$default$getConfig(arg_0x10f6246a8);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
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
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 213
{
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x10f7749b8){
#line 49
  switch (arg_0x10f7749b8) {
#line 49
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$configure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x10f7749b8);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 210 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$immediateRequested(void )
#line 210
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release();
}

# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested(void ){
#line 81
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$immediateRequested();
#line 81
}
#line 81
# 203 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 203
{
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x10f7777e8){
#line 51
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x10f7777e8);
#line 51
}
#line 51
# 90 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$immediateRequest(uint8_t id)
#line 90
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 92
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_IMM_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 97
        FAIL;

#line 97
        return __nesc_temp;
      }
  }
#line 99
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested();
  if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId == id) {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 104
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED;
  return FAIL;
}

# 113 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$immediateRequest(uint8_t id)
#line 113
{
#line 113
  return FAIL;
}

# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$immediateRequest(uint8_t arg_0x10f625430){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  switch (arg_0x10f625430) {
#line 87
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 87
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID);
#line 87
      break;
#line 87
    default:
#line 87
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$immediateRequest(arg_0x10f625430);
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
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$immediateRequest(uint8_t id)
#line 69
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$immediateRequest(id);
}

# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
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

#line 345
static inline void HplMsp430Usart0P$Usart$clrIntr(void )
#line 345
{
  HplMsp430Usart0P$IFG1 &= ~((1 << 7) | (1 << 6));
}









static inline void HplMsp430Usart0P$Usart$disableIntr(void )
#line 357
{
  HplMsp430Usart0P$IE1 &= ~((1 << 7) | (1 << 6));
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 207 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void )
#line 207
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release();
}

# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void ){
#line 73
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested();
#line 73
}
#line 73
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[id] != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead = id;
          }
        else {
#line 78
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail] = id;
          }
#line 79
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail = id;
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
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 201 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 201
{
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x10f7777e8){
#line 43
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x10f7777e8);
#line 43
}
#line 43
# 77 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 77
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 79
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 84
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$enqueue(id);

#line 84
        return __nesc_temp;
      }
  }
#line 86
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested();
  return SUCCESS;
}

# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(uint8_t id)
#line 112
{
#line 112
  return FAIL;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$request(uint8_t arg_0x10f625430){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  switch (arg_0x10f625430) {
#line 78
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 78
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(arg_0x10f625430);
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
inline static error_t CC2420SpiP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_STXONCCA);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP$STXON$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_STXON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP$SNOP$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SNOP);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 181 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$__nesc_unnamed4372 {
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
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$__nesc_unnamed4373 {
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
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$__nesc_unnamed4374 {
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
# 120 "RadioSenseToLedsC.nc"
static inline void RadioSenseToLedsC$AMSend$sendDone(message_t *bufPtr, error_t error)
#line 120
{
  if (&RadioSenseToLedsC$packet == bufPtr) {
      RadioSenseToLedsC$locked = FALSE;
    }
}

# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  RadioSenseToLedsC$AMSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 207 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x10fbe9990, message_t * msg, error_t error){
#line 89
  switch (arg_0x10fbe9990) {
#line 89
    case 0U:
#line 89
      /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x10fbe9990, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg, FAIL);
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x10fbe8c70, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = CC2420ActiveMessageP$AMSend$send(arg_0x10fbe8c70, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 152 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg)
#line 152
{
  return __nesc_ntoh_leuint8(CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length.nxdata) - CC2420_SIZE;
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 67
  unsigned int __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 122 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg)
#line 122
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 124
  return __nesc_ntoh_leuint8(header->type.nxdata);
}

# 136 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = CC2420ActiveMessageP$AMPacket$type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 160 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void )
#line 160
{
  return 28;
}

# 287 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline uint16_t CC2420ControlP$CC2420Config$getPanAddr(void )
#line 287
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 288
    {
      unsigned int __nesc_temp = 
#line 288
      CC2420ControlP$m_pan;

      {
#line 288
        __nesc_atomic_end(__nesc_atomic); 
#line 288
        return __nesc_temp;
      }
    }
#line 290
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void ){
#line 70
  unsigned int __nesc_result;
#line 70

#line 70
  __nesc_result = CC2420ControlP$CC2420Config$getPanAddr();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 253 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 253
{
}

# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
inline static void CC2420ActiveMessageP$SendNotifier$aboutToSend(am_id_t arg_0x10f18e630, am_addr_t dest, message_t * msg){
#line 59
    CC2420ActiveMessageP$SendNotifier$default$aboutToSend(arg_0x10f18e630, dest, msg);
#line 59
}
#line 59
# 297 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/nesc/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

#line 286
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

#line 327
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 512 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca)
#line 512
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 513
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 515
            ECANCEL;

            {
#line 515
              __nesc_atomic_end(__nesc_atomic); 
#line 515
              return __nesc_temp;
            }
          }
        }
#line 518
      if (CC2420TransmitP$m_state != CC2420TransmitP$S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 519
            FAIL;

            {
#line 519
              __nesc_atomic_end(__nesc_atomic); 
#line 519
              return __nesc_temp;
            }
          }
        }
#line 522
      CC2420TransmitP$m_state = CC2420TransmitP$S_LOAD;
      CC2420TransmitP$m_cca = cca;
      CC2420TransmitP$m_msg = p_msg;
      CC2420TransmitP$totalCcaChecks = 0;
    }
#line 526
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
      CC2420TransmitP$loadTXFIFO();
    }

  return SUCCESS;
}

#line 172
static inline error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca)
#line 172
{
  return CC2420TransmitP$send(p_msg, useCca);
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP$CC2420Transmit$send(message_t * p_msg, bool useCca){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TransmitP$Send$send(p_msg, useCca);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 263 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCca(am_id_t id, 
message_t *msg)
#line 264
{
}

# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP$RadioBackoff$requestCca(am_id_t arg_0x10f18d1a0, message_t * msg){
#line 95
    CC2420ActiveMessageP$RadioBackoff$default$requestCca(arg_0x10f18d1a0, msg);
#line 95
}
#line 95
# 211 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubBackoff$requestCca(message_t *msg)
#line 211
{

  CC2420ActiveMessageP$RadioBackoff$requestCca(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$RadioBackoff$requestCca(message_t * msg){
#line 95
  CC2420ActiveMessageP$SubBackoff$requestCca(msg);
#line 95
}
#line 95
# 111 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP$State$forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP$state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static void CC2420CsmaP$SplitControlState$forceState(uint8_t reqState){
#line 51
  StateImplP$State$forceState(1U, reqState);
#line 51
}
#line 51
#line 66
inline static bool CC2420CsmaP$SplitControlState$isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP$State$isState(1U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420CsmaP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
#line 42
inline static cc2420_header_t * CC2420CsmaP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 122 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len)
#line 122
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 124
  cc2420_header_t *header = CC2420CsmaP$CC2420PacketBody$getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP$CC2420PacketBody$getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    {
      if (!CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 129
            FAIL;

            {
#line 129
              __nesc_atomic_end(__nesc_atomic); 
#line 129
              return __nesc_temp;
            }
          }
        }
#line 132
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_TRANSMITTING);
      CC2420CsmaP$m_msg = p_msg;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_hton_leuint8(header->length.nxdata, len + CC2420_SIZE);
  (__nesc_temp42 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (1 << IEEE154_FCF_ACK_REQ)));
  (__nesc_temp43 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));

  __nesc_hton_int8(metadata->ack.nxdata, FALSE);
  __nesc_hton_uint8(metadata->rssi.nxdata, 0);
  __nesc_hton_uint8(metadata->lqi.nxdata, 0);
  __nesc_hton_int8(metadata->timesync.nxdata, FALSE);
  __nesc_hton_uint32(metadata->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP$ccaOn = TRUE;
  CC2420CsmaP$RadioBackoff$requestCca(CC2420CsmaP$m_msg);

  CC2420CsmaP$CC2420Transmit$send(CC2420CsmaP$m_msg, CC2420CsmaP$ccaOn);
  return SUCCESS;
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420CsmaP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP$Send$send(message_t *msg, uint8_t len)
#line 61
{
  __nesc_hton_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.nxdata, 0x3f);
  return CC2420TinyosNetworkP$SubSend$send(msg, len);
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t UniqueSendP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420TinyosNetworkP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t UniqueSendP$State$requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP$State$requestState(2U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP$Send$send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  ;
  if (UniqueSendP$State$requestState(UniqueSendP$S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP$CC2420PacketBody$getHeader(msg)->dsn.nxdata, UniqueSendP$localSendId++);

      if ((error = UniqueSendP$SubSend$send(msg, len)) != SUCCESS) {
          UniqueSendP$State$toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t CC2420ActiveMessageP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = UniqueSendP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_TXCTRL, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP$SpiPacket$send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$send(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID, txBuf, rxBuf, len);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP$SpiByte$write(uint8_t tx){
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
# 126 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline bool StateImplP$State$isIdle(uint8_t id)
#line 126
{
  return StateImplP$State$isState(id, StateImplP$S_IDLE);
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static bool CC2420SpiP$WorkingState$isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP$State$isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 214 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP$m_addr = addr;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$SpiPacket$send(data, (void *)0, len);

  return status;
}

# 82 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP$Fifo$write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
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
# 94 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP$NonTinyosReceive$default$receive(uint8_t networkId, message_t *msg, void *payload, uint8_t len)
#line 94
{
  return msg;
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP$NonTinyosReceive$receive(uint8_t arg_0x10fb8ed08, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = CC2420TinyosNetworkP$NonTinyosReceive$default$receive(arg_0x10fb8ed08, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 246 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 246
{
  return msg;
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP$Snoop$receive(am_id_t arg_0x10f1917c0, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = CC2420ActiveMessageP$Snoop$default$receive(arg_0x10f1917c0, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 310 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/nesc/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 68 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0Off(void )
#line 68
{
  LedsP$Led0$set();
  ;
#line 70
  ;
}

# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RadioSenseToLedsC$Leds$led0Off(void ){
#line 50
  LedsP$Leds$led0Off();
#line 50
}
#line 50
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$clr(void )
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t * )49U &= ~(0x01 << 4);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
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
inline static void RadioSenseToLedsC$Leds$led0On(void ){
#line 45
  LedsP$Leds$led0On();
#line 45
}
#line 45
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1Off(void )
#line 83
{
  LedsP$Led1$set();
  ;
#line 85
  ;
}

# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RadioSenseToLedsC$Leds$led1Off(void ){
#line 66
  LedsP$Leds$led1Off();
#line 66
}
#line 66
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$clr(void )
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t * )49U &= ~(0x01 << 5);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
}

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
inline static void RadioSenseToLedsC$Leds$led1On(void ){
#line 61
  LedsP$Leds$led1On();
#line 61
}
#line 61
# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led2Off(void )
#line 98
{
  LedsP$Led2$set();
  ;
#line 100
  ;
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RadioSenseToLedsC$Leds$led2Off(void ){
#line 83
  LedsP$Leds$led2Off();
#line 83
}
#line 83
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$clr(void )
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t * )49U &= ~(0x01 << 6);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
}

# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$clr(void ){
#line 39
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$clr();
#line 39
}
#line 39
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$clr(void )
#line 38
{
#line 38
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$HplGeneralIO$clr();
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$clr(void ){
#line 30
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$2$GeneralIO$clr();
#line 30
}
#line 30
# 93 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led2On(void )
#line 93
{
  LedsP$Led2$clr();
  ;
#line 95
  ;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RadioSenseToLedsC$Leds$led2On(void ){
#line 78
  LedsP$Leds$led2On();
#line 78
}
#line 78
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$toggle(void )
#line 47
{
#line 47
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 47
    * (volatile uint8_t * )49U ^= 0x01 << 5;
#line 47
    __nesc_atomic_end(__nesc_atomic); }
}

# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$toggle(void ){
#line 44
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$toggle();
#line 44
}
#line 44
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$toggle(void )
#line 39
{
#line 39
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$HplGeneralIO$toggle();
}

# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$toggle(void ){
#line 31
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$1$GeneralIO$toggle();
#line 31
}
#line 31
# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1Toggle(void )
#line 88
{
  LedsP$Led1$toggle();
  ;
#line 90
  ;
}

# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RadioSenseToLedsC$Leds$led1Toggle(void ){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 97 "RadioSenseToLedsC.nc"
static inline message_t *RadioSenseToLedsC$Receive$receive(message_t *bufPtr, 
void *payload, uint8_t len)
#line 98
{
  RadioSenseToLedsC$Leds$led1Toggle();
  if (len != sizeof(radio_sense_msg_t )) {
#line 100
      return bufPtr;
    }
  else 
#line 101
    {
      radio_sense_msg_t *rsm = (radio_sense_msg_t *)payload;
      uint16_t val = __nesc_ntoh_uint16(rsm->data.nxdata);

#line 104
      if (val & 0x0004) {
        RadioSenseToLedsC$Leds$led2On();
        }
      else {
#line 107
        RadioSenseToLedsC$Leds$led2Off();
        }
#line 108
      if (val & 0x0002) {
        RadioSenseToLedsC$Leds$led1On();
        }
      else {
#line 111
        RadioSenseToLedsC$Leds$led1Off();
        }
#line 112
      if (val & 0x0001) {
        RadioSenseToLedsC$Leds$led0On();
        }
      else {
#line 115
        RadioSenseToLedsC$Leds$led0Off();
        }
#line 116
      return bufPtr;
    }
}

# 242 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 242
{
  return msg;
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP$Receive$receive(am_id_t arg_0x10f193c18, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x10f193c18) {
#line 67
    case 7:
#line 67
      __nesc_result = RadioSenseToLedsC$Receive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = CC2420ActiveMessageP$Receive$default$receive(arg_0x10f193c18, msg, payload, len);
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
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 61
{
  return ActiveMessageAddressC$amAddress();
}

# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void ){
#line 50
  unsigned int __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 93 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_addr_t CC2420ActiveMessageP$AMPacket$address(void )
#line 93
{
  return CC2420ActiveMessageP$ActiveMessageAddress$amAddress();
}

#line 117
static inline bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 117
{
  return CC2420ActiveMessageP$AMPacket$destination(amsg) == CC2420ActiveMessageP$AMPacket$address() || 
  CC2420ActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ActiveMessageP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 176 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 176
{

  if (! __nesc_ntoh_int8(CC2420ActiveMessageP$CC2420PacketBody$getMetadata(msg)->crc.nxdata)) {
      return msg;
    }

  if (CC2420ActiveMessageP$AMPacket$isForMe(msg)) {
      return CC2420ActiveMessageP$Receive$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len);
    }
  else {
      return CC2420ActiveMessageP$Snoop$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len);
    }
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 141 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn)
#line 141
{
  uint8_t element = UniqueReceiveP$recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    {
      if (element == UniqueReceiveP$INVALID_ELEMENT || UniqueReceiveP$writeIndex == element) {

          element = UniqueReceiveP$writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP$receivedMessages[element].source = msgSource;
      UniqueReceiveP$receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP$writeIndex++;
          UniqueReceiveP$writeIndex %= 4;
        }
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
}


static inline message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len)
#line 162
{
  return msg;
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP$DuplicateReceive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = UniqueReceiveP$DuplicateReceive$default$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 115
{
  int i;

#line 117
  UniqueReceiveP$recycleSourceElement = UniqueReceiveP$INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP$receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP$receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 124
                    TRUE;

                    {
#line 124
                      __nesc_atomic_end(__nesc_atomic); 
#line 124
                      return __nesc_temp;
                    }
                  }
                }
#line 127
              UniqueReceiveP$recycleSourceElement = i;
            }
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueReceiveP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len)
#line 86
{
  uint16_t msgSource = __nesc_ntoh_leuint16(UniqueReceiveP$CC2420PacketBody$getHeader(msg)->src.nxdata);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP$CC2420PacketBody$getHeader(msg)->dsn.nxdata);

  if (UniqueReceiveP$hasSeen(msgSource, msgDsn)) {
      ;

      return UniqueReceiveP$DuplicateReceive$receive(msg, payload, len);
    }
  else {
      ;

      UniqueReceiveP$insert(msgSource, msgDsn);
      return UniqueReceiveP$Receive$receive(msg, payload, len);
    }
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = UniqueReceiveP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 84
{
  if (__nesc_ntoh_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.nxdata) == 0x3f) {
      return CC2420TinyosNetworkP$Receive$receive(msg, payload, len);
    }
  else {
      return CC2420TinyosNetworkP$NonTinyosReceive$receive(__nesc_ntoh_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.nxdata), msg, payload, len);
    }
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = CC2420TinyosNetworkP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420ControlP$CC2420Config$getShortAddr();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 332 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void )
#line 332
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 333
    {
      unsigned char __nesc_temp = 
#line 333
      CC2420ControlP$addressRecognition;

      {
#line 333
        __nesc_atomic_end(__nesc_atomic); 
#line 333
        return __nesc_temp;
      }
    }
#line 335
    __nesc_atomic_end(__nesc_atomic); }
}

# 86 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void ){
#line 86
  unsigned char __nesc_result;
#line 86

#line 86
  __nesc_result = CC2420ControlP$CC2420Config$isAddressRecognitionEnabled();
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 452 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP$passesAddressCheck(message_t *msg)
#line 452
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(msg);

  if (!CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled()) {
      return TRUE;
    }

  return __nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP$CC2420Config$getShortAddr()
   || __nesc_ntoh_leuint16(header->dest.nxdata) == AM_BROADCAST_ADDR;
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 330 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$receiveDone_task$runTask(void )
#line 330
{
  cc2420_metadata_t *metadata = CC2420ReceiveP$CC2420PacketBody$getMetadata(CC2420ReceiveP$m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.nxdata);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.nxdata, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.nxdata, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.nxdata, buf[length - 1]);

  if (CC2420ReceiveP$passesAddressCheck(CC2420ReceiveP$m_p_rx_buf) && length >= CC2420_SIZE) {
      CC2420ReceiveP$m_p_rx_buf = CC2420ReceiveP$Receive$receive(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 346
    CC2420ReceiveP$receivingPacket = FALSE;
#line 346
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP$waitForNextPacket();
}

# 178 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline uint8_t CC2420SpiP$Resource$isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP$m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP$SpiResource$isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = CC2420SpiP$Resource$isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
#line 87
inline static error_t CC2420ReceiveP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = CC2420SpiP$Resource$immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
#line 78
inline static error_t CC2420ReceiveP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP$grant$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420SpiP$grant);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 184 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$SpiResource$granted(void )
#line 184
{
  CC2420SpiP$grant$postTask();
}

# 119 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$default$granted(uint8_t id)
#line 119
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$granted(uint8_t arg_0x10f629120){
#line 92
  switch (arg_0x10f629120) {
#line 92
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 92
      CC2420SpiP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$default$granted(arg_0x10f629120);
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
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id)
#line 199
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x10f778528){
#line 92
  switch (arg_0x10f778528) {
#line 92
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 92
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$granted(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x10f778528);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 187 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId;
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId);
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$granted(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId);
}

# 190 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$default$sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 190
{
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$sendDone(uint8_t arg_0x10f626650, uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 71
  switch (arg_0x10f626650) {
#line 71
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 71
      CC2420SpiP$SpiPacket$sendDone(txBuf, rxBuf, len, error);
#line 71
      break;
#line 71
    default:
#line 71
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$default$sendDone(arg_0x10f626650, txBuf, rxBuf, len, error);
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

# 451 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 452
{
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP$CSN$set(void ){
#line 29
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$set();
#line 29
}
#line 29
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP$receiveDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420ReceiveP$receiveDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 353 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg)
#line 353
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP$m_msg) {
      ack_header = CC2420TransmitP$CC2420PacketBody$getHeader(ack_msg);
      msg_header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);


      if (CC2420TransmitP$m_state == CC2420TransmitP$S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.nxdata) == __nesc_ntoh_leuint8(ack_header->dsn.nxdata)) {
          CC2420TransmitP$BackoffTimer$stop();

          msg_metadata = CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.nxdata);

          __nesc_hton_int8(msg_metadata->ack.nxdata, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.nxdata, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.nxdata, ack_buf[length] & 0x7f);
          CC2420TransmitP$signalDone(SUCCESS);
        }
    }
}

# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP$CC2420Receive$receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP$CC2420Receive$receive(type, message);
#line 63
}
#line 63
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP$PacketTimeStamp$clear(message_t * msg){
#line 59
  CC2420PacketP$PacketTimeStamp32khz$clear(msg);
#line 59
}
#line 59








inline static void CC2420ReceiveP$PacketTimeStamp$set(message_t * msg, CC2420ReceiveP$PacketTimeStamp$size_type value){
#line 67
  CC2420PacketP$PacketTimeStamp32khz$set(msg, value);
#line 67
}
#line 67
# 209 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP$SpiPacket$send((void *)0, data, len);
}

# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP$Fifo$continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP$Fifo$beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP$CSN$clr(void ){
#line 30
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$clr();
#line 30
}
#line 30
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP$SACK$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SACK);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 359 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void )
#line 359
{
  /* atomic removed: atomic calls only */
#line 360
  {
    unsigned char __nesc_temp = 
#line 360
    CC2420ControlP$hwAutoAckDefault;

#line 360
    return __nesc_temp;
  }
}

# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420ControlP$CC2420Config$isHwAutoAckDefault();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 366 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void )
#line 366
{
  /* atomic removed: atomic calls only */
#line 367
  {
    unsigned char __nesc_temp = 
#line 367
    CC2420ControlP$autoAckEnabled;

#line 367
    return __nesc_temp;
  }
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420ControlP$CC2420Config$isAutoAckEnabled();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$getRaw(void )
#line 48
{
#line 48
  return * (volatile uint8_t * )32U & (0x01 << 0);
}

#line 49
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$get(void )
#line 49
{
#line 49
  return /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$getRaw() != 0;
}

# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$6$HplGeneralIO$get(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$get();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$6$GeneralIO$get(void )
#line 40
{
#line 40
  return /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$6$HplGeneralIO$get();
}

# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP$FIFOP$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$6$GeneralIO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$getRaw(void )
#line 48
{
#line 48
  return * (volatile uint8_t * )32U & (0x01 << 3);
}

#line 49
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$get(void )
#line 49
{
#line 49
  return /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$getRaw() != 0;
}

# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC$5$HplGeneralIO$get(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$get();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC$5$GeneralIO$get(void )
#line 40
{
#line 40
  return /*HplCC2420PinsC.FIFOM*/Msp430GpioC$5$HplGeneralIO$get();
}

# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP$FIFO$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC$5$GeneralIO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 199 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 200
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

#line 204
  CC2420ReceiveP$rxFrameLength = buf[0];

  switch (CC2420ReceiveP$m_state) {

      case CC2420ReceiveP$S_RX_LENGTH: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_FCF;
      if (CC2420ReceiveP$rxFrameLength + 1 > CC2420ReceiveP$m_bytes_left) {

          CC2420ReceiveP$flush();
        }
      else {
          if (!CC2420ReceiveP$FIFO$get() && !CC2420ReceiveP$FIFOP$get()) {
              CC2420ReceiveP$m_bytes_left -= CC2420ReceiveP$rxFrameLength + 1;
            }

          if (CC2420ReceiveP$rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP$rxFrameLength > 0) {
                  if (CC2420ReceiveP$rxFrameLength > CC2420ReceiveP$SACK_HEADER_LENGTH) {

                      CC2420ReceiveP$RXFIFO$continueRead(buf + 1, CC2420ReceiveP$SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_PAYLOAD;
                      CC2420ReceiveP$RXFIFO$continueRead(buf + 1, CC2420ReceiveP$rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP$receivingPacket = FALSE;
                  CC2420ReceiveP$CSN$set();
                  CC2420ReceiveP$SpiResource$release();
                  CC2420ReceiveP$waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP$flush();
            }
        }
      break;

      case CC2420ReceiveP$S_RX_FCF: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_PAYLOAD;










      if (CC2420ReceiveP$CC2420Config$isAutoAckEnabled() && !CC2420ReceiveP$CC2420Config$isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
#line 259
          header->fcf.nxdata) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP$CC2420Config$getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.nxdata) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP$CSN$set();
              CC2420ReceiveP$CSN$clr();
              CC2420ReceiveP$SACK$strobe();
              CC2420ReceiveP$CSN$set();
              CC2420ReceiveP$CSN$clr();
              CC2420ReceiveP$RXFIFO$beginRead(buf + 1 + CC2420ReceiveP$SACK_HEADER_LENGTH, 
              CC2420ReceiveP$rxFrameLength - CC2420ReceiveP$SACK_HEADER_LENGTH);
              return;
            }
        }


      CC2420ReceiveP$RXFIFO$continueRead(buf + 1 + CC2420ReceiveP$SACK_HEADER_LENGTH, 
      CC2420ReceiveP$rxFrameLength - CC2420ReceiveP$SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP$S_RX_PAYLOAD: 
        CC2420ReceiveP$CSN$set();

      if (!CC2420ReceiveP$m_missed_packets) {

          CC2420ReceiveP$SpiResource$release();
        }

      if (CC2420ReceiveP$m_timestamp_size) {
          if (CC2420ReceiveP$rxFrameLength > 10) {
              CC2420ReceiveP$PacketTimeStamp$set(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$m_timestamp_head]);
              CC2420ReceiveP$m_timestamp_head = (CC2420ReceiveP$m_timestamp_head + 1) % CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;
              CC2420ReceiveP$m_timestamp_size--;
            }
        }
      else 
#line 294
        {
          CC2420ReceiveP$PacketTimeStamp$clear(CC2420ReceiveP$m_p_rx_buf);
        }



      if (buf[CC2420ReceiveP$rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 302
          CC2420ReceiveP$CC2420Receive$receive(type, CC2420ReceiveP$m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP$receiveDone_task$postTask();
              return;
            }
        }

      CC2420ReceiveP$waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP$receivingPacket = FALSE;
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$SpiResource$release();
      break;
    }
}

# 370 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP$Fifo$readDone(uint8_t arg_0x10f509ca8, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x10f509ca8) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP$TXFIFO$readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP$RXFIFO$readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP$Fifo$default$readDone(arg_0x10f509ca8, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHRX);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 255 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(am_id_t id, 
message_t *msg)
#line 256
{
}

# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(am_id_t arg_0x10f18d1a0, message_t * msg){
#line 81
    CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(arg_0x10f18d1a0, msg);
#line 81
}
#line 81
# 202 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t *msg)
#line 202
{
  CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$RadioBackoff$requestInitialBackoff(message_t * msg){
#line 81
  CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(msg);
#line 81
}
#line 81
# 223 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime)
#line 223
{
  CC2420TransmitP$myInitialBackoff = backoffTime + 1;
}

# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420TransmitP$RadioBackoff$setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 216 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg)
#line 216
{
  CC2420CsmaP$SubBackoff$setInitialBackoff(CC2420CsmaP$Random$rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP$RadioBackoff$requestInitialBackoff(msg);
}

# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP$SubBackoff$requestInitialBackoff(msg);
#line 81
}
#line 81
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$sendDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$sendDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 198 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err)
#line 198
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 199
    CC2420CsmaP$sendErr = err;
#line 199
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP$sendDone_task$postTask();
}

# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP$Send$sendDone(message_t * p_msg, error_t error){
#line 73
  CC2420CsmaP$CC2420Transmit$sendDone(p_msg, error);
#line 73
}
#line 73
# 419 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 420
{

  CC2420TransmitP$CSN$set();
  if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 424
      {
        CC2420TransmitP$CSN$clr();
        CC2420TransmitP$SFLUSHTX$strobe();
        CC2420TransmitP$CSN$set();
      }
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
      CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
    }
  else {
#line 433
    if (!CC2420TransmitP$m_cca) {
        /* atomic removed: atomic calls only */
#line 434
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP$attemptSend();
      }
    else {
        CC2420TransmitP$releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 441
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_SAMPLE_CCA;
        }

        CC2420TransmitP$RadioBackoff$requestInitialBackoff(CC2420TransmitP$m_msg);
        CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myInitialBackoff);
      }
    }
}

# 322 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 322
{
}

# 373 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP$Fifo$writeDone(uint8_t arg_0x10f509ca8, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x10f509ca8) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP$TXFIFO$writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP$RXFIFO$writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP$Fifo$default$writeDone(arg_0x10f509ca8, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_RXCTRL1, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_IOCFG0, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP$SXOSCON$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SXOSCON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 79 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port14$enable(void )
#line 79
{
#line 79
  P1IE |= 1 << 4;
}

# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$enable(void ){
#line 31
  HplMsp430InterruptP$Port14$enable();
#line 31
}
#line 31
# 131 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port14$edge(bool l2h)
#line 131
{
  /* atomic removed: atomic calls only */
#line 132
  {
    if (l2h) {
#line 133
      P1IES &= ~(1 << 4);
      }
    else {
#line 134
      P1IES |= 1 << 4;
      }
  }
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$edge(bool low_to_high){
#line 56
  HplMsp430InterruptP$Port14$edge(low_to_high);
#line 56
}
#line 56
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port14$clear(void )
#line 95
{
#line 95
  P1IFG &= ~(1 << 4);
}

# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$clear(void ){
#line 41
  HplMsp430InterruptP$Port14$clear();
#line 41
}
#line 41
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port14$disable(void )
#line 87
{
#line 87
  P1IE &= ~(1 << 4);
}

# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$disable(void ){
#line 36
  HplMsp430InterruptP$Port14$disable();
#line 36
}
#line 36
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$disable(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$clear();
  }
  return SUCCESS;
}

#line 41
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$enable(bool rising)
#line 41
{
  /* atomic removed: atomic calls only */
#line 42
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$edge(rising);
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$enable();
  }
  return SUCCESS;
}

static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$enableRisingEdge(void )
#line 50
{
  return /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$enable(TRUE);
}

# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$enableRisingEdge();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_IOCFG1, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 207 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$startOscillator(void )
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 210
            FAIL;

            {
#line 210
              __nesc_atomic_end(__nesc_atomic); 
#line 210
              return __nesc_temp;
            }
          }
        }
#line 213
      CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTING;
      CC2420ControlP$IOCFG1$write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP$InterruptCCA$enableRisingEdge();
      CC2420ControlP$SXOSCON$strobe();

      CC2420ControlP$IOCFG0$write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP$writeFsctrl();
      CC2420ControlP$writeMdmctrl0();

      CC2420ControlP$RXCTRL1$write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    }
#line 233
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$startOscillator(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP$CC2420Power$startOscillator();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 207 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$Resource$granted(void )
#line 207
{
  CC2420CsmaP$CC2420Power$startOscillator();
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420ControlP$Resource$granted(void ){
#line 92
  CC2420CsmaP$Resource$granted();
#line 92
}
#line 92
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$CSN$clr(void ){
#line 30
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$clr();
#line 30
}
#line 30
# 390 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$SpiResource$granted(void )
#line 390
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$Resource$granted();
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP$syncDone$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420ControlP$syncDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SyncResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$CSN$set(void ){
#line 29
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$set();
#line 29
}
#line 29
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP$SRXON$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SRXON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420ControlP$SRFOFF$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SRFOFF);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 376 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$SyncResource$granted(void )
#line 376
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$SRFOFF$strobe();
  CC2420ControlP$writeFsctrl();
  CC2420ControlP$writeMdmctrl0();
  CC2420ControlP$writeId();
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$SRXON$strobe();
  CC2420ControlP$CSN$set();
  CC2420ControlP$SyncResource$release();
  CC2420ControlP$syncDone$postTask();
}

#line 509
static inline void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data)
#line 509
{
}

# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static void CC2420ControlP$ReadRssi$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val){
#line 63
  CC2420ControlP$ReadRssi$default$readDone(result, val);
#line 63
}
#line 63
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$RssiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ControlC.RssiResource*/CC2420SpiC$2$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 287 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP$SpiByte$write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP$SpiByte$write(0) << 8;
  *data |= CC2420SpiP$SpiByte$write(0);

  return status;
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *data){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420SpiP$Reg$read(CC2420_RSSI, data);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 395 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$RssiResource$granted(void )
#line 395
{
  uint16_t data;

#line 397
  CC2420ControlP$CSN$clr();
  CC2420ControlP$RSSI$read(&data);
  CC2420ControlP$CSN$set();

  CC2420ControlP$RssiResource$release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP$ReadRssi$readDone(SUCCESS, data);
}

# 381 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$SpiResource$granted(void )
#line 381
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 384
    {
      cur_state = CC2420TransmitP$m_state;
    }
#line 386
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP$S_LOAD: 
        CC2420TransmitP$loadTXFIFO();
      break;

      case CC2420TransmitP$S_BEGIN_TRANSMIT: 
        CC2420TransmitP$attemptSend();
      break;

      case CC2420TransmitP$S_CANCEL: 
        CC2420TransmitP$CSN$clr();
      CC2420TransmitP$SFLUSHTX$strobe();
      CC2420TransmitP$CSN$set();
      CC2420TransmitP$releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 402
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
        }
#line 404
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP$releaseSpiResource();
      break;
    }
}

# 190 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$SpiResource$granted(void )
#line 190
{
  CC2420ReceiveP$receive();
}

# 367 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$Resource$default$granted(uint8_t id)
#line 367
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420SpiP$Resource$granted(uint8_t arg_0x10f50aa68){
#line 92
  switch (arg_0x10f50aa68) {
#line 92
    case /*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID:
#line 92
      CC2420ControlP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID:
#line 92
      CC2420ControlP$SyncResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.RssiResource*/CC2420SpiC$2$CLIENT_ID:
#line 92
      CC2420ControlP$RssiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID:
#line 92
      CC2420TransmitP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID:
#line 92
      CC2420ReceiveP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      CC2420SpiP$Resource$default$granted(arg_0x10f50aa68);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 358 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$grant$runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP$m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP$Resource$granted(holder);
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_FSCTRL, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_MDMCTRL0, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP$PANID$write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP$Ram$write(CC2420_RAM_PANID, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 196 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error)
#line 196
{
}

# 351 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Config$syncDone(error_t error)
#line 351
{
}

# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP$CC2420Config$syncDone(error_t error){
#line 53
  CC2420ReceiveP$CC2420Config$syncDone(error);
#line 53
  CC2420ActiveMessageP$CC2420Config$syncDone(error);
#line 53
}
#line 53
# 446 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$syncDone$runTask(void )
#line 446
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 447
    CC2420ControlP$m_sync_busy = FALSE;
#line 447
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$CC2420Config$syncDone(SUCCESS);
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SyncResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 300 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Config$sync(void )
#line 300
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 301
    {
      if (CC2420ControlP$m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 303
            FAIL;

            {
#line 303
              __nesc_atomic_end(__nesc_atomic); 
#line 303
              return __nesc_temp;
            }
          }
        }
#line 306
      CC2420ControlP$m_sync_busy = TRUE;
      if (CC2420ControlP$m_state == CC2420ControlP$S_XOSC_STARTED) {
          CC2420ControlP$SyncResource$request();
        }
      else 
#line 309
        {
          CC2420ControlP$syncDone$postTask();
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 442
static inline void CC2420ControlP$sync$runTask(void )
#line 442
{
  CC2420ControlP$CC2420Config$sync();
}

# 181 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void CC2420ActiveMessageP$AMSend$sendDone(am_id_t arg_0x10f194aa8, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x10f194aa8, msg, error);
#line 99
}
#line 99
# 170 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result)
#line 170
{
  CC2420ActiveMessageP$AMSend$sendDone(CC2420ActiveMessageP$AMPacket$type(msg), msg, result);
}

# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void UniqueSendP$Send$sendDone(message_t * msg, error_t error){
#line 89
  CC2420ActiveMessageP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error)
#line 105
{
  ;
  UniqueSendP$State$toIdle();
  UniqueSendP$Send$sendDone(msg, error);
}

# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP$Send$sendDone(message_t * msg, error_t error){
#line 89
  UniqueSendP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 79 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP$SubSend$sendDone(message_t *msg, error_t error)
#line 79
{
  CC2420TinyosNetworkP$Send$sendDone(msg, error);
}

# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420CsmaP$Send$sendDone(message_t * msg, error_t error){
#line 89
  CC2420TinyosNetworkP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$stopDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$stopDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$clr(void )
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t * )29U &= ~(0x01 << 5);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
}

# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$HplGeneralIO$clr(void ){
#line 39
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$clr();
#line 39
}
#line 39
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$clr(void )
#line 38
{
#line 38
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$HplGeneralIO$clr();
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$clr(void ){
#line 30
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$clr();
#line 30
}
#line 30
# 199 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$stopVReg(void )
#line 199
{
  CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;
  CC2420ControlP$RSTN$clr();
  CC2420ControlP$VREN$clr();
  CC2420ControlP$RSTN$set();
  return SUCCESS;
}

# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$stopVReg(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420ControlP$CC2420Power$stopVReg();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port10$clear(void )
#line 91
{
#line 91
  P1IFG &= ~(1 << 0);
}

# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$clear(void ){
#line 41
  HplMsp430InterruptP$Port10$clear();
#line 41
}
#line 41
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port10$disable(void )
#line 83
{
#line 83
  P1IE &= ~(1 << 0);
}

# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$disable(void ){
#line 36
  HplMsp430InterruptP$Port10$disable();
#line 36
}
#line 36
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$disable(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$clear();
  }
  return SUCCESS;
}

# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP$InterruptFIFOP$disable(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$disable();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 138 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$StdControl$stop(void )
#line 138
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 139
    {
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STOPPED;
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$InterruptFIFOP$disable();
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )31U &= ~(0x01 << 1);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectIOFunc();
#line 85
}
#line 85
# 124 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$disableEvents(void )
{
  * (volatile uint16_t * )388U &= ~0x0010;
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$disableEvents(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$disableEvents();
#line 47
}
#line 47
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$disable(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectIOFunc();
  }
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP$CaptureSFD$disable(void ){
#line 55
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$disable();
#line 55
}
#line 55
# 159 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$StdControl$stop(void )
#line 159
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 160
    {
      CC2420TransmitP$m_state = CC2420TransmitP$S_STOPPED;
      CC2420TransmitP$BackoffTimer$stop();
      CC2420TransmitP$CaptureSFD$disable();
      CC2420TransmitP$SpiResource$release();
      CC2420TransmitP$CSN$set();
    }
#line 166
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP$SubControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = CC2420TransmitP$StdControl$stop();
#line 84
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP$StdControl$stop());
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 268 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$shutdown(void )
#line 268
{
  CC2420CsmaP$SubControl$stop();
  CC2420CsmaP$CC2420Power$stopVReg();
  CC2420CsmaP$stopDone_task$postTask();
}

#line 237
static inline void CC2420CsmaP$sendDone_task$runTask(void )
#line 237
{
  error_t packetErr;

#line 239
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 239
    packetErr = CC2420CsmaP$sendErr;
#line 239
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STOPPING)) {
      CC2420CsmaP$shutdown();
    }
  else {
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
    }

  CC2420CsmaP$Send$sendDone(CC2420CsmaP$m_msg, packetErr);
}

# 72 "RadioSenseToLedsC.nc"
static inline void RadioSenseToLedsC$RadioControl$stopDone(error_t err)
#line 72
{
}

# 117 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP$SplitControl$stopDone(error_t error){
#line 117
  RadioSenseToLedsC$RadioControl$stopDone(error);
#line 117
}
#line 117
# 258 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$stopDone_task$runTask(void )
#line 258
{
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STOPPED);
  CC2420CsmaP$SplitControl$stopDone(SUCCESS);
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
# 143 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void RadioSenseToLedsC$MilliTimer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(3U, dt);
#line 53
}
#line 53
# 67 "RadioSenseToLedsC.nc"
static inline void RadioSenseToLedsC$RadioControl$startDone(error_t err)
#line 67
{
  if (err == SUCCESS) {
      RadioSenseToLedsC$MilliTimer$startPeriodic(250);
    }
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP$SplitControl$startDone(error_t error){
#line 92
  RadioSenseToLedsC$RadioControl$startDone(error);
#line 92
}
#line 92
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 179 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Resource$release(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420ControlP$CSN$set();
      {
        unsigned char __nesc_temp = 
#line 182
        CC2420ControlP$SpiResource$release();

        {
#line 182
          __nesc_atomic_end(__nesc_atomic); 
#line 182
          return __nesc_temp;
        }
      }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP$Resource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420ControlP$Resource$release();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 249 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$rxOn(void )
#line 249
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 250
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 252
            FAIL;

            {
#line 252
              __nesc_atomic_end(__nesc_atomic); 
#line 252
              return __nesc_temp;
            }
          }
        }
#line 254
      CC2420ControlP$SRXON$strobe();
    }
#line 255
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$rxOn(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP$CC2420Power$rxOn();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port10$enable(void )
#line 75
{
#line 75
  P1IE |= 1 << 0;
}

# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$enable(void ){
#line 31
  HplMsp430InterruptP$Port10$enable();
#line 31
}
#line 31
# 107 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port10$edge(bool l2h)
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  {
    if (l2h) {
#line 109
      P1IES &= ~(1 << 0);
      }
    else {
#line 110
      P1IES |= 1 << 0;
      }
  }
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$edge(bool low_to_high){
#line 56
  HplMsp430InterruptP$Port10$edge(low_to_high);
#line 56
}
#line 56
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$enable(bool rising)
#line 41
{
  /* atomic removed: atomic calls only */
#line 42
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$enableFallingEdge(void )
#line 54
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$enable(FALSE);
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$enableFallingEdge();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 124 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$StdControl$start(void )
#line 124
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 125
    {
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
      CC2420ReceiveP$receivingPacket = FALSE;




      CC2420ReceiveP$InterruptFIFOP$enableFallingEdge();
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 148 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$StdControl$start(void )
#line 148
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 149
    {
      CC2420TransmitP$CaptureSFD$captureRisingEdge();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
      CC2420TransmitP$m_receiving = FALSE;
      CC2420TransmitP$abortSpiRelease = FALSE;
      CC2420TransmitP$m_tx_power = 0;
    }
#line 155
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP$SubControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = CC2420TransmitP$StdControl$start();
#line 74
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP$StdControl$start());
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 250 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$startDone_task$runTask(void )
#line 250
{
  CC2420CsmaP$SubControl$start();
  CC2420CsmaP$CC2420Power$rxOn();
  CC2420CsmaP$Resource$release();
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
  CC2420CsmaP$SplitControl$startDone(SUCCESS);
}

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
# 79 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$default$bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$val_t *buf, uint16_t count)
{
}

# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
inline static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$bufferDone(uint8_t arg_0x10f0c3530, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$val_t * buf, uint16_t count){
#line 89
    /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$default$bufferDone(arg_0x10f0c3530, result, buf, count);
#line 89
}
#line 89
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$val_t *buf, uint16_t count)
{
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$bufferDone(client, result, buf, count);
}

# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
inline static void AdcStreamP$ReadStream$bufferDone(uint8_t arg_0x10f06f368, error_t result, AdcStreamP$ReadStream$val_t * buf, uint16_t count){
#line 89
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$bufferDone(arg_0x10f06f368, result, buf, count);
#line 89
}
#line 89
# 156 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP$bufferDone$runTask(void )
#line 156
{
  uint16_t *b;
#line 157
  uint16_t c;

#line 158
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      b = AdcStreamP$lastBuffer;
      c = AdcStreamP$lastCount;
      AdcStreamP$lastBuffer = (void *)0;
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }

  AdcStreamP$ReadStream$bufferDone(AdcStreamP$client, SUCCESS, b, c);
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$default$readDone(uint8_t client, error_t result, uint32_t actualPeriod)
{
}

# 102 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
inline static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$readDone(uint8_t arg_0x10f0c3530, error_t result, uint32_t usActualPeriod){
#line 102
    /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$default$readDone(arg_0x10f0c3530, result, usActualPeriod);
#line 102
}
#line 102
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Resource$default$release(uint8_t client)
#line 67
{
#line 67
  return FAIL;
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Resource$release(uint8_t arg_0x10f0bb5c8){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  switch (arg_0x10f0bb5c8) {
#line 110
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC$0$RSCLIENT:
#line 110
      __nesc_result = Msp430RefVoltArbiterImplP$ClientResource$release(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID);
#line 110
      break;
#line 110
    default:
#line 110
      __nesc_result = /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Resource$default$release(arg_0x10f0bb5c8);
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
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$readDone(uint8_t client, error_t result, uint32_t actualPeriod)
{
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Resource$release(client);
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$ReadStream$readDone(client, result, actualPeriod);
}

# 102 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
inline static void AdcStreamP$ReadStream$readDone(uint8_t arg_0x10f06f368, error_t result, uint32_t usActualPeriod){
#line 102
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$readDone(arg_0x10f06f368, result, usActualPeriod);
#line 102
}
#line 102
# 135 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP$readStreamFail$runTask(void )
#line 135
{

  struct AdcStreamP$list_entry_t *entry;
  uint8_t c = AdcStreamP$client;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 140
    entry = AdcStreamP$bufferQueue[c];
#line 140
    __nesc_atomic_end(__nesc_atomic); }
  for (; entry; entry = entry->next) {
      uint16_t tmp_count __attribute((unused))  = entry->count;

#line 143
      AdcStreamP$ReadStream$bufferDone(c, FAIL, (uint16_t * )entry, entry->count);
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      AdcStreamP$bufferQueue[c] = (void *)0;
      AdcStreamP$bufferQueueEnd[c] = &AdcStreamP$bufferQueue[c];
    }
#line 150
    __nesc_atomic_end(__nesc_atomic); }

  AdcStreamP$client = AdcStreamP$NSTREAM;
  AdcStreamP$ReadStream$readDone(c, FAIL, 0);
}

# 170 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP$AdcResource$default$release(uint8_t client)
#line 170
{
#line 170
  return FAIL;
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Msp430RefVoltArbiterImplP$AdcResource$release(uint8_t arg_0x10ee2c108){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  switch (arg_0x10ee2c108) {
#line 110
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID:
#line 110
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID);
#line 110
      break;
#line 110
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID:
#line 110
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID);
#line 110
      break;
#line 110
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID:
#line 110
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID);
#line 110
      break;
#line 110
    default:
#line 110
      __nesc_result = Msp430RefVoltArbiterImplP$AdcResource$default$release(arg_0x10ee2c108);
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
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$resQ; i++) 
      if (/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id)
#line 47
{
  /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] &= ~(1 << id % 8);
}

#line 69
static inline resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$last + 1; ; i++) {
        if (i == 3U) {
          i = 0;
          }
#line 75
        if (/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(i)) {
            /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(i);
            /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 173 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 173
{
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x10eda6868){
#line 55
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x10eda6868);
#line 55
}
#line 55
# 119 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP$readStreamDone$runTask(void )
#line 119
{
  uint8_t c = AdcStreamP$client;
  uint32_t actualPeriod = AdcStreamP$period;

#line 122
  if (AdcStreamP$periodModified) {
    actualPeriod = AdcStreamP$period - AdcStreamP$period % 1000;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      AdcStreamP$bufferQueue[c] = (void *)0;
      AdcStreamP$bufferQueueEnd[c] = &AdcStreamP$bufferQueue[c];
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }

  AdcStreamP$client = AdcStreamP$NSTREAM;
  AdcStreamP$ReadStream$readDone(c, SUCCESS, actualPeriod);
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

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP$RefVolt_2_5V$startDone(error_t error){
#line 92
  Msp430RefVoltArbiterImplP$RefVolt_2_5V$startDone(error);
#line 92
}
#line 92
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadStream.nc"
inline static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$read(uint8_t arg_0x10f0bf720, uint32_t usPeriod){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = AdcStreamP$ReadStream$read(arg_0x10f0bf720, usPeriod);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Resource$granted(uint8_t client)
#line 59
{
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Service$read(client, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$period[client]);
}

# 160 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP$ClientResource$default$granted(uint8_t client)
#line 160
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void Msp430RefVoltArbiterImplP$ClientResource$granted(uint8_t arg_0x10edfcde0){
#line 92
  switch (arg_0x10edfcde0) {
#line 92
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID:
#line 92
      AdcP$ResourceRead$granted(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC$0$CLIENT);
#line 92
      break;
#line 92
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID:
#line 92
      /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC$0$Resource$granted(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC$0$RSCLIENT);
#line 92
      break;
#line 92
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID:
#line 92
      AdcP$SubResourceReadNow$granted(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC$0$CLIENT);
#line 92
      break;
#line 92
    default:
#line 92
      Msp430RefVoltArbiterImplP$ClientResource$default$granted(arg_0x10edfcde0);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP$RefVolt_1_5V$startDone(error_t error)
{
  if (Msp430RefVoltArbiterImplP$syncOwner != Msp430RefVoltArbiterImplP$NO_OWNER) {


      Msp430RefVoltArbiterImplP$ClientResource$granted(Msp430RefVoltArbiterImplP$syncOwner);
    }
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP$RefVolt_1_5V$startDone(error_t error){
#line 92
  Msp430RefVoltArbiterImplP$RefVolt_1_5V$startDone(error);
#line 92
}
#line 92
# 220 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP$SwitchOnTimer$fired(void )
{
  switch (Msp430RefVoltGeneratorP$state) 
    {
      case Msp430RefVoltGeneratorP$REFERENCE_1_5V_PENDING: 
        Msp430RefVoltGeneratorP$state = Msp430RefVoltGeneratorP$REFERENCE_1_5V_STABLE;
      Msp430RefVoltGeneratorP$RefVolt_1_5V$startDone(SUCCESS);
      break;
      case Msp430RefVoltGeneratorP$REFERENCE_2_5V_PENDING: 
        Msp430RefVoltGeneratorP$state = Msp430RefVoltGeneratorP$REFERENCE_2_5V_STABLE;
      Msp430RefVoltGeneratorP$RefVolt_2_5V$startDone(SUCCESS);
      break;
      case Msp430RefVoltGeneratorP$REFERENCE_1_5V_STABLE: 

        case Msp430RefVoltGeneratorP$GENERATOR_OFF: 

          case Msp430RefVoltGeneratorP$REFERENCE_2_5V_STABLE: 

            default: 

              return;
    }
}

# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP$SwitchOffTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(1U, dt);
#line 62
}
#line 62
# 151 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP$RefVolt_2_5V$stopDone(error_t error)
{
}

# 117 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP$RefVolt_2_5V$stopDone(error_t error){
#line 117
  Msp430RefVoltArbiterImplP$RefVolt_2_5V$stopDone(error);
#line 117
}
#line 117
# 147 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP$RefVolt_1_5V$stopDone(error_t error)
{
}

# 117 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP$RefVolt_1_5V$stopDone(error_t error){
#line 117
  Msp430RefVoltArbiterImplP$RefVolt_1_5V$stopDone(error);
#line 117
}
#line 117
# 244 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP$SwitchOffTimer$fired(void )
{
  switch (Msp430RefVoltGeneratorP$state) 
    {
      case Msp430RefVoltGeneratorP$REFERENCE_1_5V_STABLE: 
        if (Msp430RefVoltGeneratorP$switchOff() == SUCCESS) {
            Msp430RefVoltGeneratorP$state = Msp430RefVoltGeneratorP$GENERATOR_OFF;
            Msp430RefVoltGeneratorP$RefVolt_1_5V$stopDone(SUCCESS);
          }
        else {
#line 253
          Msp430RefVoltGeneratorP$SwitchOffTimer$startOneShot(20);
          }
#line 254
      break;
      case Msp430RefVoltGeneratorP$REFERENCE_2_5V_STABLE: 
        if (Msp430RefVoltGeneratorP$switchOff() == SUCCESS) {
            Msp430RefVoltGeneratorP$state = Msp430RefVoltGeneratorP$GENERATOR_OFF;
            Msp430RefVoltGeneratorP$RefVolt_2_5V$stopDone(SUCCESS);
          }
        else {
#line 260
          Msp430RefVoltGeneratorP$SwitchOffTimer$startOneShot(20);
          }
#line 261
      break;
      case Msp430RefVoltGeneratorP$GENERATOR_OFF: 

        case Msp430RefVoltGeneratorP$REFERENCE_1_5V_PENDING: 

          case Msp430RefVoltGeneratorP$REFERENCE_2_5V_PENDING: 

            default: 

              return;
    }
}

# 161 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP$AdcResource$default$request(uint8_t client)
{
  return FAIL;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Msp430RefVoltArbiterImplP$AdcResource$request(uint8_t arg_0x10ee2c108){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  switch (arg_0x10ee2c108) {
#line 78
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID:
#line 78
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID);
#line 78
      break;
#line 78
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID:
#line 78
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID);
#line 78
      break;
#line 78
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID:
#line 78
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = Msp430RefVoltArbiterImplP$AdcResource$default$request(arg_0x10ee2c108);
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
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP$ClientResource$request(uint8_t client)
{
  return Msp430RefVoltArbiterImplP$AdcResource$request(client);
}

# 168 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP$ResourceRead$default$request(uint8_t client)
#line 168
{
#line 168
  return FAIL;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t AdcP$ResourceRead$request(uint8_t arg_0x10ec12020){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  switch (arg_0x10ec12020) {
#line 78
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC$0$CLIENT:
#line 78
      __nesc_result = Msp430RefVoltArbiterImplP$ClientResource$request(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = AdcP$ResourceRead$default$request(arg_0x10ec12020);
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
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP$Read$read(uint8_t client)
{
  return AdcP$ResourceRead$request(client);
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t RadioSenseToLedsC$Read$read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP$Read$read(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC$0$CLIENT);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 74 "RadioSenseToLedsC.nc"
static inline void RadioSenseToLedsC$MilliTimer$fired(void )
#line 74
{
  RadioSenseToLedsC$Read$read();
}

# 193 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x10efce5d8){
#line 72
  switch (arg_0x10efce5d8) {
#line 72
    case 0U:
#line 72
      Msp430RefVoltGeneratorP$SwitchOnTimer$fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      Msp430RefVoltGeneratorP$SwitchOffTimer$fired();
#line 72
      break;
#line 72
    case 3U:
#line 72
      RadioSenseToLedsC$MilliTimer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x10efce5d8);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 167 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 167
{
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x10eda72f0){
#line 43
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x10eda72f0);
#line 43
}
#line 43
# 87 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id)
#line 87
{
  /* atomic removed: atomic calls only */
#line 88
  {
    if (!/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(id)) {
        /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      EBUSY;

#line 93
      return __nesc_temp;
    }
  }
}

# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 121 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline bool HplAdc12P$HplAdc12$isBusy(void )
#line 121
{
#line 121
  return HplAdc12P$ADC12CTL1 & 0x0001;
}

# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static bool Msp430RefVoltGeneratorP$HplAdc12$isBusy(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = HplAdc12P$HplAdc12$isBusy();
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline adc12ctl0_t HplAdc12P$HplAdc12$getCtl0(void )
#line 69
{
  return * (adc12ctl0_t *)&HplAdc12P$ADC12CTL0;
}

# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static adc12ctl0_t Msp430RefVoltGeneratorP$HplAdc12$getCtl0(void ){
#line 63
  struct __nesc_unnamed4254 __nesc_result;
#line 63

#line 63
  __nesc_result = HplAdc12P$HplAdc12$getCtl0();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P$HplAdc12$setCtl0(adc12ctl0_t control0)
#line 61
{
  HplAdc12P$ADC12CTL0 = * (uint16_t *)&control0;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430RefVoltGeneratorP$HplAdc12$setCtl0(adc12ctl0_t control0){
#line 51
  HplAdc12P$HplAdc12$setCtl0(control0);
#line 51
}
#line 51
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/sensors/Msp430InternalVoltageP.nc"
static inline const msp430adc12_channel_config_t *Msp430InternalVoltageP$AdcConfigure$getConfiguration(void )
{
  return &Msp430InternalVoltageP$config;
}

# 186 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline const msp430adc12_channel_config_t *
AdcP$Config$default$getConfiguration(uint8_t client)
{
  return &AdcP$defaultConfig;
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
inline static AdcP$Config$adc_config_t AdcP$Config$getConfiguration(uint8_t arg_0x10ec10748){
#line 58
  struct __nesc_unnamed4275 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x10ec10748) {
#line 58
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC$0$CLIENT:
#line 58
      __nesc_result = Msp430InternalVoltageP$AdcConfigure$getConfiguration();
#line 58
      break;
#line 58
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC$0$CLIENT:
#line 58
      __nesc_result = Msp430InternalVoltageP$AdcConfigure$getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = AdcP$Config$default$getConfiguration(arg_0x10ec10748);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 191 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP$SingleChannel$default$configureSingle(uint8_t client, 
const msp430adc12_channel_config_t *config)
#line 192
{
#line 192
  return FAIL;
}

# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcP$SingleChannel$configureSingle(uint8_t arg_0x10ec2e910, const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  switch (arg_0x10ec2e910) {
#line 84
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC$0$CLIENT:
#line 84
      __nesc_result = Msp430Adc12ImplP$SingleChannel$configureSingle(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID, config);
#line 84
      break;
#line 84
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC$0$CLIENT:
#line 84
      __nesc_result = Msp430Adc12ImplP$SingleChannel$configureSingle(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID, config);
#line 84
      break;
#line 84
    default:
#line 84
      __nesc_result = AdcP$SingleChannel$default$configureSingle(arg_0x10ec2e910, config);
#line 84
      break;
#line 84
    }
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 177 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP$ResourceReadNow$default$granted(uint8_t nowClient)
#line 177
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void AdcP$ResourceReadNow$granted(uint8_t arg_0x10ec15bf0){
#line 92
    AdcP$ResourceReadNow$default$granted(arg_0x10ec15bf0);
#line 92
}
#line 92
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$get(void ){
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
static inline /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$getNow(void )
{
  return /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$get();
}

# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static AdcStreamP$Alarm$size_type AdcStreamP$Alarm$getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 328 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP$SingleChannel$default$configureSingle(uint8_t c, 
const msp430adc12_channel_config_t *config)
#line 329
{
#line 329
  return FAIL;
}

# 84 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcStreamP$SingleChannel$configureSingle(uint8_t arg_0x10f06b3d0, const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  switch (arg_0x10f06b3d0) {
#line 84
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC$0$RSCLIENT:
#line 84
      __nesc_result = Msp430Adc12ImplP$SingleChannel$configureSingle(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID, config);
#line 84
      break;
#line 84
    default:
#line 84
      __nesc_result = AdcStreamP$SingleChannel$default$configureSingle(arg_0x10f06b3d0, config);
#line 84
      break;
#line 84
    }
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 314 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline const msp430adc12_channel_config_t *AdcStreamP$AdcConfigure$default$getConfiguration(uint8_t c)
{
  return &AdcStreamP$defaultConfig;
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
inline static AdcStreamP$AdcConfigure$adc_config_t AdcStreamP$AdcConfigure$getConfiguration(uint8_t arg_0x10f06ac00){
#line 58
  struct __nesc_unnamed4275 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x10f06ac00) {
#line 58
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC$0$RSCLIENT:
#line 58
      __nesc_result = Msp430InternalVoltageP$AdcConfigure$getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = AdcStreamP$AdcConfigure$default$getConfiguration(arg_0x10f06ac00);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t AdcStreamP$readStreamDone$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(AdcStreamP$readStreamDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 136 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_t0 = t0;
    /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_dt = dt;
    /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$set_alarm();
  }
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void AdcStreamP$Alarm$startAt(AdcStreamP$Alarm$size_type t0, AdcStreamP$Alarm$size_type dt){
#line 92
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 168 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP$nextAlarm(void )
#line 168
{
  AdcStreamP$Alarm$startAt(AdcStreamP$now, AdcStreamP$period);
  AdcStreamP$now += AdcStreamP$period;
}

# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$setEvent(uint16_t x)
{
  * (volatile uint16_t * )372U = x;
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430Adc12ImplP$CompareA1$setEvent(uint16_t time){
#line 30
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$setEvent(time);
#line 30
}
#line 30
# 144 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$setEvent(uint16_t x)
{
  * (volatile uint16_t * )370U = x;
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430Adc12ImplP$CompareA0$setEvent(uint16_t time){
#line 30
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$setEvent(time);
#line 30
}
#line 30
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$CC2int(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t x)
#line 46
{
#line 46
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$__nesc_unnamed4375 {
#line 46
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t f;
#line 46
    uint16_t t;
  } 
#line 46
  c = { .f = x };

#line 46
  return c.t;
}

#line 89
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$setControl(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t x)
{
  * (volatile uint16_t * )354U = /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$CC2int(x);
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430Adc12ImplP$ControlA0$setControl(msp430_compare_control_t control){
#line 35
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$setControl(control);
#line 35
}
#line 35
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setInputDivider(uint16_t inputDivider)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(0x0040 | 0x0080)) | ((inputDivider << 6) & (0x0040 | 0x0080));
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP$TimerA$setInputDivider(uint16_t inputDivider){
#line 45
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setInputDivider(inputDivider);
#line 45
}
#line 45
# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setClockSource(uint16_t clockSource)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(256U | 512U)) | ((clockSource << 8) & (256U | 512U));
}

# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP$TimerA$setClockSource(uint16_t clockSource){
#line 44
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setClockSource(clockSource);
#line 44
}
#line 44
# 100 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$disableEvents(void )
{
  * (volatile uint16_t * )352U &= ~2U;
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP$TimerA$disableEvents(void ){
#line 43
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$disableEvents();
#line 43
}
#line 43
# 90 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$clear(void )
{
  * (volatile uint16_t * )352U |= 4U;
}

# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP$TimerA$clear(void ){
#line 41
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$clear();
#line 41
}
#line 41
# 103 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP$prepareTimerA(uint16_t interval, uint16_t csSAMPCON, uint16_t cdSAMPCON)
{

  msp430_compare_control_t ccResetSHI = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };

  Msp430Adc12ImplP$TimerA$setMode(MSP430TIMER_STOP_MODE);
  Msp430Adc12ImplP$TimerA$clear();
  Msp430Adc12ImplP$TimerA$disableEvents();
  Msp430Adc12ImplP$TimerA$setClockSource(csSAMPCON);
  Msp430Adc12ImplP$TimerA$setInputDivider(cdSAMPCON);
  Msp430Adc12ImplP$ControlA0$setControl(ccResetSHI);
  Msp430Adc12ImplP$CompareA0$setEvent(interval - 1);
  Msp430Adc12ImplP$CompareA1$setEvent((interval - 1) / 2);
}

# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P$HplAdc12$setIEFlags(uint16_t mask)
#line 95
{
#line 95
  HplAdc12P$ADC12IE = mask;
}

# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP$HplAdc12$setIEFlags(uint16_t mask){
#line 95
  HplAdc12P$HplAdc12$setIEFlags(mask);
#line 95
}
#line 95
# 77 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P$HplAdc12$setMCtl(uint8_t i, adc12memctl_t memControl)
#line 77
{
  uint8_t *memCtlPtr = (uint8_t *)(char *)0x0080;

#line 79
  memCtlPtr += i;
  *memCtlPtr = * (uint8_t *)&memControl;
}

# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP$HplAdc12$setMCtl(uint8_t idx, adc12memctl_t memControl){
#line 75
  HplAdc12P$HplAdc12$setMCtl(idx, memControl);
#line 75
}
#line 75
# 65 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P$HplAdc12$setCtl1(adc12ctl1_t control1)
#line 65
{
  HplAdc12P$ADC12CTL1 = * (uint16_t *)&control1;
}

# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP$HplAdc12$setCtl1(adc12ctl1_t control1){
#line 57
  HplAdc12P$HplAdc12$setCtl1(control1);
#line 57
}
#line 57
#line 51
inline static void Msp430Adc12ImplP$HplAdc12$setCtl0(adc12ctl0_t control0){
#line 51
  HplAdc12P$HplAdc12$setCtl0(control0);
#line 51
}
#line 51
#line 63
inline static adc12ctl0_t Msp430Adc12ImplP$HplAdc12$getCtl0(void ){
#line 63
  struct __nesc_unnamed4254 __nesc_result;
#line 63

#line 63
  __nesc_result = HplAdc12P$HplAdc12$getCtl0();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t Msp430Adc12ImplP$ADCArbiterInfo$userId(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$userId();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 271 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP$SingleChannel$configureMultiple(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies)
{
  error_t result = ERESERVE;





  if ((((!config || !buf) || !length) || jiffies == 1) || jiffies == 2) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 284
    {
      if (Msp430Adc12ImplP$state & Msp430Adc12ImplP$ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 286
          EBUSY;

          {
#line 286
            __nesc_atomic_end(__nesc_atomic); 
#line 286
            return __nesc_temp;
          }
        }
#line 287
      if (Msp430Adc12ImplP$ADCArbiterInfo$userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = length > 16 ? 3 : 1, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = jiffies == 0 ? 0 : 1, 
          .cstartadd = 0 };

          adc12memctl_t memctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 0 };

          uint16_t i;
#line 303
          uint16_t mask = 1;
          adc12ctl0_t ctl0 = Msp430Adc12ImplP$HplAdc12$getCtl0();

#line 305
          ctl0.msc = jiffies == 0 ? 1 : 0;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP$state = Msp430Adc12ImplP$MULTIPLE_DATA;
          Msp430Adc12ImplP$resultBufferStart = (void *)0;
          Msp430Adc12ImplP$resultBufferLength = length;
          Msp430Adc12ImplP$resultBufferStart = buf;
          Msp430Adc12ImplP$resultBufferIndex = 0;
          Msp430Adc12ImplP$HplAdc12$setCtl0(ctl0);
          Msp430Adc12ImplP$HplAdc12$setCtl1(ctl1);
          for (i = 0; i < length - 1 && i < 15; i++) 
            Msp430Adc12ImplP$HplAdc12$setMCtl(i, memctl);
          memctl.eos = 1;
          Msp430Adc12ImplP$HplAdc12$setMCtl(i, memctl);
          Msp430Adc12ImplP$HplAdc12$setIEFlags(mask << i);

          if (jiffies) {
              Msp430Adc12ImplP$state |= Msp430Adc12ImplP$USE_TIMERA;
              Msp430Adc12ImplP$prepareTimerA(jiffies, config->sampcon_ssel, config->sampcon_id);
            }
          result = SUCCESS;
        }
    }
#line 328
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

# 318 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP$SingleChannel$default$configureMultiple(uint8_t c, 
const msp430adc12_channel_config_t *config, uint16_t b[], 
uint16_t numSamples, uint16_t jiffies)
{
  return FAIL;
}

# 138 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcStreamP$SingleChannel$configureMultiple(uint8_t arg_0x10f06b3d0, const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies){
#line 138
  unsigned char __nesc_result;
#line 138

#line 138
  switch (arg_0x10f06b3d0) {
#line 138
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC$0$RSCLIENT:
#line 138
      __nesc_result = Msp430Adc12ImplP$SingleChannel$configureMultiple(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID, config, buffer, numSamples, jiffies);
#line 138
      break;
#line 138
    default:
#line 138
      __nesc_result = AdcStreamP$SingleChannel$default$configureMultiple(arg_0x10f06b3d0, config, buffer, numSamples, jiffies);
#line 138
      break;
#line 138
    }
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
# 96 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP$postBuffer(uint8_t c, uint16_t *buf, uint16_t n)
{
  if (n < sizeof(struct AdcStreamP$list_entry_t )) {
    return ESIZE;
    }
#line 100
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      struct AdcStreamP$list_entry_t * newEntry = (struct AdcStreamP$list_entry_t * )buf;

      if (!AdcStreamP$bufferQueueEnd[c]) 
        {
          unsigned char __nesc_temp = 
#line 105
          FAIL;

          {
#line 105
            __nesc_atomic_end(__nesc_atomic); 
#line 105
            return __nesc_temp;
          }
        }
#line 107
      newEntry->count = n;
      newEntry->next = (void *)0;
      *AdcStreamP$bufferQueueEnd[c] = newEntry;
      AdcStreamP$bufferQueueEnd[c] = & newEntry->next;
    }
#line 111
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t AdcStreamP$readStreamFail$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(AdcStreamP$readStreamFail);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 180 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP$SingleChannel$default$getData(uint8_t client)
{
  return EINVAL;
}

# 189 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcP$SingleChannel$getData(uint8_t arg_0x10ec2e910){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  switch (arg_0x10ec2e910) {
#line 189
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC$0$CLIENT:
#line 189
      __nesc_result = Msp430Adc12ImplP$SingleChannel$getData(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID);
#line 189
      break;
#line 189
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC$0$CLIENT:
#line 189
      __nesc_result = Msp430Adc12ImplP$SingleChannel$getData(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID);
#line 189
      break;
#line 189
    default:
#line 189
      __nesc_result = AdcP$SingleChannel$default$getData(arg_0x10ec2e910);
#line 189
      break;
#line 189
    }
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
# 114 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * CC2420TinyosNetworkP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = CC2420CsmaP$Send$getPayload(msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 74 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void *CC2420TinyosNetworkP$Send$getPayload(message_t *msg, uint8_t len)
#line 74
{
  return CC2420TinyosNetworkP$SubSend$getPayload(msg, len);
}

# 114 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * UniqueSendP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = CC2420TinyosNetworkP$Send$getPayload(msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 100 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void *UniqueSendP$Send$getPayload(message_t *msg, uint8_t len)
#line 100
{
  return UniqueSendP$SubSend$getPayload(msg, len);
}

# 114 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * CC2420ActiveMessageP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = UniqueSendP$Send$getPayload(msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 164 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len)
#line 164
{
  return CC2420ActiveMessageP$SubSend$getPayload(msg, len);
}

# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * RadioSenseToLedsC$Packet$getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = CC2420ActiveMessageP$Packet$getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 166 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline uint8_t CC2420CsmaP$Send$maxPayloadLength(void )
#line 166
{
  return 28;
}

# 156 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 156
{
  __nesc_hton_leuint8(CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length.nxdata, len + CC2420_SIZE);
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  CC2420ActiveMessageP$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 127 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type)
#line 127
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 129
  __nesc_hton_leuint8(header->type.nxdata, type);
}

# 151 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 107 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 107
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 109
  __nesc_hton_leuint16(header->dest.nxdata, addr);
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 7);
  return /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t RadioSenseToLedsC$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*RadioSenseToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 315 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/nesc/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

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

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t Msp430RefVoltArbiterImplP$switchOff$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(Msp430RefVoltArbiterImplP$switchOff);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 153 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP$SwitchOnTimer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
#line 67
}
#line 67
# 127 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP$RefVolt_1_5V$stop(void )
{
  switch (Msp430RefVoltGeneratorP$state) 
    {
      case Msp430RefVoltGeneratorP$REFERENCE_1_5V_PENDING: 

        case Msp430RefVoltGeneratorP$REFERENCE_2_5V_PENDING: 
          if (Msp430RefVoltGeneratorP$switchOff() == SUCCESS) {
              Msp430RefVoltGeneratorP$SwitchOnTimer$stop();
              Msp430RefVoltGeneratorP$state = Msp430RefVoltGeneratorP$GENERATOR_OFF;
              if (Msp430RefVoltGeneratorP$state == Msp430RefVoltGeneratorP$REFERENCE_1_5V_PENDING) {
                Msp430RefVoltGeneratorP$RefVolt_1_5V$stopDone(SUCCESS);
                }
              else {
#line 140
                Msp430RefVoltGeneratorP$RefVolt_2_5V$stopDone(SUCCESS);
                }
#line 141
              return SUCCESS;
            }
          else {
#line 143
            return FAIL;
            }
#line 144
      case Msp430RefVoltGeneratorP$REFERENCE_1_5V_STABLE: 

        case Msp430RefVoltGeneratorP$REFERENCE_2_5V_STABLE: 
          Msp430RefVoltGeneratorP$SwitchOffTimer$startOneShot(20);
      return SUCCESS;
      case Msp430RefVoltGeneratorP$GENERATOR_OFF: 

        default: 

          return FAIL;
    }
}

# 109 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP$RefVolt_1_5V$stop(void ){
#line 109
  unsigned char __nesc_result;
#line 109

#line 109
  __nesc_result = Msp430RefVoltGeneratorP$RefVolt_1_5V$stop();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 136 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP$switchOff$runTask(void )
{

  if (Msp430RefVoltArbiterImplP$syncOwner != Msp430RefVoltArbiterImplP$NO_OWNER) {
      if (Msp430RefVoltArbiterImplP$RefVolt_1_5V$stop() == SUCCESS) {
          Msp430RefVoltArbiterImplP$syncOwner = Msp430RefVoltArbiterImplP$NO_OWNER;
        }
      else {
#line 143
        Msp430RefVoltArbiterImplP$switchOff$postTask();
        }
    }
}

# 165 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$default$granted(uint8_t id)
#line 165
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x10eda8158){
#line 92
  switch (arg_0x10eda8158) {
#line 92
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID:
#line 92
      Msp430RefVoltArbiterImplP$AdcResource$granted(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID);
#line 92
      break;
#line 92
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID:
#line 92
      Msp430RefVoltArbiterImplP$AdcResource$granted(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID);
#line 92
      break;
#line 92
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID:
#line 92
      Msp430RefVoltArbiterImplP$AdcResource$granted(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$default$granted(arg_0x10eda8158);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 171 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 171
{
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x10eda6868){
#line 49
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x10eda6868);
#line 49
}
#line 49
# 155 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
inline static /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfUp$adc_config_t /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfUp$getConfiguration(void ){
#line 58
  struct __nesc_unnamed4275 const *__nesc_result;
#line 58

#line 58
  __nesc_result = Msp430InternalVoltageP$AdcConfigure$getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfSub$getConfiguration(void )
{
  return /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfUp$getConfiguration();
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
inline static /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfUp$adc_config_t /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfUp$getConfiguration(void ){
#line 58
  struct __nesc_unnamed4275 const *__nesc_result;
#line 58

#line 58
  __nesc_result = Msp430InternalVoltageP$AdcConfigure$getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfSub$getConfiguration(void )
{
  return /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfUp$getConfiguration();
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
inline static /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfUp$adc_config_t /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfUp$getConfiguration(void ){
#line 58
  struct __nesc_unnamed4275 const *__nesc_result;
#line 58

#line 58
  __nesc_result = Msp430InternalVoltageP$AdcConfigure$getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfSub$getConfiguration(void )
{
  return /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfUp$getConfiguration();
}

# 172 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline const msp430adc12_channel_config_t *
Msp430RefVoltArbiterImplP$Config$default$getConfiguration(uint8_t client)
{
  return &Msp430RefVoltArbiterImplP$defaultConfig;
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
inline static Msp430RefVoltArbiterImplP$Config$adc_config_t Msp430RefVoltArbiterImplP$Config$getConfiguration(uint8_t arg_0x10ee63e08){
#line 58
  struct __nesc_unnamed4275 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x10ee63e08) {
#line 58
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID:
#line 58
      __nesc_result = /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$0$ConfSub$getConfiguration();
#line 58
      break;
#line 58
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID:
#line 58
      __nesc_result = /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$1$ConfSub$getConfiguration();
#line 58
      break;
#line 58
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID:
#line 58
      __nesc_result = /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC$2$ConfSub$getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = Msp430RefVoltArbiterImplP$Config$default$getConfiguration(arg_0x10ee63e08);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP$SwitchOffTimer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(1U);
#line 67
}
#line 67
#line 62
inline static void Msp430RefVoltGeneratorP$SwitchOnTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, dt);
#line 62
}
#line 62
# 94 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP$RefVolt_1_5V$start(void )
{
  switch (Msp430RefVoltGeneratorP$state) 
    {
      case Msp430RefVoltGeneratorP$REFERENCE_1_5V_STABLE: 
        Msp430RefVoltGeneratorP$SwitchOffTimer$stop();
      Msp430RefVoltGeneratorP$RefVolt_1_5V$startDone(SUCCESS);
      return SUCCESS;
      case Msp430RefVoltGeneratorP$GENERATOR_OFF: 
        if (Msp430RefVoltGeneratorP$switchOn(Msp430RefVoltGeneratorP$REFERENCE_1_5V_PENDING) == SUCCESS) {
            Msp430RefVoltGeneratorP$SwitchOnTimer$startOneShot(17);
            Msp430RefVoltGeneratorP$state = Msp430RefVoltGeneratorP$REFERENCE_1_5V_PENDING;
            return SUCCESS;
          }
        else {
#line 108
          return FAIL;
          }
#line 109
      case Msp430RefVoltGeneratorP$REFERENCE_2_5V_STABLE: 
        if (Msp430RefVoltGeneratorP$switchOn(Msp430RefVoltGeneratorP$REFERENCE_1_5V_PENDING) == SUCCESS) {
            Msp430RefVoltGeneratorP$SwitchOffTimer$stop();
            Msp430RefVoltGeneratorP$state = Msp430RefVoltGeneratorP$REFERENCE_1_5V_STABLE;
            Msp430RefVoltGeneratorP$RefVolt_1_5V$startDone(SUCCESS);
            return SUCCESS;
          }
        else {
#line 116
          return FAIL;
          }
#line 117
      case Msp430RefVoltGeneratorP$REFERENCE_1_5V_PENDING: 

        case Msp430RefVoltGeneratorP$REFERENCE_2_5V_PENDING: 

          default: 

            return FAIL;
    }
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP$RefVolt_1_5V$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = Msp430RefVoltGeneratorP$RefVolt_1_5V$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 157 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP$RefVolt_2_5V$start(void )
{
  switch (Msp430RefVoltGeneratorP$state) 
    {
      case Msp430RefVoltGeneratorP$REFERENCE_2_5V_STABLE: 
        Msp430RefVoltGeneratorP$SwitchOffTimer$stop();
      Msp430RefVoltGeneratorP$RefVolt_2_5V$startDone(SUCCESS);
      return SUCCESS;
      case Msp430RefVoltGeneratorP$GENERATOR_OFF: 
        if (Msp430RefVoltGeneratorP$switchOn(Msp430RefVoltGeneratorP$REFERENCE_2_5V_PENDING) == SUCCESS) {
            Msp430RefVoltGeneratorP$SwitchOnTimer$startOneShot(17);
            Msp430RefVoltGeneratorP$state = Msp430RefVoltGeneratorP$REFERENCE_2_5V_PENDING;
            return SUCCESS;
          }
        else {
#line 171
          return FAIL;
          }
#line 172
      case Msp430RefVoltGeneratorP$REFERENCE_1_5V_STABLE: 
        if (Msp430RefVoltGeneratorP$switchOn(Msp430RefVoltGeneratorP$REFERENCE_2_5V_PENDING) == SUCCESS) {
            Msp430RefVoltGeneratorP$SwitchOffTimer$stop();
            Msp430RefVoltGeneratorP$state = Msp430RefVoltGeneratorP$REFERENCE_2_5V_STABLE;
            Msp430RefVoltGeneratorP$RefVolt_2_5V$startDone(SUCCESS);
            return SUCCESS;
          }
        else {
#line 179
          return FAIL;
          }
#line 180
      case Msp430RefVoltGeneratorP$REFERENCE_2_5V_PENDING: 

        case Msp430RefVoltGeneratorP$REFERENCE_1_5V_PENDING: 

          default: 

            return FAIL;
    }
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP$RefVolt_2_5V$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = Msp430RefVoltGeneratorP$RefVolt_2_5V$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 172 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP$Read$default$readDone(uint8_t client, error_t result, uint16_t val)
#line 172
{
}

# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static void AdcP$Read$readDone(uint8_t arg_0x10ec191c8, error_t result, AdcP$Read$val_t val){
#line 63
  switch (arg_0x10ec191c8) {
#line 63
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC$0$CLIENT:
#line 63
      RadioSenseToLedsC$Read$readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      AdcP$Read$default$readDone(arg_0x10ec191c8, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 170 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP$ResourceRead$default$release(uint8_t client)
#line 170
{
#line 170
  return FAIL;
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t AdcP$ResourceRead$release(uint8_t arg_0x10ec12020){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  switch (arg_0x10ec12020) {
#line 110
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC$0$CLIENT:
#line 110
      __nesc_result = Msp430RefVoltArbiterImplP$ClientResource$release(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID);
#line 110
      break;
#line 110
    default:
#line 110
      __nesc_result = AdcP$ResourceRead$default$release(arg_0x10ec12020);
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
# 136 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP$readDone$runTask(void )
{
  AdcP$ResourceRead$release(AdcP$owner);
  AdcP$Read$readDone(AdcP$owner, SUCCESS, AdcP$value);
}

# 123 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP$HplAdc12$stopConversion(void ){
#line 123
  HplAdc12P$HplAdc12$stopConversion();
#line 123
}
#line 123
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP$Init$init(void )
{
  adc12ctl0_t ctl0;

#line 95
  Msp430Adc12ImplP$HplAdc12$stopConversion();
  ctl0 = Msp430Adc12ImplP$HplAdc12$getCtl0();
  ctl0.adc12tovie = 1;
  ctl0.adc12ovie = 1;
  Msp430Adc12ImplP$HplAdc12$setCtl0(ctl0);
  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void )
#line 51
{
  memset(/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$resQ, 0, sizeof /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$resQ);
  return SUCCESS;
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t x)
#line 46
{
#line 46
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$__nesc_unnamed4376 {
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

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP$Init$init(void )
#line 83
{
  uint8_t i;

  for (i = 0; i != AdcStreamP$NSTREAM; i++) 
    AdcStreamP$bufferQueueEnd[i] = &AdcStreamP$bufferQueue[i];

  return SUCCESS;
}

# 82 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void )
#line 82
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 84
  myGroup = ActiveMessageAddressC$group;
  return myGroup;
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
#line 50
inline static am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void ){
#line 50
  unsigned int __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$makeOutput(void )
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t * )30U |= 0x01 << 5;
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$HplGeneralIO$makeOutput(void ){
#line 71
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$makeOutput();
#line 71
}
#line 71
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$makeOutput(void )
#line 43
{
#line 43
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$HplGeneralIO$makeOutput();
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$makeOutput(void ){
#line 35
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$makeOutput();
#line 35
}
#line 35
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$makeOutput(void )
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t * )30U |= 0x01 << 6;
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$HplGeneralIO$makeOutput(void ){
#line 71
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$makeOutput();
#line 71
}
#line 71
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$makeOutput(void )
#line 43
{
#line 43
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$HplGeneralIO$makeOutput();
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$makeOutput(void ){
#line 35
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$7$GeneralIO$makeOutput();
#line 35
}
#line 35
# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$makeOutput(void )
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t * )30U |= 0x01 << 2;
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$HplGeneralIO$makeOutput(void ){
#line 71
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$makeOutput();
#line 71
}
#line 71
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$makeOutput(void )
#line 43
{
#line 43
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$HplGeneralIO$makeOutput();
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$CSN$makeOutput(void ){
#line 35
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$makeOutput();
#line 35
}
#line 35
# 121 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Init$init(void )
#line 121
{
  CC2420ControlP$CSN$makeOutput();
  CC2420ControlP$RSTN$makeOutput();
  CC2420ControlP$VREN$makeOutput();

  CC2420ControlP$m_short_addr = CC2420ControlP$ActiveMessageAddress$amAddress();
  CC2420ControlP$m_pan = CC2420ControlP$ActiveMessageAddress$amGroup();
  CC2420ControlP$m_tx_power = 31;
  CC2420ControlP$m_channel = 26;





  CC2420ControlP$addressRecognition = TRUE;





  CC2420ControlP$hwAddressRecognition = FALSE;






  CC2420ControlP$autoAckEnabled = TRUE;






  CC2420ControlP$hwAutoAckDefault = FALSE;



  return SUCCESS;
}

# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline error_t StateImplP$Init$init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 4U; i++) {
      StateImplP$state[i] = StateImplP$S_IDLE;
    }
  return SUCCESS;
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init(void )
#line 45
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$CC2int(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t x)
#line 46
{
#line 46
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$__nesc_unnamed4377 {
#line 46
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t f;
#line 46
    uint16_t t;
  } 
#line 46
  c = { .f = x };

#line 46
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$CC2int(x);
}

#line 94
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$setControlAsCompare(void )
{
  * (volatile uint16_t * )392U = /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$compareControl();
}

# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$setControlAsCompare(void ){
#line 36
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$setControlAsCompare();
#line 36
}
#line 36
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Init$init(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Msp430TimerControl$setControlAsCompare();
  return SUCCESS;
}

# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$makeInput(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t * )30U &= ~(0x01 << 1);
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$HplGeneralIO$makeInput(void ){
#line 64
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$makeInput();
#line 64
}
#line 64
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$GeneralIO$makeInput(void )
#line 41
{
#line 41
  /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$HplGeneralIO$makeInput();
}

# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$SFD$makeInput(void ){
#line 33
  /*HplCC2420PinsC.SFDM*/Msp430GpioC$8$GeneralIO$makeInput();
#line 33
}
#line 33


inline static void CC2420TransmitP$CSN$makeOutput(void ){
#line 35
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$4$GeneralIO$makeOutput();
#line 35
}
#line 35
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$makeInput(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t * )34U &= ~(0x01 << 4);
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$HplGeneralIO$makeInput(void ){
#line 64
  /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$makeInput();
#line 64
}
#line 64
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$GeneralIO$makeInput(void )
#line 41
{
#line 41
  /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$HplGeneralIO$makeInput();
}

# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CCA$makeInput(void ){
#line 33
  /*HplCC2420PinsC.CCAM*/Msp430GpioC$3$GeneralIO$makeInput();
#line 33
}
#line 33
# 140 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$Init$init(void )
#line 140
{
  CC2420TransmitP$CCA$makeInput();
  CC2420TransmitP$CSN$makeOutput();
  CC2420TransmitP$SFD$makeInput();
  return SUCCESS;
}

# 118 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$Init$init(void )
#line 118
{
  CC2420ReceiveP$m_p_rx_buf = &CC2420ReceiveP$m_rx_buf;
  return SUCCESS;
}

# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC$seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP$Random$rand16(void ){
#line 41
  unsigned int __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP$Init$init(void )
#line 62
{
  UniqueSendP$localSendId = UniqueSendP$Random$rand16();
  return SUCCESS;
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP$Init$init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP$receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP$receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = UniqueReceiveP$Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, UniqueSendP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, RandomMlcgC$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$2$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, StateImplP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420ControlP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, AdcStreamP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, Msp430Adc12ImplP$Init$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$start(dt);
#line 55
}
#line 55
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$set(void )
#line 45
{
#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    * (volatile uint8_t * )29U |= 0x01 << 5;
#line 45
    __nesc_atomic_end(__nesc_atomic); }
}

# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$HplGeneralIO$set(void ){
#line 34
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$set();
#line 34
}
#line 34
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$set(void )
#line 37
{
#line 37
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$HplGeneralIO$set();
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$set(void ){
#line 29
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$9$GeneralIO$set();
#line 29
}
#line 29
# 187 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$startVReg(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 190
            FAIL;

            {
#line 190
              __nesc_atomic_end(__nesc_atomic); 
#line 190
              return __nesc_temp;
            }
          }
        }
#line 192
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTING;
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$VREN$set();
  CC2420ControlP$StartupTimer$start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$startVReg(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420ControlP$CC2420Power$startVReg();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t CC2420CsmaP$SplitControlState$requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP$State$requestState(1U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP$SplitControl$start(void )
#line 81
{
  if (CC2420CsmaP$SplitControlState$requestState(CC2420CsmaP$S_STARTING) == SUCCESS) {
      CC2420CsmaP$CC2420Power$startVReg();
      return SUCCESS;
    }
  else {
#line 86
    if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
        return EALREADY;
      }
    else {
#line 89
      if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 93
  return EBUSY;
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t RadioSenseToLedsC$RadioControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = CC2420CsmaP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 63 "RadioSenseToLedsC.nc"
static inline void RadioSenseToLedsC$Boot$booted(void )
#line 63
{
  RadioSenseToLedsC$RadioControl$start();
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 49
  RadioSenseToLedsC$Boot$booted();
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
# 161 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline uint16_t *AdcP$SingleChannel$multipleDataReady(uint8_t client, 
uint16_t *buf, uint16_t numSamples)
{

  return 0;
}

# 645 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline uint16_t *Msp430Adc12ImplP$SingleChannel$default$multipleDataReady(uint8_t id, 
uint16_t *buf, uint16_t numSamples)
{
  return 0;
}

# 227 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static uint16_t * Msp430Adc12ImplP$SingleChannel$multipleDataReady(uint8_t arg_0x10ec96ac0, uint16_t * buffer, uint16_t numSamples){
#line 227
  unsigned int *__nesc_result;
#line 227

#line 227
  switch (arg_0x10ec96ac0) {
#line 227
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID:
#line 227
      __nesc_result = AdcP$SingleChannel$multipleDataReady(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC$0$CLIENT, buffer, numSamples);
#line 227
      break;
#line 227
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID:
#line 227
      __nesc_result = AdcStreamP$SingleChannel$multipleDataReady(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC$0$RSCLIENT, buffer, numSamples);
#line 227
      break;
#line 227
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID:
#line 227
      __nesc_result = AdcP$SingleChannel$multipleDataReady(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC$0$CLIENT, buffer, numSamples);
#line 227
      break;
#line 227
    default:
#line 227
      __nesc_result = Msp430Adc12ImplP$SingleChannel$default$multipleDataReady(arg_0x10ec96ac0, buffer, numSamples);
#line 227
      break;
#line 227
    }
#line 227

#line 227
  return __nesc_result;
#line 227
}
#line 227
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline uint16_t HplAdc12P$HplAdc12$getMem(uint8_t i)
#line 91
{
  return *((uint16_t *)(int *)0x0140 + i);
}

# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static uint16_t Msp430Adc12ImplP$HplAdc12$getMem(uint8_t idx){
#line 89
  unsigned int __nesc_result;
#line 89

#line 89
  __nesc_result = HplAdc12P$HplAdc12$getMem(idx);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
#line 82
inline static adc12memctl_t Msp430Adc12ImplP$HplAdc12$getMCtl(uint8_t idx){
#line 82
  struct __nesc_unnamed4276 __nesc_result;
#line 82

#line 82
  __nesc_result = HplAdc12P$HplAdc12$getMCtl(idx);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 651 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP$MultiChannel$default$dataReady(uint8_t id, uint16_t *buffer, uint16_t numSamples)
#line 651
{
}

# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
inline static void Msp430Adc12ImplP$MultiChannel$dataReady(uint8_t arg_0x10ec940c8, uint16_t *buffer, uint16_t numSamples){
#line 105
    Msp430Adc12ImplP$MultiChannel$default$dataReady(arg_0x10ec940c8, buffer, numSamples);
#line 105
}
#line 105
# 640 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP$SingleChannel$default$singleDataReady(uint8_t id, uint16_t data)
{
  return FAIL;
}

# 206 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t Msp430Adc12ImplP$SingleChannel$singleDataReady(uint8_t arg_0x10ec96ac0, uint16_t data){
#line 206
  unsigned char __nesc_result;
#line 206

#line 206
  switch (arg_0x10ec96ac0) {
#line 206
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$0$ID:
#line 206
      __nesc_result = AdcP$SingleChannel$singleDataReady(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadClientC*/AdcReadClientC$0$CLIENT, data);
#line 206
      break;
#line 206
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$1$ID:
#line 206
      __nesc_result = AdcStreamP$SingleChannel$singleDataReady(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadStreamClientC*/AdcReadStreamClientC$0$RSCLIENT, data);
#line 206
      break;
#line 206
    case /*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC$2$ID:
#line 206
      __nesc_result = AdcP$SingleChannel$singleDataReady(/*RadioSenseToLedsAppC.DemoSensorC.DemoSensor.Msp430InternalVoltageC.AdcReadNowClientC*/AdcReadNowClientC$0$CLIENT, data);
#line 206
      break;
#line 206
    default:
#line 206
      __nesc_result = Msp430Adc12ImplP$SingleChannel$default$singleDataReady(arg_0x10ec96ac0, data);
#line 206
      break;
#line 206
    }
#line 206

#line 206
  return __nesc_result;
#line 206
}
#line 206
# 654 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP$Overflow$default$conversionTimeOverflow(uint8_t id)
#line 654
{
}

# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
inline static void Msp430Adc12ImplP$Overflow$conversionTimeOverflow(uint8_t arg_0x10ec92020){
#line 54
    Msp430Adc12ImplP$Overflow$default$conversionTimeOverflow(arg_0x10ec92020);
#line 54
}
#line 54
# 653 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP$Overflow$default$memOverflow(uint8_t id)
#line 653
{
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
inline static void Msp430Adc12ImplP$Overflow$memOverflow(uint8_t arg_0x10ec92020){
#line 49
    Msp430Adc12ImplP$Overflow$default$memOverflow(arg_0x10ec92020);
#line 49
}
#line 49
# 544 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP$HplAdc12$conversionDone(uint16_t iv)
{
  bool overflow = FALSE;
  uint16_t *resultBuffer;

  if (iv <= 4) {
      if (iv == 2) {
        Msp430Adc12ImplP$Overflow$memOverflow(Msp430Adc12ImplP$clientID);
        }
      else {
#line 553
        Msp430Adc12ImplP$Overflow$conversionTimeOverflow(Msp430Adc12ImplP$clientID);
        }
      if (! Msp430Adc12ImplP$HplAdc12$getCtl0().msc) {
        overflow = TRUE;
        }
    }
#line 558
  switch (Msp430Adc12ImplP$state & Msp430Adc12ImplP$CONVERSION_MODE_MASK) 
    {
      case Msp430Adc12ImplP$SINGLE_DATA: 
        Msp430Adc12ImplP$stopConversion();
      Msp430Adc12ImplP$SingleChannel$singleDataReady(Msp430Adc12ImplP$clientID, Msp430Adc12ImplP$HplAdc12$getMem(0));
      break;
      case Msp430Adc12ImplP$SINGLE_DATA_REPEAT: 
        {
          error_t repeatContinue;

#line 567
          repeatContinue = Msp430Adc12ImplP$SingleChannel$singleDataReady(Msp430Adc12ImplP$clientID, 
          Msp430Adc12ImplP$HplAdc12$getMem(0));
          if (repeatContinue != SUCCESS) {
            Msp430Adc12ImplP$stopConversion();
            }
#line 571
          break;
        }

      case Msp430Adc12ImplP$MULTI_CHANNEL: 
        {
          uint16_t i = 0;
#line 576
          uint16_t k;

#line 577
          resultBuffer = Msp430Adc12ImplP$resultBufferStart + Msp430Adc12ImplP$resultBufferIndex;
          do {
              * resultBuffer++ = Msp430Adc12ImplP$HplAdc12$getMem(i);
            }
          while (
#line 580
          ++i < Msp430Adc12ImplP$numChannels);
          Msp430Adc12ImplP$resultBufferIndex += Msp430Adc12ImplP$numChannels;
          if (overflow || Msp430Adc12ImplP$resultBufferLength == Msp430Adc12ImplP$resultBufferIndex) {
              Msp430Adc12ImplP$stopConversion();
              resultBuffer -= Msp430Adc12ImplP$resultBufferIndex;
              k = Msp430Adc12ImplP$resultBufferIndex - Msp430Adc12ImplP$numChannels;
              Msp430Adc12ImplP$resultBufferIndex = 0;
              Msp430Adc12ImplP$MultiChannel$dataReady(Msp430Adc12ImplP$clientID, resultBuffer, 
              overflow ? k : Msp430Adc12ImplP$resultBufferLength);
            }
        }
      break;
      case Msp430Adc12ImplP$MULTIPLE_DATA: 
        {
          uint16_t i = 0;
#line 594
          uint16_t length;
#line 594
          uint16_t k;

#line 595
          resultBuffer = Msp430Adc12ImplP$resultBufferStart + Msp430Adc12ImplP$resultBufferIndex;
          if (Msp430Adc12ImplP$resultBufferLength - Msp430Adc12ImplP$resultBufferIndex > 16) {
            length = 16;
            }
          else {
#line 599
            length = Msp430Adc12ImplP$resultBufferLength - Msp430Adc12ImplP$resultBufferIndex;
            }
#line 600
          do {
              * resultBuffer++ = Msp430Adc12ImplP$HplAdc12$getMem(i);
            }
          while (
#line 602
          ++i < length);
          Msp430Adc12ImplP$resultBufferIndex += length;
          if (overflow || Msp430Adc12ImplP$resultBufferLength == Msp430Adc12ImplP$resultBufferIndex) {
              Msp430Adc12ImplP$stopConversion();
              resultBuffer -= Msp430Adc12ImplP$resultBufferIndex;
              k = Msp430Adc12ImplP$resultBufferIndex - length;
              Msp430Adc12ImplP$resultBufferIndex = 0;
              Msp430Adc12ImplP$SingleChannel$multipleDataReady(Msp430Adc12ImplP$clientID, resultBuffer, 
              overflow ? k : Msp430Adc12ImplP$resultBufferLength);
            }
          else {
#line 611
            if (Msp430Adc12ImplP$resultBufferLength - Msp430Adc12ImplP$resultBufferIndex > 15) {
              return;
              }
            else 
#line 613
              {

                adc12memctl_t memctl = Msp430Adc12ImplP$HplAdc12$getMCtl(0);

#line 616
                memctl.eos = 1;
                Msp430Adc12ImplP$HplAdc12$setMCtl(Msp430Adc12ImplP$resultBufferLength - Msp430Adc12ImplP$resultBufferIndex, memctl);
              }
            }
        }
#line 620
      break;
      case Msp430Adc12ImplP$MULTIPLE_DATA_REPEAT: 
        {
          uint8_t i = 0;

#line 624
          resultBuffer = Msp430Adc12ImplP$resultBufferStart;
          do {
              * resultBuffer++ = Msp430Adc12ImplP$HplAdc12$getMem(i);
            }
          while (
#line 627
          ++i < Msp430Adc12ImplP$resultBufferLength);

          Msp430Adc12ImplP$resultBufferStart = Msp430Adc12ImplP$SingleChannel$multipleDataReady(Msp430Adc12ImplP$clientID, 
          resultBuffer - Msp430Adc12ImplP$resultBufferLength, 
          overflow ? 0 : Msp430Adc12ImplP$resultBufferLength);
          if (!Msp430Adc12ImplP$resultBufferStart) {
            Msp430Adc12ImplP$stopConversion();
            }
#line 634
          break;
        }
    }
}

# 274 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP$HplAdc12$conversionDone(uint16_t iv)
#line 274
{
}

# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void HplAdc12P$HplAdc12$conversionDone(uint16_t iv){
#line 112
  Msp430RefVoltGeneratorP$HplAdc12$conversionDone(iv);
#line 112
  Msp430Adc12ImplP$HplAdc12$conversionDone(iv);
#line 112
}
#line 112
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )55U &= ~(0x01 << 0);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port60$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP$40$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )55U &= ~(0x01 << 1);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port61$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP$41$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )55U &= ~(0x01 << 2);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port62$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP$42$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )55U &= ~(0x01 << 3);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port63$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP$43$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )55U &= ~(0x01 << 4);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port64$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP$44$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )55U &= ~(0x01 << 5);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port65$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP$45$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )55U &= ~(0x01 << 6);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port66$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP$46$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$selectIOFunc(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )55U &= ~(0x01 << 7);
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP$Port67$selectIOFunc(void ){
#line 85
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP$47$IO$selectIOFunc();
#line 85
}
#line 85
# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P$HplAdc12$resetIFGs(void )
#line 98
{
  HplAdc12P$ADC12IV = 0;
  HplAdc12P$ADC12IFG = 0;
}

# 106 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP$HplAdc12$resetIFGs(void ){
#line 106
  HplAdc12P$HplAdc12$resetIFGs();
#line 106
}
#line 106
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP$readDone$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(AdcP$readDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 178 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP$ReadNow$default$readDone(uint8_t client, error_t result, uint16_t val)
#line 178
{
}

# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
inline static void AdcP$ReadNow$readDone(uint8_t arg_0x10ec16020, error_t result, AdcP$ReadNow$val_t val){
#line 66
    AdcP$ReadNow$default$readDone(arg_0x10ec16020, result, val);
#line 66
}
#line 66
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t AdcStreamP$bufferDone$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(AdcStreamP$bufferDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 179 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$InterruptFIFOP$fired(void )
#line 179
{
  if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STARTED) {
      CC2420ReceiveP$beginReceive();
    }
  else {
      CC2420ReceiveP$m_missed_packets++;
    }
}

# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$fired(void ){
#line 57
  CC2420ReceiveP$InterruptFIFOP$fired();
#line 57
}
#line 57
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$fired(void )
#line 66
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$clear();
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$fired();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port10$fired(void ){
#line 61
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$fired();
#line 61
}
#line 61
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port11$clear(void )
#line 92
{
#line 92
  P1IFG &= ~(1 << 1);
}

#line 68
static inline void HplMsp430InterruptP$Port11$default$fired(void )
#line 68
{
#line 68
  HplMsp430InterruptP$Port11$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port11$fired(void ){
#line 61
  HplMsp430InterruptP$Port11$default$fired();
#line 61
}
#line 61
# 93 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port12$clear(void )
#line 93
{
#line 93
  P1IFG &= ~(1 << 2);
}

#line 69
static inline void HplMsp430InterruptP$Port12$default$fired(void )
#line 69
{
#line 69
  HplMsp430InterruptP$Port12$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port12$fired(void ){
#line 61
  HplMsp430InterruptP$Port12$default$fired();
#line 61
}
#line 61
# 94 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port13$clear(void )
#line 94
{
#line 94
  P1IFG &= ~(1 << 3);
}

#line 70
static inline void HplMsp430InterruptP$Port13$default$fired(void )
#line 70
{
#line 70
  HplMsp430InterruptP$Port13$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port13$fired(void ){
#line 61
  HplMsp430InterruptP$Port13$default$fired();
#line 61
}
#line 61
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$startDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$startDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 211 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Power$startOscillatorDone(void )
#line 211
{
  CC2420CsmaP$startDone_task$postTask();
}

# 76 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP$CC2420Power$startOscillatorDone(void ){
#line 76
  CC2420CsmaP$CC2420Power$startOscillatorDone();
#line 76
}
#line 76
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP$InterruptCCA$disable(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$disable();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 418 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$InterruptCCA$fired(void )
#line 418
{
  CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTED;
  CC2420ControlP$InterruptCCA$disable();
  CC2420ControlP$IOCFG1$write(0);
  CC2420ControlP$writeId();
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$CC2420Power$startOscillatorDone();
}

# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$fired(void ){
#line 57
  CC2420ControlP$InterruptCCA$fired();
#line 57
}
#line 57
# 66 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$fired(void )
#line 66
{
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$clear();
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$fired();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port14$fired(void ){
#line 61
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$fired();
#line 61
}
#line 61
# 96 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port15$clear(void )
#line 96
{
#line 96
  P1IFG &= ~(1 << 5);
}

#line 72
static inline void HplMsp430InterruptP$Port15$default$fired(void )
#line 72
{
#line 72
  HplMsp430InterruptP$Port15$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port15$fired(void ){
#line 61
  HplMsp430InterruptP$Port15$default$fired();
#line 61
}
#line 61
# 97 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port16$clear(void )
#line 97
{
#line 97
  P1IFG &= ~(1 << 6);
}

#line 73
static inline void HplMsp430InterruptP$Port16$default$fired(void )
#line 73
{
#line 73
  HplMsp430InterruptP$Port16$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port16$fired(void ){
#line 61
  HplMsp430InterruptP$Port16$default$fired();
#line 61
}
#line 61
# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port17$clear(void )
#line 98
{
#line 98
  P1IFG &= ~(1 << 7);
}

#line 74
static inline void HplMsp430InterruptP$Port17$default$fired(void )
#line 74
{
#line 74
  HplMsp430InterruptP$Port17$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port17$fired(void ){
#line 61
  HplMsp430InterruptP$Port17$default$fired();
#line 61
}
#line 61
# 195 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port20$clear(void )
#line 195
{
#line 195
  P2IFG &= ~(1 << 0);
}

#line 171
static inline void HplMsp430InterruptP$Port20$default$fired(void )
#line 171
{
#line 171
  HplMsp430InterruptP$Port20$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port20$fired(void ){
#line 61
  HplMsp430InterruptP$Port20$default$fired();
#line 61
}
#line 61
# 196 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port21$clear(void )
#line 196
{
#line 196
  P2IFG &= ~(1 << 1);
}

#line 172
static inline void HplMsp430InterruptP$Port21$default$fired(void )
#line 172
{
#line 172
  HplMsp430InterruptP$Port21$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port21$fired(void ){
#line 61
  HplMsp430InterruptP$Port21$default$fired();
#line 61
}
#line 61
# 197 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port22$clear(void )
#line 197
{
#line 197
  P2IFG &= ~(1 << 2);
}

#line 173
static inline void HplMsp430InterruptP$Port22$default$fired(void )
#line 173
{
#line 173
  HplMsp430InterruptP$Port22$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port22$fired(void ){
#line 61
  HplMsp430InterruptP$Port22$default$fired();
#line 61
}
#line 61
# 198 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port23$clear(void )
#line 198
{
#line 198
  P2IFG &= ~(1 << 3);
}

#line 174
static inline void HplMsp430InterruptP$Port23$default$fired(void )
#line 174
{
#line 174
  HplMsp430InterruptP$Port23$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port23$fired(void ){
#line 61
  HplMsp430InterruptP$Port23$default$fired();
#line 61
}
#line 61
# 199 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port24$clear(void )
#line 199
{
#line 199
  P2IFG &= ~(1 << 4);
}

#line 175
static inline void HplMsp430InterruptP$Port24$default$fired(void )
#line 175
{
#line 175
  HplMsp430InterruptP$Port24$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port24$fired(void ){
#line 61
  HplMsp430InterruptP$Port24$default$fired();
#line 61
}
#line 61
# 200 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port25$clear(void )
#line 200
{
#line 200
  P2IFG &= ~(1 << 5);
}

#line 176
static inline void HplMsp430InterruptP$Port25$default$fired(void )
#line 176
{
#line 176
  HplMsp430InterruptP$Port25$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port25$fired(void ){
#line 61
  HplMsp430InterruptP$Port25$default$fired();
#line 61
}
#line 61
# 201 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port26$clear(void )
#line 201
{
#line 201
  P2IFG &= ~(1 << 6);
}

#line 177
static inline void HplMsp430InterruptP$Port26$default$fired(void )
#line 177
{
#line 177
  HplMsp430InterruptP$Port26$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port26$fired(void ){
#line 61
  HplMsp430InterruptP$Port26$default$fired();
#line 61
}
#line 61
# 202 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP$Port27$clear(void )
#line 202
{
#line 202
  P2IFG &= ~(1 << 7);
}

#line 178
static inline void HplMsp430InterruptP$Port27$default$fired(void )
#line 178
{
#line 178
  HplMsp430InterruptP$Port27$clear();
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP$Port27$fired(void ){
#line 61
  HplMsp430InterruptP$Port27$default$fired();
#line 61
}
#line 61
# 88 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$userId();
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
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$rxDone(uint8_t arg_0x10f7530c8, uint8_t data){
#line 54
  switch (arg_0x10f7530c8) {
#line 54
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 54
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$rxDone(data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$rxDone(arg_0x10f7530c8, data);
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
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$inUse();
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
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$fired(uint8_t arg_0x10f752020){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$default$fired(arg_0x10f752020);
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
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$txDone(uint8_t arg_0x10f7530c8){
#line 49
  switch (arg_0x10f7530c8) {
#line 49
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$txDone();
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$txDone(arg_0x10f7530c8);
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
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$fired(uint8_t arg_0x10e7ed780){
#line 28
  switch (arg_0x10e7ed780) {
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
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$default$fired(arg_0x10e7ed780);
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

# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform*/TransformCounterC$1$to_size_type /*Counter32khz32C.Transform*/TransformCounterC$1$Counter$get(void )
{
  /*Counter32khz32C.Transform*/TransformCounterC$1$to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform*/TransformCounterC$1$upper_count_type high = /*Counter32khz32C.Transform*/TransformCounterC$1$m_upper;
      /*Counter32khz32C.Transform*/TransformCounterC$1$from_size_type low = /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$get();

#line 76
      if (/*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform*/TransformCounterC$1$CounterFrom$get();
        }
      {
        /*Counter32khz32C.Transform*/TransformCounterC$1$to_size_type high_to = high;
        /*Counter32khz32C.Transform*/TransformCounterC$1$to_size_type low_to = low >> /*Counter32khz32C.Transform*/TransformCounterC$1$LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*Counter32khz32C.Transform*/TransformCounterC$1$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$enableCapture(uint8_t mode)
#line 38
{
  /* atomic removed: atomic calls only */
#line 39
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectModuleFunc();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$clearPendingInterrupt();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$clearOverflow();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$setControlAsCapture(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$enableEvents();
  }
  return SUCCESS;
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$clr(void )
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t * )29U &= ~(0x01 << 2);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
}

# 260 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP$SpiByte$write(addr | 0x80);
  CC2420SpiP$SpiByte$write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP$SpiByte$write(tmpData[tmpLen - len]);
    }

  return status;
}

# 133 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
static bool StateImplP$State$isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP$state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 99 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiByte$write(uint8_t tx)
#line 99
{
  uint8_t byte;


  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$tx(tx);
  while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isRxIntrPending()) ;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$clrRxIntr();
  byte = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$rx();

  return byte;
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
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$set(void )
#line 45
{
#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    * (volatile uint8_t * )29U |= 0x01 << 2;
#line 45
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP$Resource$release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP$m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;
      if (!CC2420SpiP$m_requests) {
          CC2420SpiP$WorkingState$toIdle();
          CC2420SpiP$attemptRelease();
        }
      else {
          for (i = CC2420SpiP$m_holder + 1; ; i++) {
              i %= CC2420SpiP$RESOURCE_COUNT;

              if (CC2420SpiP$m_requests & (1 << i)) {
                  CC2420SpiP$m_holder = i;
                  CC2420SpiP$m_requests &= ~(1 << i);
                  CC2420SpiP$grant$postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP$attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP$m_requests > 0
   || CC2420SpiP$m_holder != CC2420SpiP$NO_HOLDER)
   || !CC2420SpiP$WorkingState$isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP$release = TRUE;
  CC2420SpiP$ChipSpiResource$releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP$release) {
        CC2420SpiP$SpiResource$release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
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

# 136 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

#line 96
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$Counter$get();
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type expires;
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$AlarmFrom$startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$2$from_size_type )remaining << 0);
}

# 684 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$signalDone(error_t err)
#line 684
{
  /* atomic removed: atomic calls only */
#line 685
  CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
  CC2420TransmitP$abortSpiRelease = FALSE;
  CC2420TransmitP$ChipSpiResource$attemptRelease();
  CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, err);
}

# 122 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP$PacketTimeStamp32khz$clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timesync.nxdata, FALSE);
  __nesc_hton_uint32(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);
}

# 394 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP$SingleChannel$getData(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 396
    {
      if (Msp430Adc12ImplP$ADCArbiterInfo$userId() == id) {
          if (Msp430Adc12ImplP$state & Msp430Adc12ImplP$MULTIPLE_DATA_REPEAT && !Msp430Adc12ImplP$resultBufferStart) 
            {
              unsigned char __nesc_temp = 
#line 399
              EINVAL;

              {
#line 399
                __nesc_atomic_end(__nesc_atomic); 
#line 399
                return __nesc_temp;
              }
            }
#line 400
          if (Msp430Adc12ImplP$state & Msp430Adc12ImplP$ADC_BUSY) 
            {
              unsigned char __nesc_temp = 
#line 401
              EBUSY;

              {
#line 401
                __nesc_atomic_end(__nesc_atomic); 
#line 401
                return __nesc_temp;
              }
            }
#line 402
          Msp430Adc12ImplP$state |= Msp430Adc12ImplP$ADC_BUSY;
          Msp430Adc12ImplP$clientID = id;
          Msp430Adc12ImplP$configureAdcPin(Msp430Adc12ImplP$HplAdc12$getMCtl(0).inch);
          Msp430Adc12ImplP$HplAdc12$startConversion();
          if (Msp430Adc12ImplP$state & Msp430Adc12ImplP$USE_TIMERA) {
            Msp430Adc12ImplP$startTimerA();
            }
#line 408
          {
            unsigned char __nesc_temp = 
#line 408
            SUCCESS;

            {
#line 408
              __nesc_atomic_end(__nesc_atomic); 
#line 408
              return __nesc_temp;
            }
          }
        }
    }
#line 412
    __nesc_atomic_end(__nesc_atomic); }
#line 411
  return FAIL;
}

# 137 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$userId(void )
#line 137
{
  /* atomic removed: atomic calls only */
#line 138
  {
    if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$state != /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 140
        /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;

#line 140
        return __nesc_temp;
      }
#line 141
    {
      unsigned char __nesc_temp = 
#line 141
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$resId;

#line 141
      return __nesc_temp;
    }
  }
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static adc12memctl_t HplAdc12P$HplAdc12$getMCtl(uint8_t i)
#line 83
{
  adc12memctl_t x = { .inch = 0, .sref = 0, .eos = 0 };
  uint8_t *memCtlPtr = (uint8_t *)(char *)0x0080;

#line 86
  memCtlPtr += i;
  x = * (adc12memctl_t *)memCtlPtr;
  return x;
}

# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$setMode(int mode)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(0x0020 | 0x0010)) | ((mode << 4) & (0x0020 | 0x0010));
}

# 96 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$set_alarm(void )
{
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type now = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$Counter$get();
#line 98
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type expires;
#line 98
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type remaining;




  expires = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_t0 + /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_dt;


  remaining = (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$to_size_type )(expires - now);


  if (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_t0 <= now) 
    {
      if (expires >= /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$MAX_DELAY) 
    {
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_t0 = now + /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$MAX_DELAY;
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_dt = remaining - /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$MAX_DELAY;
      remaining = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$MAX_DELAY;
    }
  else 
    {
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_t0 += /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_dt;
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$m_dt = 0;
    }
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$AlarmFrom$startAt((/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$from_size_type )now << 5, 
  (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC$1$from_size_type )remaining << 5);
}

# 622 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$congestionBackoff(void )
#line 622
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 623
    {
      CC2420TransmitP$RadioBackoff$requestCongestionBackoff(CC2420TransmitP$m_msg);
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myCongestionBackoff);
    }
#line 626
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC$Random$rand32(void )
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 62
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC$seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC$seed = mlcg;
  }
  return mlcg;
}

# 629 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP$acquireSpiResource(void )
#line 629
{
  error_t error = CC2420TransmitP$SpiResource$immediateRequest();

#line 631
  if (error != SUCCESS) {
      CC2420TransmitP$SpiResource$request();
    }
  return error;
}

# 126 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP$Resource$immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP$WorkingState$requestState(CC2420SpiP$S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP$SpiResource$isOwner()) {
          CC2420SpiP$m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP$SpiResource$immediateRequest()) == SUCCESS) {
            CC2420SpiP$m_holder = id;
          }
        else {
            CC2420SpiP$WorkingState$toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 96 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/StateImplP.nc"
static error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP$S_IDLE || StateImplP$state[id] == StateImplP$S_IDLE) {
          StateImplP$state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

# 174 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$isOwner(uint8_t id)
#line 174
{
  /* atomic removed: atomic calls only */
#line 175
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId == id && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_BUSY) {
        unsigned char __nesc_temp = 
#line 176
        TRUE;

#line 176
        return __nesc_temp;
      }
    else 
#line 177
      {
        unsigned char __nesc_temp = 
#line 177
        FALSE;

#line 177
        return __nesc_temp;
      }
  }
}

#line 130
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void )
#line 130
{
  /* atomic removed: atomic calls only */
#line 131
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$default_owner_id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_GRANTING) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask();
            {
              unsigned char __nesc_temp = 
#line 135
              SUCCESS;

#line 135
              return __nesc_temp;
            }
          }
        else {
#line 137
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 140
                SUCCESS;

#line 140
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 144
  return FAIL;
}

# 265 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P$Usart$setModeSpi(msp430_spi_union_config_t *config)
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

# 107 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP$Resource$request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP$WorkingState$requestState(CC2420SpiP$S_BUSY) == SUCCESS) {
          CC2420SpiP$m_holder = id;
          if (CC2420SpiP$SpiResource$isOwner()) {
              CC2420SpiP$grant$postTask();
            }
          else {
              CC2420SpiP$SpiResource$request();
            }
        }
      else {
          CC2420SpiP$m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 580 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$attemptSend(void )
#line 580
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 584
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
          CC2420TransmitP$SFLUSHTX$strobe();
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$CSN$set();
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
          CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
          {
#line 591
            __nesc_atomic_end(__nesc_atomic); 
#line 591
            return;
          }
        }

      CC2420TransmitP$CSN$clr();

      status = CC2420TransmitP$m_cca ? CC2420TransmitP$STXONCCA$strobe() : CC2420TransmitP$STXON$strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP$SNOP$strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP$m_state = congestion ? CC2420TransmitP$S_SAMPLE_CCA : CC2420TransmitP$S_SFD;
      CC2420TransmitP$CSN$set();
    }
#line 607
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP$totalCcaChecks = 0;
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$congestionBackoff();
    }
  else 
#line 613
    {
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$CC2420_ABORT_PERIOD);
    }
}

# 318 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP$SpiByte$write(addr);
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$clr(void )
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t * )29U &= ~(0x01 << 6);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
}

#line 45
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$set(void )
#line 45
{
#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    * (volatile uint8_t * )29U |= 0x01 << 6;
#line 45
    __nesc_atomic_end(__nesc_atomic); }
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

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$set(void )
#line 45
{
#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    * (volatile uint8_t * )49U |= 0x01 << 4;
#line 45
    __nesc_atomic_end(__nesc_atomic); }
}

#line 45
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$set(void )
#line 45
{
#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    * (volatile uint8_t * )49U |= 0x01 << 5;
#line 45
    __nesc_atomic_end(__nesc_atomic); }
}

#line 45
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$set(void )
#line 45
{
#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    * (volatile uint8_t * )49U |= 0x01 << 6;
#line 45
    __nesc_atomic_end(__nesc_atomic); }
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
static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x10e70e650){
#line 64
  switch (arg_0x10e70e650) {
#line 64
    case AdcP$readDone:
#line 64
      AdcP$readDone$runTask();
#line 64
      break;
#line 64
    case /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask:
#line 64
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case Msp430RefVoltArbiterImplP$switchOff:
#line 64
      Msp430RefVoltArbiterImplP$switchOff$runTask();
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
    case AdcStreamP$readStreamDone:
#line 64
      AdcStreamP$readStreamDone$runTask();
#line 64
      break;
#line 64
    case AdcStreamP$readStreamFail:
#line 64
      AdcStreamP$readStreamFail$runTask();
#line 64
      break;
#line 64
    case AdcStreamP$bufferDone:
#line 64
      AdcStreamP$bufferDone$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$startDone_task:
#line 64
      CC2420CsmaP$startDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$stopDone_task:
#line 64
      CC2420CsmaP$stopDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$sendDone_task:
#line 64
      CC2420CsmaP$sendDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420ControlP$sync:
#line 64
      CC2420ControlP$sync$runTask();
#line 64
      break;
#line 64
    case CC2420ControlP$syncDone:
#line 64
      CC2420ControlP$syncDone$runTask();
#line 64
      break;
#line 64
    case CC2420SpiP$grant:
#line 64
      CC2420SpiP$grant$runTask();
#line 64
      break;
#line 64
    case /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task:
#line 64
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$runTask();
#line 64
      break;
#line 64
    case /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case CC2420ReceiveP$receiveDone_task:
#line 64
      CC2420ReceiveP$receiveDone_task$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x10e70e650);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 155 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 97 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg)
#line 97
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 99
  return __nesc_ntoh_leuint16(header->dest.nxdata);
}

#line 61
static error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 63
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg);

  if (len > CC2420ActiveMessageP$Packet$maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_leuint8(header->type.nxdata, id);
  __nesc_hton_leuint16(header->dest.nxdata, addr);
  __nesc_hton_leuint16(header->destpan.nxdata, CC2420ActiveMessageP$CC2420Config$getPanAddr());
  __nesc_hton_leuint16(header->src.nxdata, CC2420ActiveMessageP$AMPacket$address());

  CC2420ActiveMessageP$SendNotifier$aboutToSend(id, addr, msg);

  return CC2420ActiveMessageP$SubSend$send(msg, len);
}

# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void )
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC$addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 659 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$loadTXFIFO(void )
#line 659
{
  cc2420_header_t *header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg)->tx_power.nxdata);

  if (!tx_power) {
      tx_power = 31;
    }

  CC2420TransmitP$CSN$clr();

  if (CC2420TransmitP$m_tx_power != tx_power) {
      CC2420TransmitP$TXCTRL$write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP$m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.nxdata) - 1;

#line 680
    CC2420TransmitP$TXFIFO$write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.nxdata) - 1);
  }
}

# 305 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP$SpiByte$write(addr);
  CC2420SpiP$SpiByte$write(data >> 8);
  return CC2420SpiP$SpiByte$write(data & 0xff);
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

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/State.nc"
static void UniqueSendP$State$toIdle(void ){
#line 56
  StateImplP$State$toIdle(2U);
#line 56
}
#line 56
# 279 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void )
#line 279
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      unsigned int __nesc_temp = 
#line 280
      CC2420ControlP$m_short_addr;

      {
#line 280
        __nesc_atomic_end(__nesc_atomic); 
#line 280
        return __nesc_temp;
      }
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 403 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$waitForNextPacket(void )
#line 403
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 404
    {
      if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STOPPED) {
          CC2420ReceiveP$SpiResource$release();
          {
#line 407
            __nesc_atomic_end(__nesc_atomic); 
#line 407
            return;
          }
        }
      CC2420ReceiveP$receivingPacket = FALSE;










      if ((CC2420ReceiveP$m_missed_packets && CC2420ReceiveP$FIFO$get()) || !CC2420ReceiveP$FIFOP$get()) {

          if (CC2420ReceiveP$m_missed_packets) {
              CC2420ReceiveP$m_missed_packets--;
            }

          CC2420ReceiveP$beginReceive();
        }
      else {

          CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
          CC2420ReceiveP$m_missed_packets = 0;
          CC2420ReceiveP$SpiResource$release();
        }
    }
#line 435
    __nesc_atomic_end(__nesc_atomic); }
}

#line 358
static void CC2420ReceiveP$beginReceive(void )
#line 358
{
  CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;
  /* atomic removed: atomic calls only */
  CC2420ReceiveP$receivingPacket = TRUE;
  if (CC2420ReceiveP$SpiResource$isOwner()) {
      CC2420ReceiveP$receive();
    }
  else {
#line 365
    if (CC2420ReceiveP$SpiResource$immediateRequest() == SUCCESS) {
        CC2420ReceiveP$receive();
      }
    else {
        CC2420ReceiveP$SpiResource$request();
      }
    }
}

#line 393
static void CC2420ReceiveP$receive(void )
#line 393
{
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$RXFIFO$beginRead((uint8_t *)CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf), 1);
}

# 189 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP$m_addr = addr | 0x40;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$Fifo$continueRead(addr, data, len);

  return status;
}

#line 329
static void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP$m_addr & 0x40) {
      CC2420SpiP$Fifo$readDone(CC2420SpiP$m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP$Fifo$writeDone(CC2420SpiP$m_addr, tx_buf, len, error);
    }
}

# 376 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$flush(void )
#line 376
{
  CC2420ReceiveP$reset_state();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$SpiResource$release();
  CC2420ReceiveP$waitForNextPacket();
}

#line 441
static void CC2420ReceiveP$reset_state(void )
#line 441
{
  CC2420ReceiveP$m_bytes_left = CC2420ReceiveP$RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 443
  CC2420ReceiveP$receivingPacket = FALSE;
  CC2420ReceiveP$m_timestamp_head = 0;
  CC2420ReceiveP$m_timestamp_size = 0;
  CC2420ReceiveP$m_missed_packets = 0;
}

# 456 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP$writeFsctrl(void )
#line 456
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 459
    {
      channel = CC2420ControlP$m_channel;
    }
#line 461
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$FSCTRL$write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP$writeMdmctrl0(void )
#line 473
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 474
    {
      CC2420ControlP$MDMCTRL0$write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP$addressRecognition && CC2420ControlP$hwAddressRecognition) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP$autoAckEnabled && CC2420ControlP$hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 483
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP$writeId(void )
#line 492
{
  nxle_uint16_t id[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 495
    {
      __nesc_hton_leuint16(id[0].nxdata, CC2420ControlP$m_pan);
      __nesc_hton_leuint16(id[1].nxdata, CC2420ControlP$m_short_addr);
    }
#line 498
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$PANID$write(0, (uint8_t *)&id, sizeof id);
}

# 133 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 116 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static error_t Msp430RefVoltArbiterImplP$ClientResource$release(uint8_t client)
{
  error_t error;

#line 119
  if (Msp430RefVoltArbiterImplP$syncOwner == client) {
    Msp430RefVoltArbiterImplP$switchOff$postTask();
    }
#line 121
  error = Msp430RefVoltArbiterImplP$AdcResource$release(client);
#line 133
  return error;
}

# 97 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY && /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$resId == id) {
          if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty() == FALSE) {
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue();
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
            }
          else {
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 65 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id)
#line 65
{
  return /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] & (1 << id % 8);
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

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id)
#line 71
{
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = id;
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
          {
            unsigned char __nesc_temp = 
#line 78
            SUCCESS;

            {
#line 78
              __nesc_atomic_end(__nesc_atomic); 
#line 78
              return __nesc_temp;
            }
          }
        }
#line 80
      {
        unsigned char __nesc_temp = 
#line 80
        /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(id);

        {
#line 80
          __nesc_atomic_end(__nesc_atomic); 
#line 80
          return __nesc_temp;
        }
      }
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP$switchOff(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 80
    {
      if (Msp430RefVoltGeneratorP$HplAdc12$isBusy()) 
        {
          unsigned char __nesc_temp = 
#line 82
          FAIL;

          {
#line 82
            __nesc_atomic_end(__nesc_atomic); 
#line 82
            return __nesc_temp;
          }
        }
      else 
#line 83
        {
          adc12ctl0_t ctl0 = Msp430RefVoltGeneratorP$HplAdc12$getCtl0();

#line 85
          ctl0.enc = 0;
          Msp430RefVoltGeneratorP$HplAdc12$setCtl0(ctl0);
          ctl0.refon = 0;
          Msp430RefVoltGeneratorP$HplAdc12$setCtl0(ctl0);
          {
            unsigned char __nesc_temp = 
#line 89
            SUCCESS;

            {
#line 89
              __nesc_atomic_end(__nesc_atomic); 
#line 89
              return __nesc_temp;
            }
          }
        }
    }
#line 93
    __nesc_atomic_end(__nesc_atomic); }
}

# 148 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 98 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static void AdcP$SubResourceReadNow$granted(uint8_t nowClient)
{
  if (AdcP$configure(nowClient) == SUCCESS) {
    AdcP$state = AdcP$STATE_READNOW;
    }
  else {
#line 103
    AdcP$state = AdcP$STATE_READNOW_INVALID_CONFIG;
    }
#line 104
  AdcP$ResourceReadNow$granted(nowClient);
}

#line 65
static error_t AdcP$configure(uint8_t client)
{
  error_t result = EINVAL;
  const msp430adc12_channel_config_t * config;

#line 69
  config = AdcP$Config$getConfiguration(client);
  if (config->inch != INPUT_CHANNEL_NONE) {
    result = AdcP$SingleChannel$configureSingle(client, config);
    }
#line 72
  return result;
}

# 176 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP$SingleChannel$configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config)
{
  error_t result = ERESERVE;

  if (!config) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    {
      if (Msp430Adc12ImplP$state & Msp430Adc12ImplP$ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 186
          EBUSY;

          {
#line 186
            __nesc_atomic_end(__nesc_atomic); 
#line 186
            return __nesc_temp;
          }
        }
#line 187
      if (Msp430Adc12ImplP$ADCArbiterInfo$userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = 0, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = 0, 
          .cstartadd = 0 };

          adc12memctl_t memctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 1 };

          adc12ctl0_t ctl0 = Msp430Adc12ImplP$HplAdc12$getCtl0();

#line 204
          ctl0.msc = 1;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP$state = Msp430Adc12ImplP$SINGLE_DATA;
          Msp430Adc12ImplP$HplAdc12$setCtl0(ctl0);
          Msp430Adc12ImplP$HplAdc12$setCtl1(ctl1);
          Msp430Adc12ImplP$HplAdc12$setMCtl(0, memctl);
          Msp430Adc12ImplP$HplAdc12$setIEFlags(0x01);
          result = SUCCESS;
        }
    }
#line 215
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

# 221 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static error_t AdcStreamP$ReadStream$read(uint8_t c, uint32_t usPeriod)
{
  if (usPeriod & 0xFFFF0000) {

      AdcStreamP$period = usPeriod / 1000;
      AdcStreamP$periodModified = TRUE;
      AdcStreamP$client = c;
      AdcStreamP$now = AdcStreamP$Alarm$getNow();
      AdcStreamP$SingleChannel$configureSingle(c, AdcStreamP$AdcConfigure$getConfiguration(c));
      if (AdcStreamP$nextBuffer(FALSE) == SUCCESS) {
        AdcStreamP$sampleSingle();
        }
    }
  else 
#line 232
    {
      AdcStreamP$period = usPeriod;
      AdcStreamP$periodModified = FALSE;
      AdcStreamP$client = c;
      AdcStreamP$nextMultiple(c);
    }
  return SUCCESS;
}

#line 177
static error_t AdcStreamP$nextBuffer(bool startNextAlarm)
#line 177
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      struct AdcStreamP$list_entry_t *entry = AdcStreamP$bufferQueue[AdcStreamP$client];

      if (!entry) 
        {

          AdcStreamP$bufferQueueEnd[AdcStreamP$client] = (void *)0;
          AdcStreamP$readStreamDone$postTask();
          {
            unsigned char __nesc_temp = 
#line 187
            FAIL;

            {
#line 187
              __nesc_atomic_end(__nesc_atomic); 
#line 187
              return __nesc_temp;
            }
          }
        }
      else 
#line 190
        {
          uint16_t tmp_count;

#line 192
          AdcStreamP$bufferQueue[AdcStreamP$client] = entry->next;
          if (!AdcStreamP$bufferQueue[AdcStreamP$client]) {
            AdcStreamP$bufferQueueEnd[AdcStreamP$client] = &AdcStreamP$bufferQueue[AdcStreamP$client];
            }
#line 195
          AdcStreamP$pos = AdcStreamP$buffer = (void *)0;
          AdcStreamP$count = entry->count;
          tmp_count = AdcStreamP$count;
          AdcStreamP$pos = AdcStreamP$buffer = (uint16_t * )entry;
          if (startNextAlarm) {
            AdcStreamP$nextAlarm();
            }
#line 201
          {
            unsigned char __nesc_temp = 
#line 201
            SUCCESS;

            {
#line 201
              __nesc_atomic_end(__nesc_atomic); 
#line 201
              return __nesc_temp;
            }
          }
        }
    }
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

#line 206
static void AdcStreamP$nextMultiple(uint8_t c)
{
  if (AdcStreamP$nextBuffer(FALSE) == SUCCESS) {
      msp430adc12_channel_config_t config = *AdcStreamP$AdcConfigure$getConfiguration(c);

#line 210
      config.sampcon_ssel = SAMPCON_SOURCE_SMCLK;
      config.sampcon_id = SAMPCON_CLOCK_DIV_1;
      if (AdcStreamP$SingleChannel$configureMultiple(c, &config, AdcStreamP$pos, AdcStreamP$count, AdcStreamP$period) == SUCCESS) {
        AdcStreamP$SingleChannel$getData(c);
        }
      else 
#line 214
        {
          AdcStreamP$postBuffer(c, AdcStreamP$pos, AdcStreamP$count);
          AdcStreamP$readStreamFail$postTask();
        }
    }
}

# 80 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static void AdcP$ResourceRead$granted(uint8_t client)
{

  error_t result = AdcP$configure(client);

#line 84
  if (result == SUCCESS) {
      AdcP$state = AdcP$STATE_READ;
      result = AdcP$SingleChannel$getData(client);
    }
  else 
#line 87
    {
      AdcP$ResourceRead$release(client);
      AdcP$Read$readDone(client, result, 0);
    }
}

# 78 "RadioSenseToLedsC.nc"
static void RadioSenseToLedsC$Read$readDone(error_t result, uint16_t data)
#line 78
{
  if (RadioSenseToLedsC$locked) {
      return;
    }
  else {
      radio_sense_msg_t *rsm;

      rsm = (radio_sense_msg_t *)RadioSenseToLedsC$Packet$getPayload(&RadioSenseToLedsC$packet, sizeof(radio_sense_msg_t ));
      if (rsm == (void *)0) {
          return;
        }
      __nesc_hton_uint16(rsm->error.nxdata, result);
      __nesc_hton_uint16(rsm->data.nxdata, data);
      if (RadioSenseToLedsC$AMSend$send(AM_BROADCAST_ADDR, &RadioSenseToLedsC$packet, sizeof(radio_sense_msg_t )) == SUCCESS) {
          RadioSenseToLedsC$locked = TRUE;
        }
    }
}

# 157 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static void *CC2420CsmaP$Send$getPayload(message_t *m, uint8_t len)
#line 157
{
  if (len <= CC2420CsmaP$Send$maxPayloadLength()) {
      return (void * )m->data;
    }
  else {
      return (void *)0;
    }
}

# 107 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static void Msp430RefVoltArbiterImplP$RefVolt_2_5V$startDone(error_t error)
{
  if (Msp430RefVoltArbiterImplP$syncOwner != Msp430RefVoltArbiterImplP$NO_OWNER) {


      Msp430RefVoltArbiterImplP$ClientResource$granted(Msp430RefVoltArbiterImplP$syncOwner);
    }
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

# 70 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static void Msp430RefVoltArbiterImplP$AdcResource$granted(uint8_t client)
{
  const msp430adc12_channel_config_t *settings = Msp430RefVoltArbiterImplP$Config$getConfiguration(client);

#line 73
  if (settings->sref == REFERENCE_VREFplus_AVss || 
  settings->sref == REFERENCE_VREFplus_VREFnegterm) {
      error_t started;

#line 76
      if (Msp430RefVoltArbiterImplP$syncOwner != Msp430RefVoltArbiterImplP$NO_OWNER) {



          Msp430RefVoltArbiterImplP$AdcResource$release(client);
          Msp430RefVoltArbiterImplP$AdcResource$request(client);
          return;
        }
      Msp430RefVoltArbiterImplP$syncOwner = client;
      if (settings->ref2_5v == REFVOLT_LEVEL_1_5) {
        started = Msp430RefVoltArbiterImplP$RefVolt_1_5V$start();
        }
      else {
#line 88
        started = Msp430RefVoltArbiterImplP$RefVolt_2_5V$start();
        }
#line 89
      if (started != SUCCESS) {
          Msp430RefVoltArbiterImplP$syncOwner = Msp430RefVoltArbiterImplP$NO_OWNER;
          Msp430RefVoltArbiterImplP$AdcResource$release(client);
          Msp430RefVoltArbiterImplP$AdcResource$request(client);
        }
    }
  else {
#line 95
    Msp430RefVoltArbiterImplP$ClientResource$granted(client);
    }
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP$switchOn(uint8_t level)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    {
      if (Msp430RefVoltGeneratorP$HplAdc12$isBusy()) 
        {
          unsigned char __nesc_temp = 
#line 62
          FAIL;

          {
#line 62
            __nesc_atomic_end(__nesc_atomic); 
#line 62
            return __nesc_temp;
          }
        }
      else 
#line 63
        {
          adc12ctl0_t ctl0 = Msp430RefVoltGeneratorP$HplAdc12$getCtl0();

#line 65
          ctl0.enc = 0;
          Msp430RefVoltGeneratorP$HplAdc12$setCtl0(ctl0);
          ctl0.refon = 1;
          if (level == Msp430RefVoltGeneratorP$REFERENCE_1_5V_PENDING) {
            ctl0.r2_5v = 0;
            }
          else {
#line 71
            ctl0.r2_5v = 1;
            }
#line 72
          Msp430RefVoltGeneratorP$HplAdc12$setCtl0(ctl0);
          {
            unsigned char __nesc_temp = 
#line 73
            SUCCESS;

            {
#line 73
              __nesc_atomic_end(__nesc_atomic); 
#line 73
              return __nesc_temp;
            }
          }
        }
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }
}

# 108 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static void HplAdc12P$HplAdc12$stopConversion(void )
#line 108
{

  uint16_t ctl1 = HplAdc12P$ADC12CTL1;

#line 111
  HplAdc12P$ADC12CTL1 &= ~(0x0002 | 0x0004);
  HplAdc12P$ADC12CTL0 &= ~(0x0001 + 0x0002);
  HplAdc12P$ADC12CTL0 &= ~0x0010;
  HplAdc12P$ADC12CTL1 |= ctl1 & (0x0002 | 0x0004);
}







__attribute((wakeup)) __attribute((interrupt(14)))  void sig_ADC_VECTOR(void )
#line 123
{
  HplAdc12P$HplAdc12$conversionDone(HplAdc12P$ADC12IV);
}

# 503 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static void Msp430Adc12ImplP$stopConversion(void )
{
  uint8_t i;

  if (Msp430Adc12ImplP$state & Msp430Adc12ImplP$USE_TIMERA) {
    Msp430Adc12ImplP$TimerA$setMode(MSP430TIMER_STOP_MODE);
    }
  Msp430Adc12ImplP$resetAdcPin(Msp430Adc12ImplP$HplAdc12$getMCtl(0).inch);
  if (Msp430Adc12ImplP$state & Msp430Adc12ImplP$MULTI_CHANNEL) {
      for (i = 1; i < Msp430Adc12ImplP$numChannels; i++) 
        Msp430Adc12ImplP$resetAdcPin(Msp430Adc12ImplP$HplAdc12$getMCtl(i).inch);
    }
  /* atomic removed: atomic calls only */
#line 515
  {
    Msp430Adc12ImplP$HplAdc12$stopConversion();
    Msp430Adc12ImplP$HplAdc12$resetIFGs();
    Msp430Adc12ImplP$state &= ~Msp430Adc12ImplP$ADC_BUSY;
  }
}

#line 159
static void Msp430Adc12ImplP$resetAdcPin(uint8_t inch)
{

  switch (inch) 
    {
      case 0: Msp430Adc12ImplP$Port60$selectIOFunc();
#line 164
      break;
      case 1: Msp430Adc12ImplP$Port61$selectIOFunc();
#line 165
      break;
      case 2: Msp430Adc12ImplP$Port62$selectIOFunc();
#line 166
      break;
      case 3: Msp430Adc12ImplP$Port63$selectIOFunc();
#line 167
      break;
      case 4: Msp430Adc12ImplP$Port64$selectIOFunc();
#line 168
      break;
      case 5: Msp430Adc12ImplP$Port65$selectIOFunc();
#line 169
      break;
      case 6: Msp430Adc12ImplP$Port66$selectIOFunc();
#line 170
      break;
      case 7: Msp430Adc12ImplP$Port67$selectIOFunc();
#line 171
      break;
    }
}

# 142 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static error_t AdcP$SingleChannel$singleDataReady(uint8_t client, uint16_t data)
{
  switch (AdcP$state) 
    {
      case AdcP$STATE_READ: 
        AdcP$owner = client;
      AdcP$value = data;
      AdcP$readDone$postTask();
      break;
      case AdcP$STATE_READNOW: 
        AdcP$ReadNow$readDone(client, SUCCESS, data);
      break;
      default: 

        break;
    }
  return SUCCESS;
}

# 242 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static error_t AdcStreamP$SingleChannel$singleDataReady(uint8_t streamClient, uint16_t data)
{
  if (AdcStreamP$client == AdcStreamP$NSTREAM) {
    return FAIL;
    }
  if (AdcStreamP$count == 0) 
    {
      AdcStreamP$now = AdcStreamP$Alarm$getNow();
      AdcStreamP$nextBuffer(TRUE);
    }
  else 
    {
      * AdcStreamP$pos++ = data;
      if (AdcStreamP$pos == AdcStreamP$buffer + AdcStreamP$count) 
        {
          /* atomic removed: atomic calls only */
          {
            if (AdcStreamP$lastBuffer) 
              {

                AdcStreamP$bufferQueueEnd[AdcStreamP$client] = (void *)0;
                AdcStreamP$readStreamFail$postTask();
                {
                  unsigned char __nesc_temp = 
#line 264
                  FAIL;

#line 264
                  return __nesc_temp;
                }
              }
            else {
                AdcStreamP$lastCount = AdcStreamP$count;
                AdcStreamP$lastBuffer = AdcStreamP$buffer;
              }
          }
          AdcStreamP$bufferDone$postTask();
          AdcStreamP$nextBuffer(TRUE);
        }
      else {
        AdcStreamP$nextAlarm();
        }
    }
#line 278
  return FAIL;
}

static uint16_t *AdcStreamP$SingleChannel$multipleDataReady(uint8_t streamClient, 
uint16_t *buf, uint16_t length)
{
  /* atomic removed: atomic calls only */
  {
    if (AdcStreamP$lastBuffer) 
      {

        AdcStreamP$bufferQueueEnd[AdcStreamP$client] = (void *)0;
        AdcStreamP$readStreamFail$postTask();
        {
          unsigned int *__nesc_temp = 
#line 291
          0;

#line 291
          return __nesc_temp;
        }
      }
    else {
        AdcStreamP$lastBuffer = AdcStreamP$buffer;
        AdcStreamP$lastCount = AdcStreamP$pos - AdcStreamP$buffer;
      }
  }
  AdcStreamP$bufferDone$postTask();
  AdcStreamP$nextMultiple(streamClient);
  return 0;
}

# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
__attribute((wakeup)) __attribute((interrupt(8)))  void sig_PORT1_VECTOR(void )
{
  volatile int n = P1IFG & P1IE;

  if (n & (1 << 0)) {
#line 57
      HplMsp430InterruptP$Port10$fired();
#line 57
      return;
    }
#line 58
  if (n & (1 << 1)) {
#line 58
      HplMsp430InterruptP$Port11$fired();
#line 58
      return;
    }
#line 59
  if (n & (1 << 2)) {
#line 59
      HplMsp430InterruptP$Port12$fired();
#line 59
      return;
    }
#line 60
  if (n & (1 << 3)) {
#line 60
      HplMsp430InterruptP$Port13$fired();
#line 60
      return;
    }
#line 61
  if (n & (1 << 4)) {
#line 61
      HplMsp430InterruptP$Port14$fired();
#line 61
      return;
    }
#line 62
  if (n & (1 << 5)) {
#line 62
      HplMsp430InterruptP$Port15$fired();
#line 62
      return;
    }
#line 63
  if (n & (1 << 6)) {
#line 63
      HplMsp430InterruptP$Port16$fired();
#line 63
      return;
    }
#line 64
  if (n & (1 << 7)) {
#line 64
      HplMsp430InterruptP$Port17$fired();
#line 64
      return;
    }
}

#line 158
__attribute((wakeup)) __attribute((interrupt(2)))  void sig_PORT2_VECTOR(void )
{
  volatile int n = P2IFG & P2IE;

  if (n & (1 << 0)) {
#line 162
      HplMsp430InterruptP$Port20$fired();
#line 162
      return;
    }
#line 163
  if (n & (1 << 1)) {
#line 163
      HplMsp430InterruptP$Port21$fired();
#line 163
      return;
    }
#line 164
  if (n & (1 << 2)) {
#line 164
      HplMsp430InterruptP$Port22$fired();
#line 164
      return;
    }
#line 165
  if (n & (1 << 3)) {
#line 165
      HplMsp430InterruptP$Port23$fired();
#line 165
      return;
    }
#line 166
  if (n & (1 << 4)) {
#line 166
      HplMsp430InterruptP$Port24$fired();
#line 166
      return;
    }
#line 167
  if (n & (1 << 5)) {
#line 167
      HplMsp430InterruptP$Port25$fired();
#line 167
      return;
    }
#line 168
  if (n & (1 << 6)) {
#line 168
      HplMsp430InterruptP$Port26$fired();
#line 168
      return;
    }
#line 169
  if (n & (1 << 7)) {
#line 169
      HplMsp430InterruptP$Port27$fired();
#line 169
      return;
    }
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
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$inUse(void )
#line 150
{
  /* atomic removed: atomic calls only */
#line 151
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED) 
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






static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$userId(void )
#line 163
{
  /* atomic removed: atomic calls only */
#line 164
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state != /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 166
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$NO_RES;

#line 166
        return __nesc_temp;
      }
#line 167
    {
      unsigned char __nesc_temp = 
#line 167
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId;

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

