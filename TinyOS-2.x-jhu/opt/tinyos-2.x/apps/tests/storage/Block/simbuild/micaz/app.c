#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/i686-apple-darwin10/4.2.1/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 214
typedef long unsigned int size_t;
#line 326
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
# 37 "/usr/include/i386/_types.h" 3
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
#line 70
typedef int __darwin_ct_rune_t;








#line 76
typedef union __nesc_unnamed4242 {
  char __mbstate8[128];
  long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;





typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 58 "/usr/include/sys/_types.h" 3
struct __darwin_pthread_handler_rec {

  void (*__routine)(void *arg_0x10052bb40);
  void *__arg;
  struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t {
#line 64
  long __sig;
#line 64
  char __opaque[56];
};
#line 65
struct _opaque_pthread_cond_t {
#line 65
  long __sig;
#line 65
  char __opaque[40];
};
#line 66
struct _opaque_pthread_condattr_t {
#line 66
  long __sig;
#line 66
  char __opaque[8];
};
#line 67
struct _opaque_pthread_mutex_t {
#line 67
  long __sig;
#line 67
  char __opaque[56];
};
#line 68
struct _opaque_pthread_mutexattr_t {
#line 68
  long __sig;
#line 68
  char __opaque[8];
};
#line 69
struct _opaque_pthread_once_t {
#line 69
  long __sig;
#line 69
  char __opaque[8];
};
#line 70
struct _opaque_pthread_rwlock_t {
#line 70
  long __sig;
#line 70
  char __opaque[192];
};
#line 71
struct _opaque_pthread_rwlockattr_t {
#line 71
  long __sig;
#line 71
  char __opaque[16];
};
#line 72
struct _opaque_pthread_t {
#line 72
  long __sig;
#line 72
  struct __darwin_pthread_handler_rec *__cleanup_stack;
#line 72
  char __opaque[1168];
};
#line 94
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;

#line 112
typedef struct _opaque_pthread_attr_t 
__darwin_pthread_attr_t;

#line 114
typedef struct _opaque_pthread_cond_t 
__darwin_pthread_cond_t;

#line 116
typedef struct _opaque_pthread_condattr_t 
__darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;

#line 119
typedef struct _opaque_pthread_mutex_t 
__darwin_pthread_mutex_t;

#line 121
typedef struct _opaque_pthread_mutexattr_t 
__darwin_pthread_mutexattr_t;

#line 123
typedef struct _opaque_pthread_once_t 
__darwin_pthread_once_t;

#line 125
typedef struct _opaque_pthread_rwlock_t 
__darwin_pthread_rwlock_t;

#line 127
typedef struct _opaque_pthread_rwlockattr_t 
__darwin_pthread_rwlockattr_t;

#line 129
typedef struct _opaque_pthread_t *
__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 39 "/usr/include/_types.h" 3
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 20 "/usr/lib/gcc/i686-apple-darwin10/4.2.1/include/stdint.h" 3
typedef signed char int8_t;




typedef short int16_t;




typedef int int32_t;




typedef long long int64_t;




typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long long uint64_t;



typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;






typedef long intptr_t;




typedef unsigned long uintptr_t;







typedef long int intmax_t;








typedef long unsigned int uintmax_t;
# 274 "/usr/include/inttypes.h" 3
#line 271
typedef struct __nesc_unnamed4243 {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;
# 281 "/opt/nesc/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




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
# 70 "/usr/include/string.h" 3
typedef __darwin_ssize_t ssize_t;
#line 82
int memcmp(const void *arg_0x100710718, const void *arg_0x1007109f0, size_t arg_0x100710c98);









int strcmp(const char *arg_0x100726d18, const char *arg_0x10072e020);





size_t strlen(const char *arg_0x100732720);







char *strrchr(const char *arg_0x10073d5e0, int arg_0x10073d848);
# 55 "/usr/include/secure/_string.h" 3
static __inline void *
__inline_memcpy_chk(void *__dest, const void *__src, size_t __len);
#line 77
static __inline void *
__inline_memset_chk(void *__dest, int __val, size_t __len);









static __inline char *
__inline_strcpy_chk(char *__dest, const char *__src);
# 83 "/usr/include/sys/wait.h" 3
#line 79
typedef enum __nesc_unnamed4244 {
  P_ALL, 
  P_PID, 
  P_PGID
} idtype_t;






typedef __darwin_pid_t pid_t;




typedef __darwin_id_t id_t;
# 39 "/usr/include/i386/signal.h" 3
typedef int sig_atomic_t;
# 43 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_i386_thread_state {

  unsigned int __eax;
  unsigned int __ebx;
  unsigned int __ecx;
  unsigned int __edx;
  unsigned int __edi;
  unsigned int __esi;
  unsigned int __ebp;
  unsigned int __esp;
  unsigned int __ss;
  unsigned int __eflags;
  unsigned int __eip;
  unsigned int __cs;
  unsigned int __ds;
  unsigned int __es;
  unsigned int __fs;
  unsigned int __gs;
};
#line 89
struct __darwin_fp_control {

  unsigned short __invalid : 1, 
  __denorm : 1, 
  __zdiv : 1, 
  __ovrfl : 1, 
  __undfl : 1, 
  __precis : 1,  : 
  2, 
  __pc : 2, 





  __rc : 2,  : 






  1,  : 
  3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
#line 147
struct __darwin_fp_status {

  unsigned short __invalid : 1, 
  __denorm : 1, 
  __zdiv : 1, 
  __ovrfl : 1, 
  __undfl : 1, 
  __precis : 1, 
  __stkflt : 1, 
  __errsumm : 1, 
  __c0 : 1, 
  __c1 : 1, 
  __c2 : 1, 
  __tos : 3, 
  __c3 : 1, 
  __busy : 1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
#line 191
struct __darwin_mmst_reg {

  char __mmst_reg[10];
  char __mmst_rsrv[6];
};
#line 210
struct __darwin_xmm_reg {

  char __xmm_reg[16];
};
#line 232
struct __darwin_i386_float_state {

  int __fpu_reserved[2];
  struct __darwin_fp_control __fpu_fcw;
  struct __darwin_fp_status __fpu_fsw;
  __uint8_t __fpu_ftw;
  __uint8_t __fpu_rsrv1;
  __uint16_t __fpu_fop;
  __uint32_t __fpu_ip;
  __uint16_t __fpu_cs;
  __uint16_t __fpu_rsrv2;
  __uint32_t __fpu_dp;
  __uint16_t __fpu_ds;
  __uint16_t __fpu_rsrv3;
  __uint32_t __fpu_mxcsr;
  __uint32_t __fpu_mxcsrmask;
  struct __darwin_mmst_reg __fpu_stmm0;
  struct __darwin_mmst_reg __fpu_stmm1;
  struct __darwin_mmst_reg __fpu_stmm2;
  struct __darwin_mmst_reg __fpu_stmm3;
  struct __darwin_mmst_reg __fpu_stmm4;
  struct __darwin_mmst_reg __fpu_stmm5;
  struct __darwin_mmst_reg __fpu_stmm6;
  struct __darwin_mmst_reg __fpu_stmm7;
  struct __darwin_xmm_reg __fpu_xmm0;
  struct __darwin_xmm_reg __fpu_xmm1;
  struct __darwin_xmm_reg __fpu_xmm2;
  struct __darwin_xmm_reg __fpu_xmm3;
  struct __darwin_xmm_reg __fpu_xmm4;
  struct __darwin_xmm_reg __fpu_xmm5;
  struct __darwin_xmm_reg __fpu_xmm6;
  struct __darwin_xmm_reg __fpu_xmm7;
  char __fpu_rsrv4[14 * 16];
  int __fpu_reserved1;
};
#line 308
struct __darwin_i386_exception_state {

  unsigned int __trapno;
  unsigned int __err;
  unsigned int __faultvaddr;
};
#line 326
struct __darwin_x86_debug_state32 {

  unsigned int __dr0;
  unsigned int __dr1;
  unsigned int __dr2;
  unsigned int __dr3;
  unsigned int __dr4;
  unsigned int __dr5;
  unsigned int __dr6;
  unsigned int __dr7;
};
#line 358
struct __darwin_x86_thread_state64 {

  __uint64_t __rax;
  __uint64_t __rbx;
  __uint64_t __rcx;
  __uint64_t __rdx;
  __uint64_t __rdi;
  __uint64_t __rsi;
  __uint64_t __rbp;
  __uint64_t __rsp;
  __uint64_t __r8;
  __uint64_t __r9;
  __uint64_t __r10;
  __uint64_t __r11;
  __uint64_t __r12;
  __uint64_t __r13;
  __uint64_t __r14;
  __uint64_t __r15;
  __uint64_t __rip;
  __uint64_t __rflags;
  __uint64_t __cs;
  __uint64_t __fs;
  __uint64_t __gs;
};
#line 413
struct __darwin_x86_float_state64 {

  int __fpu_reserved[2];
  struct __darwin_fp_control __fpu_fcw;
  struct __darwin_fp_status __fpu_fsw;
  __uint8_t __fpu_ftw;
  __uint8_t __fpu_rsrv1;
  __uint16_t __fpu_fop;


  __uint32_t __fpu_ip;
  __uint16_t __fpu_cs;

  __uint16_t __fpu_rsrv2;


  __uint32_t __fpu_dp;
  __uint16_t __fpu_ds;

  __uint16_t __fpu_rsrv3;
  __uint32_t __fpu_mxcsr;
  __uint32_t __fpu_mxcsrmask;
  struct __darwin_mmst_reg __fpu_stmm0;
  struct __darwin_mmst_reg __fpu_stmm1;
  struct __darwin_mmst_reg __fpu_stmm2;
  struct __darwin_mmst_reg __fpu_stmm3;
  struct __darwin_mmst_reg __fpu_stmm4;
  struct __darwin_mmst_reg __fpu_stmm5;
  struct __darwin_mmst_reg __fpu_stmm6;
  struct __darwin_mmst_reg __fpu_stmm7;
  struct __darwin_xmm_reg __fpu_xmm0;
  struct __darwin_xmm_reg __fpu_xmm1;
  struct __darwin_xmm_reg __fpu_xmm2;
  struct __darwin_xmm_reg __fpu_xmm3;
  struct __darwin_xmm_reg __fpu_xmm4;
  struct __darwin_xmm_reg __fpu_xmm5;
  struct __darwin_xmm_reg __fpu_xmm6;
  struct __darwin_xmm_reg __fpu_xmm7;
  struct __darwin_xmm_reg __fpu_xmm8;
  struct __darwin_xmm_reg __fpu_xmm9;
  struct __darwin_xmm_reg __fpu_xmm10;
  struct __darwin_xmm_reg __fpu_xmm11;
  struct __darwin_xmm_reg __fpu_xmm12;
  struct __darwin_xmm_reg __fpu_xmm13;
  struct __darwin_xmm_reg __fpu_xmm14;
  struct __darwin_xmm_reg __fpu_xmm15;
  char __fpu_rsrv4[6 * 16];
  int __fpu_reserved1;
};
#line 517
struct __darwin_x86_exception_state64 {

  unsigned int __trapno;
  unsigned int __err;
  __uint64_t __faultvaddr;
};
#line 535
struct __darwin_x86_debug_state64 {

  __uint64_t __dr0;
  __uint64_t __dr1;
  __uint64_t __dr2;
  __uint64_t __dr3;
  __uint64_t __dr4;
  __uint64_t __dr5;
  __uint64_t __dr6;
  __uint64_t __dr7;
};
# 48 "/usr/include/i386/_structs.h" 3
struct __darwin_mcontext32 {

  struct __darwin_i386_exception_state __es;
  struct __darwin_i386_thread_state __ss;
  struct __darwin_i386_float_state __fs;
};
#line 68
struct __darwin_mcontext64 {

  struct __darwin_x86_exception_state64 __es;
  struct __darwin_x86_thread_state64 __ss;
  struct __darwin_x86_float_state64 __fs;
};
#line 91
typedef struct __darwin_mcontext64 *mcontext_t;
# 75 "/usr/include/sys/_structs.h" 3
struct __darwin_sigaltstack {

  void *ss_sp;
  __darwin_size_t ss_size;
  int ss_flags;
};
#line 128
struct __darwin_ucontext {

  int uc_onstack;
  __darwin_sigset_t uc_sigmask;
  struct __darwin_sigaltstack uc_stack;
  struct __darwin_ucontext *uc_link;
  __darwin_size_t uc_mcsize;
  struct __darwin_mcontext64 *uc_mcontext;
};
#line 218
typedef struct __darwin_sigaltstack stack_t;








typedef struct __darwin_ucontext ucontext_t;
# 163 "/usr/include/sys/signal.h" 3
typedef __darwin_pthread_attr_t pthread_attr_t;




typedef __darwin_sigset_t sigset_t;









typedef __darwin_uid_t uid_t;


union sigval {

  int sival_int;
  void *sival_ptr;
};





struct sigevent {
  int sigev_notify;
  int sigev_signo;
  union sigval sigev_value;
  void (*sigev_notify_function)(union sigval arg_0x1007c56f0);
  pthread_attr_t *sigev_notify_attributes;
};
#line 211
#line 200
typedef struct __siginfo {
  int si_signo;
  int si_errno;
  int si_code;
  pid_t si_pid;
  uid_t si_uid;
  int si_status;
  void *si_addr;
  union sigval si_value;
  long si_band;
  unsigned long __pad[7];
} siginfo_t;
#line 292
union __sigaction_u {
  void (*__sa_handler)(int arg_0x1007ca250);
  void (*__sa_sigaction)(int arg_0x1007ca8d8, struct __siginfo *arg_0x1007cac38, 
  void *arg_0x1007c9020);
};


struct __sigaction {
  union __sigaction_u __sigaction_u;
  void (*sa_tramp)(void *arg_0x1007d30c8, int arg_0x1007d3330, int arg_0x1007d3598, siginfo_t *arg_0x1007d3898, void *arg_0x1007d3b38);
  sigset_t sa_mask;
  int sa_flags;
};




struct sigaction {
  union __sigaction_u __sigaction_u;
  sigset_t sa_mask;
  int sa_flags;
};
#line 354
typedef void (*sig_t)(int arg_0x1007d0a40);
#line 371
struct sigvec {
  void (*sv_handler)(int arg_0x1007da5f0);
  int sv_mask;
  int sv_flags;
};
#line 390
struct sigstack {
  char *ss_sp;
  int ss_onstack;
};
# 100 "/usr/include/sys/_structs.h" 3
struct timeval {

  __darwin_time_t tv_sec;
  __darwin_suseconds_t tv_usec;
};
# 88 "/usr/include/sys/resource.h" 3
typedef __uint64_t rlim_t;
#line 144
struct rusage {
  struct timeval ru_utime;
  struct timeval ru_stime;








  long ru_maxrss;

  long ru_ixrss;
  long ru_idrss;
  long ru_isrss;
  long ru_minflt;
  long ru_majflt;
  long ru_nswap;
  long ru_inblock;
  long ru_oublock;
  long ru_msgsnd;
  long ru_msgrcv;
  long ru_nsignals;
  long ru_nvcsw;
  long ru_nivcsw;
};
#line 215
struct rlimit {
  rlim_t rlim_cur;
  rlim_t rlim_max;
};
# 201 "/usr/include/sys/wait.h" 3
union wait {
  int w_status;



  struct __nesc_unnamed4245 {

    unsigned int w_Termsig : 7, 
    w_Coredump : 1, 
    w_Retcode : 8, 
    w_Filler : 16;
  } 






  w_T;





  struct __nesc_unnamed4246 {

    unsigned int w_Stopval : 8, 
    w_Stopsig : 8, 
    w_Filler : 16;
  } 





  w_S;
};
# 81 "/usr/include/stdlib.h" 3
typedef __darwin_ct_rune_t ct_rune_t;




typedef __darwin_rune_t rune_t;
#line 100
#line 97
typedef struct __nesc_unnamed4247 {
  int quot;
  int rem;
} div_t;




#line 102
typedef struct __nesc_unnamed4248 {
  long quot;
  long rem;
} ldiv_t;





#line 108
typedef struct __nesc_unnamed4249 {
  long long quot;
  long long rem;
} lldiv_t;
#line 160
void free(void *arg_0x101017788);








void *malloc(size_t arg_0x10101f0c8);
# 80 "/usr/include/i386/types.h" 3
typedef unsigned char u_int8_t;




typedef unsigned short u_int16_t;




typedef unsigned int u_int32_t;




typedef unsigned long long u_int64_t;


typedef int64_t register_t;
#line 114
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 258 "/usr/include/stdlib.h" 3
typedef __darwin_dev_t dev_t;




typedef __darwin_mode_t mode_t;
# 49 "/usr/include/architecture/i386/math.h" 3
typedef float float_t;
typedef double double_t;
#line 571
struct exception {
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 70 "/usr/include/runetype.h" 3
typedef __darwin_wint_t wint_t;
#line 86
#line 81
typedef struct __nesc_unnamed4250 {
  __darwin_rune_t __min;
  __darwin_rune_t __max;
  __darwin_rune_t __map;
  __uint32_t *__types;
} _RuneEntry;




#line 88
typedef struct __nesc_unnamed4251 {
  int __nranges;
  _RuneEntry *__ranges;
} _RuneRange;




#line 93
typedef struct __nesc_unnamed4252 {
  char __name[14];
  __uint32_t __mask;
} _RuneCharClass;
#line 127
#line 98
typedef struct __nesc_unnamed4253 {
  char __magic[8];
  char __encoding[32];

  __darwin_rune_t (*__sgetrune)(const char *arg_0x10118e5a0, __darwin_size_t arg_0x10118e8a0, char const **arg_0x10118ebb0);
  int (*__sputrune)(__darwin_rune_t arg_0x10118c2e8, char *arg_0x10118c588, __darwin_size_t arg_0x10118c888, char **arg_0x10118cb60);
  __darwin_rune_t __invalid_rune;

  __uint32_t __runetype[1 << 8];
  __darwin_rune_t __maplower[1 << 8];
  __darwin_rune_t __mapupper[1 << 8];






  _RuneRange __runetype_ext;
  _RuneRange __maplower_ext;
  _RuneRange __mapupper_ext;

  void *__variable;
  int __variable_len;




  int __ncharclasses;
  _RuneCharClass *__charclasses;
} _RuneLocale;
# 70 "/usr/include/stdio.h" 3
typedef __darwin_va_list va_list;




typedef __darwin_off_t off_t;
#line 87
typedef __darwin_off_t fpos_t;










struct __sbuf {
  unsigned char *_base;
  int _size;
};


struct __sFILEX;
#line 163
#line 132
typedef struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;
  int (*_close)(void *arg_0x1011e1710);
  int (*_read)(void *arg_0x1011e1d78, char *arg_0x1011e0060, int arg_0x1011e02c8);
  fpos_t (*_seek)(void *arg_0x1011e0970, fpos_t arg_0x1011e0c18, int arg_0x1011e0e80);
  int (*_write)(void *arg_0x1011de518, const char *arg_0x1011de7f0, int arg_0x1011dea58);


  struct __sbuf _ub;
  struct __sFILEX *_extra;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  fpos_t _offset;
} FILE;
#line 253
int fflush(FILE *arg_0x1011f80c8);






FILE *fopen(const char *arg_0x1011f5a20, const char *arg_0x1011f5cf8) __asm ("_""fopen");

int fprintf(FILE *arg_0x1011f3b58, const char *arg_0x1011f3e30, ...);


size_t fread(void *arg_0x1012032c0, size_t arg_0x101203568, size_t arg_0x101203810, FILE *arg_0x101203ae0);
FILE *freopen(const char *arg_0x1012003c0, const char *arg_0x101200698, 
FILE *arg_0x101200988) __asm ("_""freopen");

int fseek(FILE *arg_0x1011fd370, long arg_0x1011fd5d8, int arg_0x1011fd840);


size_t fwrite(const void *arg_0x10120f4a0, size_t arg_0x10120f748, size_t arg_0x10120f9f0, FILE *arg_0x10120fcc0) __asm ("_""fwrite");








int printf(const char *arg_0x1012092c0, ...);
#line 296
int vfprintf(FILE *arg_0x101225680, const char *arg_0x101225958, va_list arg_0x101225c08);
#line 319
FILE *fdopen(int arg_0x10121caa8, const char *arg_0x10121cd80) __asm ("_""fdopen");




int fileno(FILE *arg_0x10122f888);
# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4254 {
#line 68
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};



void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);
long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);

bool sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel);
uint8_t sim_mote_get_radio_channel(int mote);
# 57 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 90
struct __nesc_attr_atleastonce {
};
#line 91
struct __nesc_attr_exactlyonce {
};
# 43 "/usr/lib/gcc/i686-apple-darwin10/4.2.1/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 9 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x1012949b0), 
int (*key_eq_fn)(void *arg_0x1012921b8, void *arg_0x101292458));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4255 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 43
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 48
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4256 {
  SIM_LOG_OUTPUT_COUNT = 131U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 76
static void fillInOutput(int id, char *name);
#line 151
static inline void sim_log_init();
#line 164
static inline void sim_log_add_channel(char *name, FILE *file);
#line 204
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 226
static void sim_log_commit_change();
#line 238
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 253
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 268
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 298
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/heap.h"
#line 50
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 51
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 103
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 119
static inline void expand_heap(heap_t *heap);
#line 133
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 147
static void swap(node_t *first, node_t *second);
#line 160
static void down_heap(heap_t *heap, int findex);
#line 186
static void up_heap(heap_t *heap, int findex);
# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;
# 88 "/usr/include/sys/_structs.h" 3
struct timespec {

  __darwin_time_t tv_sec;
  long tv_nsec;
};
#line 186
#line 184
typedef struct fd_set {
  __int32_t fds_bits[1024 % (sizeof(__int32_t ) * 8) == 0 ? 1024 / (sizeof(__int32_t ) * 8) : 1024 / (sizeof(__int32_t ) * 8) + 1];
} fd_set;
# 81 "/usr/include/sys/time.h" 3
typedef __darwin_time_t time_t;




typedef __darwin_suseconds_t suseconds_t;






struct itimerval {
  struct timeval it_interval;
  struct timeval it_value;
};
#line 143
struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};
#line 186
struct clockinfo {
  int hz;
  int tick;
  int tickadj;
  int stathz;
  int profhz;
};
# 77 "/usr/include/time.h" 3
typedef __darwin_clock_t clock_t;
#line 90
struct tm {
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long tm_gmtoff;
  char *tm_zone;
};
#line 127
struct tm;
struct tm;
struct tm;
#line 142
struct tm;
struct tm;
# 210 "/usr/include/sys/time.h" 3
int gettimeofday(struct timeval *arg_0x1013f2d48, void *arg_0x1013f0020);
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4257 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 56
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 75
#line 65
typedef struct sim_noise_node_t {
  char key[NOISE_HISTORY];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal;
  uint32_t noiseGenTime;
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint32_t cur_t, uint8_t channel_id);
void sim_noise_trace_add(uint16_t node_id, char val, uint8_t channel_id);
void sim_noise_create_model(uint16_t node_id, uint8_t channel_id);
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 72
void sim_end()   ;





int sim_random()   ;
#line 94
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 148
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 171
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_gain.h"
#line 48
typedef struct gain_entry {
  int mote;
  double gain;
  int channel;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain, int channel_id);
double sim_gain_value(int src, int dest, int channel_id);

bool sim_gain_connected(int src, int dest, int channel_id);
void sim_gain_remove(int src, int dest, int channel_id);

void sim_gain_set_noise_floor(int node, double mean, double range, int channel_id);
double sim_gain_sample_noise(int node, int channel_id);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src, int channnel_id);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;

gain_entry_t *connectivity[1000 + 1][16];
sim_gain_noise_t localNoise[1000 + 1][16];

double sensitivity = 4.0;
static inline gain_entry_t *sim_gain_allocate_link(int mote, int channel_id);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src, int channel_id)   ;









gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain, int channel_id)   ;
#line 56
double sim_gain_value(int src, int dest, int channel_id)   ;
#line 74
bool sim_gain_connected(int src, int dest, int channel_id)   ;
#line 90
void sim_gain_remove(int src, int dest, int channel_id)   ;
#line 123
void sim_gain_set_noise_floor(int node, double mean, double range, int channel_id)   ;
#line 147
double sim_gain_sample_noise(int node, int channel_id)   ;
#line 160
static inline gain_entry_t *sim_gain_allocate_link(int mote, int channel_id);








void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static inline double RandomUniform(void );
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x101544a88, int arg_0x101544cf0);
static inline double RandomUniform(void );
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;
sim_noise_node_t noiseData[1000][16];
inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);
void makeNoiseModel(uint16_t node_id, uint8_t channel_id);
void makePmfDistr(uint16_t node_id, uint8_t channel_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 79
void sim_noise_create_model(uint16_t node_id, uint8_t channel_id)   ;
#line 93
void sim_noise_trace_add(uint16_t node_id, char noiseVal, uint8_t channel_id)   ;
#line 107
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise, uint8_t channel_id)   ;
#line 188
void sim_noise_dist(uint16_t node_id, uint8_t channel_id)   ;
#line 242
void arrangeKey(uint16_t node_id, uint8_t channel_id)   ;









void makePmfDistr(uint16_t node_id, uint8_t channel_id)   ;
#line 282
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id, uint8_t channel_id)   ;
#line 367
char sim_noise_generate(uint16_t node_id, uint32_t cur_t, uint8_t channel_id)   ;
#line 419
void makeNoiseModel(uint16_t node_id, uint8_t channel_id)   ;
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 51
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);

void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn);
uint8_t sim_packet_dsn(sim_packet_t *msg);
# 6 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4258 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4259 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 13 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_uint8_t dsn;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 15
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;
#line 29
#line 19
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t lqi;
  nx_uint8_t ack;
  nx_uint16_t time;
  nx_uint8_t destroyable;
} __attribute__((packed)) 



tossim_metadata_t;
# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4260 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4261 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4262 {
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
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/platform_message.h"
#line 41
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 46
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 50
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;




void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn)   ;




uint8_t sim_packet_dsn(sim_packet_t *msg)   ;
# 40 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4263 {
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
# 4 "simbuild/micaz/StorageVolumes.h"
enum __nesc_unnamed4264 {
  VOLUME_BLOCKTEST
};
# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4265 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/Storage.h"
typedef uint8_t volume_id_t;
typedef uint32_t storage_addr_t;
typedef uint32_t storage_len_t;
typedef uint32_t storage_cookie_t;

enum __nesc_unnamed4266 {
  SEEK_BEGINNING = 0
};
# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45db_chip.h"
enum __nesc_unnamed4267 {
  AT45_MAX_PAGES = 2048, 
  AT45_PAGE_SIZE = 264, 
  AT45_PAGE_SIZE_LOG2 = 8
};

typedef uint16_t at45page_t;
typedef uint16_t at45pageoffset_t;
# 16 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/HplAt45db.h"
enum __nesc_unnamed4268 {
  AT45_C_READ_BUFFER1 = 0xd4, 
  AT45_C_READ_BUFFER2 = 0xd6, 
  AT45_C_READ_CONTINUOUS = 0xe8, 
  AT45_C_READ_PAGE = 0xd2, 
  AT45_C_WRITE_BUFFER1 = 0x84, 
  AT45_C_WRITE_BUFFER2 = 0x87, 
  AT45_C_WRITE_MEM_BUFFER1 = 0x82, 
  AT45_C_WRITE_MEM_BUFFER2 = 0x85, 
  AT45_C_FILL_BUFFER1 = 0x53, 
  AT45_C_FILL_BUFFER2 = 0x55, 
  AT45_C_FLUSH_BUFFER1 = 0x83, 
  AT45_C_FLUSH_BUFFER2 = 0x86, 
  AT45_C_QFLUSH_BUFFER1 = 0x88, 
  AT45_C_QFLUSH_BUFFER2 = 0x89, 
  AT45_C_COMPARE_BUFFER1 = 0x60, 
  AT45_C_COMPARE_BUFFER2 = 0x61, 
  AT45_C_REQ_STATUS = 0xd7, 
  AT45_C_ERASE_PAGE = 0x81
};
# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45db.h"
enum __nesc_unnamed4269 {
  AT45_ERASE, 
  AT45_DONT_ERASE, 
  AT45_PREVIOUSLY_ERASED
};
# 25 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4270 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4271 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 79
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 91
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 100
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 114
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4272 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4273 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4274 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4275 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4276 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4277 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4278 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4279 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4280 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4281 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4282 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4283 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 48 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4284 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 34 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/sim/crc.h"
uint16_t crcTable[256] = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };


static inline uint16_t crcByte(uint16_t oldCrc, uint8_t byte);
# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4285 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4286 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4287 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 138 "/usr/include/sys/unistd.h" 3
struct accessx_descriptor {
  unsigned int ad_name_offset;
  int ad_flags;
  int ad_pad[2];
};
# 83 "/usr/include/unistd.h" 3
typedef __darwin_gid_t gid_t;
#line 127
typedef __darwin_useconds_t useconds_t;





typedef __darwin_uuid_t uuid_t;
#line 611
struct fssearchblock;
struct searchstate;
enum /*RandRWAppC.BlockStorageC*/BlockStorageC__0____nesc_unnamed4288 {
  BlockStorageC__0__BLOCK_ID = 0U + 0U, BlockStorageC__0__RESOURCE_ID = 0U
};
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RandRWC__Boot__booted(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void RandRWC__SerialControl__startDone(error_t error);
#line 117
static void RandRWC__SerialControl__stopDone(error_t error);
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
static void RandRWC__BlockRead__computeCrcDone(storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void RandRWC__BlockRead__readDone(storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static void RandRWC__BlockWrite__syncDone(error_t error);
#line 71
static void RandRWC__BlockWrite__writeDone(storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void RandRWC__BlockWrite__eraseDone(error_t error);
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
static void BlockStorageP__At45db__copyPageDone(error_t error);
#line 125
static void BlockStorageP__At45db__syncDone(error_t error);
#line 143
static void BlockStorageP__At45db__flushDone(error_t error);
#line 69
static void BlockStorageP__At45db__writeDone(error_t error);
#line 105
static void BlockStorageP__At45db__eraseDone(error_t error);
#line 183
static void BlockStorageP__At45db__computeCrcDone(error_t error, uint16_t crc);
#line 162
static void BlockStorageP__At45db__readDone(error_t error);
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static void BlockStorageP__BlockWrite__default__syncDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a8320, 
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void BlockStorageP__BlockWrite__default__writeDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a8320, 
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);










static error_t BlockStorageP__BlockWrite__erase(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a8320);
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static void BlockStorageP__BlockWrite__default__eraseDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a8320, 
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
#line 58
static error_t BlockStorageP__BlockWrite__write(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a8320, 
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
#line 103
static error_t BlockStorageP__BlockWrite__sync(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a8320);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
static error_t BlockStorageP__BlockRead__read(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a7640, 
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
#line 95
static void BlockStorageP__BlockRead__default__computeCrcDone(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a7640, 
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);






static storage_len_t BlockStorageP__BlockRead__getSize(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a7640);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
static void BlockStorageP__BlockRead__default__readDone(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a7640, 
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static at45page_t BlockStorageP__BConfig__npages(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dc250);
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__default__flipped(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dc250);
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__default__isConfig(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dc250);
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__default__writeHook(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dc250);
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static at45page_t BlockStorageP__BConfig__remap(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dc250, 
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t page);
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__default__volumeSize(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017b66b8);
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__default__remap(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017b66b8, 
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__default__release(
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dd568);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__default__request(
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dd568);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void BlockStorageP__Resource__granted(
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dd568);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 51
static error_t MotePlatformP__SubInit__default__init(void );
#line 51
static error_t MotePlatformP__PlatformInit__init(void );
# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );


static bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );

static bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x1016c1328);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__default__runTask(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x1016c1328);
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP__Scheduler__init(void );







static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
# 36 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMote.nc"
static void SimMoteP__SimMote__setEuid(long long int euid);


static int SimMoteP__SimMote__getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP__SimMote__turnOff(void );
#line 40
static void SimMoteP__SimMote__turnOn(void );
#line 35
static long long int SimMoteP__SimMote__getEuid(void );







static error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel);
#line 38
static bool SimMoteP__SimMote__isOn(void );





static uint8_t SimMoteP__SimMote__getRadioChannel(void );
#line 37
static long long int SimMoteP__SimMote__getStartTime(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x101c50dd0);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x101c4c020);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x101c4c020);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 73
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x101c51bf0);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x101c51bf0);
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x101c51bf0);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 155 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
static void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void *data, at45pageoffset_t n);
#line 100
static void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind);
#line 120
static void At45dbP__At45db__syncAll(void );
#line 62
static void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void *data, at45pageoffset_t n);
#line 176
static void At45dbP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void At45dbP__taskFail__runTask(void );
#line 64
static void At45dbP__taskSuccess__runTask(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t At45dbP__Init__init(void );
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void At45dbP__taskCrcSuccess__runTask(void );
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(
# 18 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x10187cc00);
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t At45dbStorageManagerC__At45dbVolume__remap(
# 18 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x10187cc00, 
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP__Leds__led1On(void );
#line 89
static void LedsP__Leds__led2Toggle(void );
#line 45
static void LedsP__Leds__led0On(void );
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialActiveMessageC__SplitControl__start(void );
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t SerialActiveMessageC__AMSend__send(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
am_id_t arg_0x101e66bd8, 
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

SerialActiveMessageC__AMSend__getPayload(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
am_id_t arg_0x101e66bd8, 
# 121 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 115 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static 
#line 112
void * 


SerialActiveMessageC__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialActiveMessageC__startDone__runTask(void );
#line 64
static void SerialActiveMessageC__stopDone__runTask(void );
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t RandRWC__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

RandRWC__AMSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t RandRWC__SerialControl__start(void );
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
static error_t RandRWC__BlockRead__read(storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static error_t RandRWC__BlockWrite__erase(void );
#line 58
static error_t RandRWC__BlockWrite__write(storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
#line 103
static error_t RandRWC__BlockWrite__sync(void );
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void RandRWC__Leds__led1On(void );
#line 89
static void RandRWC__Leds__led2Toggle(void );
#line 45
static void RandRWC__Leds__led0On(void );
# 27 "RandRWC.nc"
enum RandRWC____nesc_unnamed4289 {
  RandRWC__SIZE = 1024L * 256, 
  RandRWC__NWRITES = RandRWC__SIZE / 4096
};

uint16_t RandRWC__shiftReg[1000];
uint16_t RandRWC__initSeed[1000];
uint16_t RandRWC__mask[1000];


static uint16_t RandRWC__rand(void );
#line 53
static void RandRWC__resetSeed(void );





uint8_t RandRWC__data[1000][512];
#line 59
uint8_t RandRWC__rdata[1000][512];
int RandRWC__count[1000];
#line 60
int RandRWC__testCount[1000];
uint32_t RandRWC__addr[1000];
#line 61
uint32_t RandRWC__len[1000];
uint16_t RandRWC__offset[1000];
message_t RandRWC__reportMsg[1000];

static void RandRWC__done(void );

static void RandRWC__report(error_t e);
#line 80
static void RandRWC__fail(error_t e);





static void RandRWC__success(void );





static bool RandRWC__scheck(error_t r) __attribute((noinline)) ;





static inline bool RandRWC__bcheck(bool b);





static void RandRWC__setParameters(void );









static inline void RandRWC__Boot__booted(void );



static inline void RandRWC__SerialControl__stopDone(error_t e);

static inline void RandRWC__SerialControl__startDone(error_t e);
#line 136
static void RandRWC__nextRead(void );










static void RandRWC__nextWrite(void );
#line 162
static inline void RandRWC__BlockWrite__writeDone(storage_addr_t x, void *buf, storage_len_t y, error_t result);




static inline void RandRWC__BlockWrite__eraseDone(error_t result);







static inline void RandRWC__BlockWrite__syncDone(error_t result);




static void RandRWC__BlockRead__readDone(storage_addr_t x, void *buf, storage_len_t rlen, error_t result) __attribute((noinline)) ;





static inline void RandRWC__BlockRead__computeCrcDone(storage_addr_t x, storage_len_t y, uint16_t z, error_t result);


enum RandRWC____nesc_unnamed4290 {
#line 189
  RandRWC__A_READ = 2, RandRWC__A_WRITE
};
static void RandRWC__doAction(int act);
#line 207
const uint8_t RandRWC__actions[1000][2];




static void RandRWC__done(void );
# 155 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
static void BlockStorageP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void *data, at45pageoffset_t n);
#line 100
static void BlockStorageP__At45db__erase(at45page_t page, uint8_t eraseKind);
#line 120
static void BlockStorageP__At45db__syncAll(void );
#line 62
static void BlockStorageP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void *data, at45pageoffset_t n);
#line 176
static void BlockStorageP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static void BlockStorageP__BlockWrite__syncDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a8320, 
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void BlockStorageP__BlockWrite__writeDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a8320, 
# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void BlockStorageP__BlockWrite__eraseDone(
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a8320, 
# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
static void BlockStorageP__BlockRead__computeCrcDone(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a7640, 
# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void BlockStorageP__BlockRead__readDone(
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017a7640, 
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__flipped(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dc250);
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__isConfig(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dc250);
# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__writeHook(
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dc250);
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__volumeSize(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017b66b8);
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__remap(
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017b66b8, 
# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__release(
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dd568);
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__request(
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x1017dd568);
#line 76
enum BlockStorageP____nesc_unnamed4291 {
  BlockStorageP__R_IDLE, 
  BlockStorageP__R_WRITE, 
  BlockStorageP__R_ERASE, 
  BlockStorageP__R_SYNC, 
  BlockStorageP__R_READ, 
  BlockStorageP__R_CRC
};

enum BlockStorageP____nesc_unnamed4292 {
  BlockStorageP__N = 1U + 0U, 
  BlockStorageP__NO_CLIENT = 0xff
};

uint8_t BlockStorageP__client[1000];
storage_addr_t BlockStorageP__currentOffset[1000];







#line 93
struct BlockStorageP____nesc_unnamed4293 {

  uint8_t request;
  uint8_t * buf;
  storage_addr_t addr;
  storage_len_t len;
} BlockStorageP__s[1000][BlockStorageP__N];






static inline at45page_t BlockStorageP__pageRemap(at45page_t p);



static inline at45page_t BlockStorageP__BConfig__npages(uint8_t id);



static at45page_t BlockStorageP__BConfig__remap(uint8_t id, at45page_t page);





static inline int BlockStorageP__BConfig__default__isConfig(uint8_t blockId);



static inline int BlockStorageP__BConfig__default__flipped(uint8_t blockId);







static inline void BlockStorageP__eraseStart(void );
static inline void BlockStorageP__syncStart(void );
static inline void BlockStorageP__multipageStart(uint16_t crc);

static inline void BlockStorageP__startRequest(void );
#line 150
static void BlockStorageP__endRequest(error_t result, uint16_t crc);
#line 178
static error_t BlockStorageP__newRequest(uint8_t newState, uint8_t id, 
storage_addr_t addr, uint8_t * buf, storage_len_t len);
#line 204
static inline void BlockStorageP__Resource__granted(uint8_t blockId);
#line 218
static inline int BlockStorageP__BConfig__default__writeHook(uint8_t blockId);
#line 235
static void BlockStorageP__multipageContinue(uint16_t crc);
#line 269
static inline void BlockStorageP__multipageStart(uint16_t crc);




static inline void BlockStorageP__multipageOpDone(error_t result, uint16_t crc);










static inline error_t BlockStorageP__BlockWrite__erase(uint8_t id);



static inline void BlockStorageP__eraseStart(void );



static inline void BlockStorageP__eraseEraseDone(error_t error);







static inline error_t BlockStorageP__BlockWrite__write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);







static inline error_t BlockStorageP__BlockWrite__sync(uint8_t id);



static inline void BlockStorageP__syncStart(void );



static inline void BlockStorageP__syncSyncDone(error_t error);







static inline error_t BlockStorageP__BlockRead__read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);
#line 341
static inline storage_len_t BlockStorageP__BlockRead__getSize(uint8_t blockId);
#line 356
static inline void BlockStorageP__At45db__writeDone(error_t result);




static inline void BlockStorageP__At45db__readDone(error_t result);




static inline void BlockStorageP__At45db__computeCrcDone(error_t result, uint16_t newCrc);




static inline void BlockStorageP__At45db__eraseDone(error_t result);




static inline void BlockStorageP__At45db__syncDone(error_t result);




static inline void BlockStorageP__At45db__flushDone(error_t result);
static inline void BlockStorageP__At45db__copyPageDone(error_t error);
static inline void BlockStorageP__BlockWrite__default__writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result);
static inline void BlockStorageP__BlockWrite__default__eraseDone(uint8_t id, error_t result);
static inline void BlockStorageP__BlockWrite__default__syncDone(uint8_t id, error_t result);
static inline void BlockStorageP__BlockRead__default__readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result);
static inline void BlockStorageP__BlockRead__default__computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t x, error_t result);

static inline at45page_t BlockStorageP__At45dbVolume__default__remap(uint8_t id, at45page_t volumePage);
static inline at45page_t BlockStorageP__At45dbVolume__default__volumeSize(uint8_t id);
static inline error_t BlockStorageP__Resource__default__request(uint8_t id);
static inline error_t BlockStorageP__Resource__default__release(uint8_t id);
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 51
static error_t PlatformP__MeasureClock__init(void );
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void );






static inline error_t PlatformP__Init__init(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 30
static void MotePlatformP__SerialIdPin__clr(void );
# 26 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
#line 38
static inline error_t MotePlatformP__SubInit__default__init(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
# 21 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SimMainP__SoftwareInit__init(void );
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void SimMainP__Boot__booted(void );
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SimMainP__PlatformInit__init(void );
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SimMainP__Scheduler__init(void );







static bool SimMainP__Scheduler__runNextTask(void );
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__runTask(
# 41 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x1016c1328);



enum SimSchedulerBasicP____nesc_unnamed4294 {

  SimSchedulerBasicP__NUM_TASKS = 6U, 
  SimSchedulerBasicP__NO_TASK = 255
};

uint8_t SimSchedulerBasicP__m_head[1000];
uint8_t SimSchedulerBasicP__m_tail[1000];
uint8_t SimSchedulerBasicP__m_next[1000][SimSchedulerBasicP__NUM_TASKS];




bool SimSchedulerBasicP__sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP__sim_scheduler_event[1000];

static inline int SimSchedulerBasicP__sim_config_task_latency(void );







static void SimSchedulerBasicP__sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e);
#line 95
static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e);
#line 112
static inline uint8_t SimSchedulerBasicP__popTask(void );
#line 131
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP__pushTask(uint8_t id);
#line 158
static inline void SimSchedulerBasicP__Scheduler__init(void );
#line 172
static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
#line 197
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id);
#line 213
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 44 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP__euid[1000];
long long int SimMoteP__startTime[1000];
bool SimMoteP__isOn[1000];
sim_event_t *SimMoteP__bootEvent[1000];

uint8_t SimMoteP__radioChannel[1000];




static inline error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel);
#line 67
static inline uint8_t SimMoteP__SimMote__getRadioChannel(void );
#line 79
error_t sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel)   ;
#line 91
uint8_t sim_mote_get_radio_channel(int mote)   ;








static inline long long int SimMoteP__SimMote__getEuid(void );


static inline void SimMoteP__SimMote__setEuid(long long int e);


static inline long long int SimMoteP__SimMote__getStartTime(void );


static inline bool SimMoteP__SimMote__isOn(void );



static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP__SimMote__turnOn(void );
#line 130
static inline void SimMoteP__SimMote__turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 20 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
message_t CC2420CsmaP__buffer[1000];
# 39 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0____nesc_unnamed4295 {
#line 39
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[1000][1U];
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[1000];
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail[1000];

static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 72
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x101c50dd0);
# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x101c4c020);
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x101c4c020);
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 43
static bool /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x101c51bf0);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4296 {
#line 75
  ArbiterP__0__grantedTask = 0U
};
#line 75
typedef int /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4297 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4298 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4299 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[1000];
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[1000];
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId[1000];



static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 108
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 130
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 187
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 199
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );





static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
static void At45dbP__At45db__copyPageDone(error_t error);
#line 125
static void At45dbP__At45db__syncDone(error_t error);
#line 143
static void At45dbP__At45db__flushDone(error_t error);
#line 69
static void At45dbP__At45db__writeDone(error_t error);
#line 105
static void At45dbP__At45db__eraseDone(error_t error);
#line 183
static void At45dbP__At45db__computeCrcDone(error_t error, uint16_t crc);
#line 162
static void At45dbP__At45db__readDone(error_t error);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t At45dbP__taskFail__postTask(void );
#line 56
static error_t At45dbP__taskSuccess__postTask(void );
#line 56
static error_t At45dbP__taskCrcSuccess__postTask(void );
# 104 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45dbP.nc"
enum At45dbP____nesc_unnamed4300 {
#line 104
  At45dbP__taskCrcSuccess = 1U
};
#line 104
typedef int At45dbP____nesc_sillytask_taskCrcSuccess[At45dbP__taskCrcSuccess];



enum At45dbP____nesc_unnamed4301 {
#line 108
  At45dbP__taskFail = 2U
};
#line 108
typedef int At45dbP____nesc_sillytask_taskFail[At45dbP__taskFail];



enum At45dbP____nesc_unnamed4302 {
#line 112
  At45dbP__taskSuccess = 3U
};
#line 112
typedef int At45dbP____nesc_sillytask_taskSuccess[At45dbP__taskSuccess];
#line 42
enum At45dbP____nesc_unnamed4303 {
  At45dbP__IDLE, 
  At45dbP__R_READ, 
  At45dbP__R_READCRC, 
  At45dbP__R_WRITE, 
  At45dbP__R_ERASE, 
  At45dbP__R_COPY, 
  At45dbP__R_SYNC, 
  At45dbP__R_SYNCALL, 
  At45dbP__R_FLUSH, 
  At45dbP__R_FLUSHALL, 
  At45dbP__BROKEN
};

FILE *At45dbP__ifp[1000];
uint8_t At45dbP__request[1000];
char At45dbP__filename[1000][20];
uint16_t At45dbP__newCrc[1000];

static inline error_t At45dbP__Init__init(void );










static void At45dbP__requestDone(error_t result, uint16_t computedCrc, uint8_t newState);
#line 104
static inline void At45dbP__taskCrcSuccess__runTask(void );



static inline void At45dbP__taskFail__runTask(void );



static inline void At45dbP__taskSuccess__runTask(void );



static inline void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, void *reqdata, at45pageoffset_t n);
#line 134
static inline void At45dbP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc);
#line 159
static inline void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, void *reqdata, at45pageoffset_t n);
#line 176
static inline void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind);
#line 254
static inline void At45dbP__At45db__syncAll(void );
# 21 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC__At45dbVolume__remap(volume_id_t volid, at45page_t volumePage);








static inline at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(volume_id_t volid);
# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool LedsP__Led0__get(void );


static void LedsP__Led0__makeOutput(void );
#line 29
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );

static bool LedsP__Led1__get(void );


static void LedsP__Led1__makeOutput(void );
#line 29
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );
static void LedsP__Led2__toggle(void );
static bool LedsP__Led2__get(void );


static void LedsP__Led2__makeOutput(void );
#line 29
static void LedsP__Led2__set(void );
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 63
static void LedsP__Leds__led0On(void );
#line 78
static inline void LedsP__Leds__led1On(void );
#line 103
static void LedsP__Leds__led2Toggle(void );
# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialActiveMessageC__SplitControl__startDone(error_t error);
#line 117
static void SerialActiveMessageC__SplitControl__stopDone(error_t error);
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialActiveMessageC__startDone__postTask(void );
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
enum SerialActiveMessageC____nesc_unnamed4304 {
#line 59
  SerialActiveMessageC__startDone = 4U
};
#line 59
typedef int SerialActiveMessageC____nesc_sillytask_startDone[SerialActiveMessageC__startDone];
enum SerialActiveMessageC____nesc_unnamed4305 {
#line 60
  SerialActiveMessageC__stopDone = 5U
};
#line 60
typedef int SerialActiveMessageC____nesc_sillytask_stopDone[SerialActiveMessageC__stopDone];
#line 59
static inline void SerialActiveMessageC__startDone__runTask(void );
static inline void SerialActiveMessageC__stopDone__runTask(void );

static inline error_t SerialActiveMessageC__SplitControl__start(void );









static inline error_t SerialActiveMessageC__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 88
static inline void *SerialActiveMessageC__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len);
#line 158
static inline void *SerialActiveMessageC__Packet__getPayload(message_t *msg, uint8_t len);
# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 67
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

# 55 "/usr/include/secure/_string.h" 3
static __inline void *
__inline_memcpy_chk(void *__dest, const void *__src, size_t __len)
{
  return __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
}

# 119 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/heap.c"
static inline void expand_heap(heap_t *heap)
#line 119
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  __builtin_object_size(new_data, 0) != (size_t )-1 ? __builtin___memcpy_chk(new_data, heap->data, sizeof(node_t ) * heap->private_size, __builtin_object_size(new_data, 0)) : __inline_memcpy_chk(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 133
{
  int findex = heap->size;

#line 135
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 77
static inline int is_empty(heap_t *heap)
#line 77
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 81
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 85
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 309 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 309
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 298
inline static unsigned int sim_log_hash(void *key)
#line 298
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 151
static inline void sim_log_init()
#line 151
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 124 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 124
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 128
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 134
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 109 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP__SimMote__isOn(void )
#line 109
{
  return SimMoteP__isOn[sim_node()];
}

# 77 "/usr/include/secure/_string.h" 3
static __inline void *
__inline_memset_chk(void *__dest, int __val, size_t __len)
{
  return __builtin___memset_chk(__dest, __val, __len, __builtin_object_size(__dest, 0));
}






static __inline char *
__inline_strcpy_chk(char *__dest, const char *__src)
{
  return __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
}

# 164 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 164
{
  sim_log_channel_t *channel;

#line 166
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 172
      __builtin_object_size(newName, 0) != (size_t )-1 ? __builtin___strcpy_chk(newName, name, __builtin_object_size(newName, 2 > 1)) : __inline_strcpy_chk(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      __builtin_object_size(channel->outputs, 0) != (size_t )-1 ? __builtin___memset_chk(channel->outputs, 0, sizeof(FILE *) * channel->size, __builtin_object_size(channel->outputs, 0)) : __inline_memset_chk(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      __builtin_object_size(newOutputs, 0) != (size_t )-1 ? __builtin___memcpy_chk(newOutputs, channel->outputs, channel->size * sizeof(FILE **), __builtin_object_size(newOutputs, 0)) : __inline_memcpy_chk(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 204
{
  sim_log_channel_t *channel;
  int i;

#line 207
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 216
      if (file == f) {
          __builtin_object_size(&channel->outputs[i], 0) != (size_t )-1 ? __builtin___memcpy_chk(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1), __builtin_object_size(&channel->outputs[i], 0)) : __inline_memcpy_chk(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 160 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote, int channel_id)
#line 160
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 162
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->channel = channel_id;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}





static inline double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 283 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 283
{
  dummy = 5;
}

# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 42
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 315 "/opt/nesc/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 310
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

#line 281
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

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

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 83
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 91
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 95
  __nesc_disable_interrupt();
  return result;
}



#line 100
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 77 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e)
#line 77
{
  SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP__Scheduler__runNextTask()) {
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e)
#line 95
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP__sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 158
static inline void SimSchedulerBasicP__Scheduler__init(void )
{
  sim_log_debug(102U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    __builtin_object_size(SimSchedulerBasicP__m_next[sim_node()], 0) != (size_t )-1 ? __builtin___memset_chk(SimSchedulerBasicP__m_next[sim_node()], SimSchedulerBasicP__NO_TASK, sizeof SimSchedulerBasicP__m_next[sim_node()], __builtin_object_size(SimSchedulerBasicP__m_next[sim_node()], 0)) : __inline_memset_chk(SimSchedulerBasicP__m_next[sim_node()], SimSchedulerBasicP__NO_TASK, sizeof SimSchedulerBasicP__m_next[sim_node()]);
    SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__NO_TASK;
    SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;

    SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP__sim_scheduler_event_init(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
  }
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void SimMainP__Scheduler__init(void ){
#line 46
  SimSchedulerBasicP__Scheduler__init();
#line 46
}
#line 46
# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP__popTask(void )
{
  if (SimSchedulerBasicP__m_head[sim_node()] != SimSchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP__m_head[sim_node()];

#line 117
      SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_head[sim_node()]];
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;
        }
      SimSchedulerBasicP__m_next[sim_node()][id] = SimSchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP__NO_TASK;
    }
}

# 269 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__multipageStart(uint16_t crc)
#line 269
{
  BlockStorageP__currentOffset[sim_node()] = 0;
  BlockStorageP__multipageContinue(crc);
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t At45dbP__taskSuccess__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(At45dbP__taskSuccess);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 254 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45dbP.nc"
static inline void At45dbP__At45db__syncAll(void )
{
  At45dbP__request[sim_node()] = At45dbP__R_SYNC;
  At45dbP__taskSuccess__postTask();
}

# 120 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void BlockStorageP__At45db__syncAll(void ){
#line 120
  At45dbP__At45db__syncAll();
#line 120
}
#line 120
# 313 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__syncStart(void )
#line 313
{
  BlockStorageP__At45db__syncAll();
}

#line 106
static inline at45page_t BlockStorageP__pageRemap(at45page_t p)
#line 106
{
  return BlockStorageP__BConfig__remap(BlockStorageP__client[sim_node()], p);
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t At45dbP__taskFail__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(At45dbP__taskFail);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 176 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45dbP.nc"
static inline void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind)
{
  At45dbP__request[sim_node()] = At45dbP__R_ERASE;
  if (!(page >= AT45_MAX_PAGES) == TRUE) {
      switch (eraseKind) {
          case AT45_ERASE: 
            if (fseek(At45dbP__ifp[sim_node()], page * AT45_PAGE_SIZE, 0) == 0) {
                uint8_t temp[AT45_PAGE_SIZE];

#line 184
                __builtin_object_size(temp, 0) != (size_t )-1 ? __builtin___memset_chk(temp, 0xFF, AT45_PAGE_SIZE, __builtin_object_size(temp, 0)) : __inline_memset_chk(temp, 0xFF, AT45_PAGE_SIZE);
                fwrite(temp, 1, AT45_PAGE_SIZE, At45dbP__ifp[sim_node()]);
                At45dbP__taskSuccess__postTask();
              }
            else 
#line 187
              {
                At45dbP__taskFail__postTask();
              }
          break;
          case AT45_PREVIOUSLY_ERASED: 


            case AT45_DONT_ERASE: 



              At45dbP__taskSuccess__postTask();
          break;
        }
    }
  else 
#line 201
    {
      At45dbP__taskFail__postTask();
    }
}

# 100 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void BlockStorageP__At45db__erase(at45page_t page, uint8_t eraseKind){
#line 100
  At45dbP__At45db__erase(page, eraseKind);
#line 100
}
#line 100
# 289 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__eraseStart(void )
#line 289
{
  BlockStorageP__At45db__erase(BlockStorageP__pageRemap(0), AT45_ERASE);
}

#line 136
static inline void BlockStorageP__startRequest(void )
#line 136
{
  switch (BlockStorageP__s[sim_node()][BlockStorageP__client[sim_node()]].request) 
    {
      case BlockStorageP__R_ERASE: 
        BlockStorageP__eraseStart();
      break;
      case BlockStorageP__R_SYNC: 
        BlockStorageP__syncStart();
      break;
      default: 
        BlockStorageP__multipageStart((uint16_t )BlockStorageP__s[sim_node()][BlockStorageP__client[sim_node()]].buf);
    }
}

#line 218
static inline int BlockStorageP__BConfig__default__writeHook(uint8_t blockId)
#line 218
{
  return FALSE;
}

# 37 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP__BConfig__writeHook(uint8_t arg_0x1017dc250){
#line 37
  int __nesc_result;
#line 37

#line 37
    __nesc_result = BlockStorageP__BConfig__default__writeHook(arg_0x1017dc250);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 204 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__Resource__granted(uint8_t blockId)
#line 204
{
  BlockStorageP__client[sim_node()] = blockId;

  if (BlockStorageP__s[sim_node()][blockId].request == BlockStorageP__R_WRITE && 
  BlockStorageP__BConfig__writeHook(blockId)) 
    {


      BlockStorageP__client[sim_node()] = BlockStorageP__NO_CLIENT;
      return;
    }
  BlockStorageP__startRequest();
}

# 199 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 199
{
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x101c51bf0){
#line 92
  switch (arg_0x101c51bf0) {
#line 92
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__RESOURCE_ID:
#line 92
      BlockStorageP__Resource__granted(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x101c51bf0);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 213 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x101c4c020){
#line 49
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x101c4c020);
#line 49
}
#line 49
# 187 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[sim_node()] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId[sim_node()];
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[sim_node()] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[sim_node()]);
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[sim_node()]);
}

# 104 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45dbP.nc"
static inline void At45dbP__taskCrcSuccess__runTask(void )
#line 104
{
  At45dbP__requestDone(SUCCESS, At45dbP__newCrc[sim_node()], At45dbP__IDLE);
}

static inline void At45dbP__taskFail__runTask(void )
#line 108
{
  At45dbP__requestDone(FAIL, 0, At45dbP__IDLE);
}

static inline void At45dbP__taskSuccess__runTask(void )
#line 112
{
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RandRWC__Leds__led0On(void ){
#line 45
  LedsP__Leds__led0On();
#line 45
}
#line 45
# 120 "RandRWC.nc"
static inline void RandRWC__SerialControl__startDone(error_t e)
#line 120
{
  int i;

  if (e != SUCCESS) 
    {
      RandRWC__Leds__led0On();
      return;
    }

  RandRWC__resetSeed();
  for (i = 0; i < sizeof RandRWC__data[sim_node()]; i++) 
    RandRWC__data[sim_node()][i++] = RandRWC__rand() >> 8;

  RandRWC__done();
}

# 92 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialActiveMessageC__SplitControl__startDone(error_t error){
#line 92
  RandRWC__SerialControl__startDone(error);
#line 92
}
#line 92
# 59 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline void SerialActiveMessageC__startDone__runTask(void )
#line 59
{
#line 59
  SerialActiveMessageC__SplitControl__startDone(SUCCESS);
}

# 118 "RandRWC.nc"
static inline void RandRWC__SerialControl__stopDone(error_t e)
#line 118
{
}

# 117 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialActiveMessageC__SplitControl__stopDone(error_t error){
#line 117
  RandRWC__SerialControl__stopDone(error);
#line 117
}
#line 117
# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline void SerialActiveMessageC__stopDone__runTask(void )
#line 60
{
#line 60
  SerialActiveMessageC__SplitControl__stopDone(SUCCESS);
}

# 213 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 64 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x1016c1328){
#line 64
  switch (arg_0x1016c1328) {
#line 64
    case /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 64
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 64
      break;
#line 64
    case At45dbP__taskCrcSuccess:
#line 64
      At45dbP__taskCrcSuccess__runTask();
#line 64
      break;
#line 64
    case At45dbP__taskFail:
#line 64
      At45dbP__taskFail__runTask();
#line 64
      break;
#line 64
    case At45dbP__taskSuccess:
#line 64
      At45dbP__taskSuccess__runTask();
#line 64
      break;
#line 64
    case SerialActiveMessageC__startDone:
#line 64
      SerialActiveMessageC__startDone__runTask();
#line 64
      break;
#line 64
    case SerialActiveMessageC__stopDone:
#line 64
      SerialActiveMessageC__stopDone__runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SimSchedulerBasicP__TaskBasic__default__runTask(arg_0x1016c1328);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 50
{
#line 50
  atm128RegFile[sim_node()][27U] &= ~(1 << 2);
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 30
}
#line 30
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get(void )
#line 45
{
#line 45
  return (atm128RegFile[sim_node()][27U] & (1 << 2)) != 0;
}

# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led0__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void )
#line 51
{
#line 51
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 51
    atm128RegFile[sim_node()][27U] ^= 1 << 0;
#line 51
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle();
#line 31
}
#line 31
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get(void )
#line 45
{
#line 45
  return (atm128RegFile[sim_node()][27U] & (1 << 0)) != 0;
}

# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led2__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 158 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline void *SerialActiveMessageC__Packet__getPayload(message_t *msg, uint8_t len)
#line 158
{
  if (len <= 28) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

#line 88
static inline void *SerialActiveMessageC__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len)
#line 88
{
  return SerialActiveMessageC__Packet__getPayload(m, len);
}

# 124 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * RandRWC__AMSend__getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = SerialActiveMessageC__AMSend__getPayload(139, msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline error_t SerialActiveMessageC__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 74
{
  sim_log_debug(129U, "Serial", "Serial: sending a packet of size %d\n", len);
  return FAIL;
}

# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t RandRWC__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = SerialActiveMessageC__AMSend__send(139, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 285 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockWrite__erase(uint8_t id)
#line 285
{
  return BlockStorageP__newRequest(BlockStorageP__R_ERASE, id, 0, (void *)0, 0);
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static error_t RandRWC__BlockWrite__erase(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = BlockStorageP__BlockWrite__erase(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID);
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(volume_id_t volid)
#line 30
{
  switch (volid) 
    {
# 10 "simbuild/micaz/StorageVolumes.h"
      case VOLUME_BLOCKTEST: return 1024;
# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return 0;
    }
}

# 390 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP__At45dbVolume__default__volumeSize(uint8_t id)
#line 390
{
#line 390
  return 0;
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
inline static at45page_t BlockStorageP__At45dbVolume__volumeSize(uint8_t arg_0x1017b66b8){
#line 30
  unsigned short __nesc_result;
#line 30

#line 30
  switch (arg_0x1017b66b8) {
#line 30
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 30
      __nesc_result = At45dbStorageManagerC__At45dbVolume__volumeSize(0);
#line 30
      break;
#line 30
    default:
#line 30
      __nesc_result = BlockStorageP__At45dbVolume__default__volumeSize(arg_0x1017b66b8);
#line 30
      break;
#line 30
    }
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP__BConfig__npages(uint8_t id)
#line 110
{
  return BlockStorageP__At45dbVolume__volumeSize(id) >> 1;
}







static inline int BlockStorageP__BConfig__default__isConfig(uint8_t blockId)
#line 120
{
  return FALSE;
}

# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP__BConfig__isConfig(uint8_t arg_0x1017dc250){
#line 24
  int __nesc_result;
#line 24

#line 24
    __nesc_result = BlockStorageP__BConfig__default__isConfig(arg_0x1017dc250);
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 341 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline storage_len_t BlockStorageP__BlockRead__getSize(uint8_t blockId)
#line 341
{
  storage_len_t vsize;

  if (BlockStorageP__BConfig__isConfig(blockId)) {
    vsize = BlockStorageP__BConfig__npages(blockId);
    }
  else {
#line 347
    vsize = BlockStorageP__At45dbVolume__volumeSize(blockId);
    }
  return vsize << AT45_PAGE_SIZE_LOG2;
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 130 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[sim_node()] == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[sim_node()] == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
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
            if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[sim_node()] == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[sim_node()] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId[sim_node()];
                /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[sim_node()] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
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
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void )
#line 207
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 73 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 54
{
  return /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[sim_node()][id] != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail[sim_node()] == id;
}

#line 72
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[sim_node()] == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[sim_node()] = id;
          }
        else {
#line 78
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[sim_node()][/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail[sim_node()]] = id;
          }
#line 79
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail[sim_node()] = id;
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
inline static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 201 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 201
{
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x101c50dd0){
#line 43
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x101c50dd0);
#line 43
}
#line 43
# 77 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[sim_node()]);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[sim_node()] == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[sim_node()] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId[sim_node()] = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

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
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 391 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__Resource__default__request(uint8_t id)
#line 391
{
#line 391
  return FAIL;
}

# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t BlockStorageP__Resource__request(uint8_t arg_0x1017dd568){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  switch (arg_0x1017dd568) {
#line 78
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 78
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__RESOURCE_ID);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = BlockStorageP__Resource__default__request(arg_0x1017dd568);
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
# 131 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id)
{
  return SimSchedulerBasicP__m_next[sim_node()][id] != SimSchedulerBasicP__NO_TASK || SimSchedulerBasicP__m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP__pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP__isWaiting(id)) 
    {
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_head[sim_node()] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_tail[sim_node()]] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 61
static inline int SimSchedulerBasicP__sim_config_task_latency(void )
#line 61
{
#line 61
  return 100;
}

# 325 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockRead__read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 325
{
  return BlockStorageP__newRequest(BlockStorageP__R_READ, id, addr, buf, len);
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static error_t RandRWC__BlockRead__read(storage_addr_t addr, void * buf, storage_len_t len){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = BlockStorageP__BlockRead__read(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID, addr, buf, len);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void )
#line 45
{
#line 45
  return (atm128RegFile[sim_node()][27U] & (1 << 1)) != 0;
}

# 32 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led1__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void )
#line 50
{
#line 50
  atm128RegFile[sim_node()][27U] &= ~(1 << 1);
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr();
#line 30
}
#line 30
# 78 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 78
{
  LedsP__Led1__clr();
  sim_log_debug(123U, "LedsC", "LEDS: Led""1"" %s.\n", LedsP__Led1__get() ? "off" : "on");
#line 80
  ;
}

# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RandRWC__Leds__led1On(void ){
#line 61
  LedsP__Leds__led1On();
#line 61
}
#line 61
# 274 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__multipageOpDone(error_t result, uint16_t crc)
#line 274
{
  if (result != SUCCESS) {
    BlockStorageP__endRequest(result, 0);
    }
  else {
#line 278
    BlockStorageP__multipageContinue(crc);
    }
}

#line 361
static inline void BlockStorageP__At45db__readDone(error_t result)
#line 361
{
  if (BlockStorageP__client[sim_node()] != BlockStorageP__NO_CLIENT) {
    BlockStorageP__multipageOpDone(result, 0);
    }
}

# 162 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void At45dbP__At45db__readDone(error_t error){
#line 162
  BlockStorageP__At45db__readDone(error);
#line 162
}
#line 162
# 205 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 205
{
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 215 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 215
{
}

# 55 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x101c4c020){
#line 55
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x101c4c020);
#line 55
}
#line 55
# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[sim_node()] != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[sim_node()];

#line 62
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[sim_node()] = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[sim_node()][/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[sim_node()]];
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[sim_node()] == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail[sim_node()] = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 65
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[sim_node()][id] = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
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
      /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 50
{
  return /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[sim_node()] == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[sim_node()] == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[sim_node()] == id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId[sim_node()] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[sim_node()] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[sim_node()] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[sim_node()] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[sim_node()] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
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

# 392 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__Resource__default__release(uint8_t id)
#line 392
{
#line 392
  return FAIL;
}

# 110 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t BlockStorageP__Resource__release(uint8_t arg_0x1017dd568){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  switch (arg_0x1017dd568) {
#line 110
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 110
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__RESOURCE_ID);
#line 110
      break;
#line 110
    default:
#line 110
      __nesc_result = BlockStorageP__Resource__default__release(arg_0x1017dd568);
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
# 386 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockRead__default__readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result)
#line 386
{
}

# 67 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static void BlockStorageP__BlockRead__readDone(uint8_t arg_0x1017a7640, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 67
  switch (arg_0x1017a7640) {
#line 67
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 67
      RandRWC__BlockRead__readDone(addr, buf, len, error);
#line 67
      break;
#line 67
    default:
#line 67
      BlockStorageP__BlockRead__default__readDone(arg_0x1017a7640, addr, buf, len, error);
#line 67
      break;
#line 67
    }
#line 67
}
#line 67
# 98 "RandRWC.nc"
static inline bool RandRWC__bcheck(bool b)
#line 98
{
  if (!b) {
    RandRWC__fail(FAIL);
    }
#line 101
  return b;
}

#line 162
static inline void RandRWC__BlockWrite__writeDone(storage_addr_t x, void *buf, storage_len_t y, error_t result)
#line 162
{
  if (RandRWC__scheck(result)) {
    RandRWC__nextWrite();
    }
}

# 383 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockWrite__default__writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result)
#line 383
{
}

# 71 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP__BlockWrite__writeDone(uint8_t arg_0x1017a8320, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 71
  switch (arg_0x1017a8320) {
#line 71
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 71
      RandRWC__BlockWrite__writeDone(addr, buf, len, error);
#line 71
      break;
#line 71
    default:
#line 71
      BlockStorageP__BlockWrite__default__writeDone(arg_0x1017a8320, addr, buf, len, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 309 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockWrite__sync(uint8_t id)
#line 309
{
  return BlockStorageP__newRequest(BlockStorageP__R_SYNC, id, 0, (void *)0, 0);
}

# 103 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static error_t RandRWC__BlockWrite__sync(void ){
#line 103
  unsigned char __nesc_result;
#line 103

#line 103
  __nesc_result = BlockStorageP__BlockWrite__sync(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID);
#line 103

#line 103
  return __nesc_result;
#line 103
}
#line 103
# 301 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockWrite__write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 301
{
  return BlockStorageP__newRequest(BlockStorageP__R_WRITE, id, addr, buf, len);
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static error_t RandRWC__BlockWrite__write(storage_addr_t addr, void * buf, storage_len_t len){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = BlockStorageP__BlockWrite__write(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID, addr, buf, len);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 89 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RandRWC__Leds__led2Toggle(void ){
#line 89
  LedsP__Leds__led2Toggle();
#line 89
}
#line 89
# 167 "RandRWC.nc"
static inline void RandRWC__BlockWrite__eraseDone(error_t result)
#line 167
{
  if (RandRWC__scheck(result)) 
    {
      RandRWC__Leds__led2Toggle();
      RandRWC__nextWrite();
    }
}

# 384 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockWrite__default__eraseDone(uint8_t id, error_t result)
#line 384
{
}

# 91 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP__BlockWrite__eraseDone(uint8_t arg_0x1017a8320, error_t error){
#line 91
  switch (arg_0x1017a8320) {
#line 91
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 91
      RandRWC__BlockWrite__eraseDone(error);
#line 91
      break;
#line 91
    default:
#line 91
      BlockStorageP__BlockWrite__default__eraseDone(arg_0x1017a8320, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 186 "RandRWC.nc"
static inline void RandRWC__BlockRead__computeCrcDone(storage_addr_t x, storage_len_t y, uint16_t z, error_t result)
#line 186
{
}

# 387 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockRead__default__computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t x, error_t result)
#line 387
{
}

# 95 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static void BlockStorageP__BlockRead__computeCrcDone(uint8_t arg_0x1017a7640, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error){
#line 95
  switch (arg_0x1017a7640) {
#line 95
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 95
      RandRWC__BlockRead__computeCrcDone(addr, len, crc, error);
#line 95
      break;
#line 95
    default:
#line 95
      BlockStorageP__BlockRead__default__computeCrcDone(arg_0x1017a7640, addr, len, crc, error);
#line 95
      break;
#line 95
    }
#line 95
}
#line 95
# 175 "RandRWC.nc"
static inline void RandRWC__BlockWrite__syncDone(error_t result)
#line 175
{
  if (RandRWC__scheck(result)) {
    RandRWC__done();
    }
}

# 385 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockWrite__default__syncDone(uint8_t id, error_t result)
#line 385
{
}

# 112 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP__BlockWrite__syncDone(uint8_t arg_0x1017a8320, error_t error){
#line 112
  switch (arg_0x1017a8320) {
#line 112
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 112
      RandRWC__BlockWrite__syncDone(error);
#line 112
      break;
#line 112
    default:
#line 112
      BlockStorageP__BlockWrite__default__syncDone(arg_0x1017a8320, error);
#line 112
      break;
#line 112
    }
#line 112
}
#line 112
# 124 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline int BlockStorageP__BConfig__default__flipped(uint8_t blockId)
#line 124
{
  return FALSE;
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP__BConfig__flipped(uint8_t arg_0x1017dc250){
#line 30
  int __nesc_result;
#line 30

#line 30
    __nesc_result = BlockStorageP__BConfig__default__flipped(arg_0x1017dc250);
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 21 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC__At45dbVolume__remap(volume_id_t volid, at45page_t volumePage)
#line 21
{
  switch (volid) 
    {
# 14 "simbuild/micaz/StorageVolumes.h"
      case VOLUME_BLOCKTEST: return volumePage + 0;
# 26 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return AT45_MAX_PAGES;
    }
}

# 389 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP__At45dbVolume__default__remap(uint8_t id, at45page_t volumePage)
#line 389
{
#line 389
  return 0;
}

# 24 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
inline static at45page_t BlockStorageP__At45dbVolume__remap(uint8_t arg_0x1017b66b8, at45page_t volumePage){
#line 24
  unsigned short __nesc_result;
#line 24

#line 24
  switch (arg_0x1017b66b8) {
#line 24
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 24
      __nesc_result = At45dbStorageManagerC__At45dbVolume__remap(0, volumePage);
#line 24
      break;
#line 24
    default:
#line 24
      __nesc_result = BlockStorageP__At45dbVolume__default__remap(arg_0x1017b66b8, volumePage);
#line 24
      break;
#line 24
    }
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 159 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45dbP.nc"
static inline void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, void *reqdata, at45pageoffset_t n)
{
  At45dbP__request[sim_node()] = At45dbP__R_WRITE;
  if (!(((page >= AT45_MAX_PAGES || offset >= AT45_PAGE_SIZE) || n > AT45_PAGE_SIZE) || offset + n > AT45_PAGE_SIZE) == TRUE) {
      int ret = fseek(At45dbP__ifp[sim_node()], page * AT45_PAGE_SIZE + offset, 0);

#line 164
      if (ret == 0) {
          ret = fwrite(reqdata, 1, n, At45dbP__ifp[sim_node()]);
          if (ret == n) {
              At45dbP__taskSuccess__postTask();
              return;
            }
        }
    }

  At45dbP__taskFail__postTask();
}

# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void BlockStorageP__At45db__write(at45page_t page, at45pageoffset_t offset, void *data, at45pageoffset_t n){
#line 62
  At45dbP__At45db__write(page, offset, data, n);
#line 62
}
#line 62
# 116 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45dbP.nc"
static inline void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, void *reqdata, at45pageoffset_t n)
{
  At45dbP__request[sim_node()] = At45dbP__R_READ;
  if (!(((page >= AT45_MAX_PAGES || offset >= AT45_PAGE_SIZE) || n > AT45_PAGE_SIZE) || offset + n > AT45_PAGE_SIZE) == TRUE) {
      int ret = fseek(At45dbP__ifp[sim_node()], page * AT45_PAGE_SIZE + offset, 0);

#line 121
      if (ret == 0) {
          ret = fread(reqdata, 1, n, At45dbP__ifp[sim_node()]);
          if (ret >= 0) {
              __builtin_object_size(reqdata + ret, 0) != (size_t )-1 ? __builtin___memset_chk(reqdata + ret, 0xFF, n - ret, __builtin_object_size(reqdata + ret, 0)) : __inline_memset_chk(reqdata + ret, 0xFF, n - ret);
              At45dbP__taskSuccess__postTask();
              return;
            }
        }
    }

  At45dbP__taskFail__postTask();
}

# 155 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void BlockStorageP__At45db__read(at45page_t page, at45pageoffset_t offset, void *data, at45pageoffset_t n){
#line 155
  At45dbP__At45db__read(page, offset, data, n);
#line 155
}
#line 155
# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t At45dbP__taskCrcSuccess__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(At45dbP__taskCrcSuccess);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/sim/crc.h"
static inline uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{
#line 89
  uint8_t *magic = (uint8_t *)&crcTable[(oldCrc >> 8) ^ byte];

  return *magic | (((uint8_t )oldCrc ^ *(magic + 1)) << 8);
}

# 134 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45dbP.nc"
static inline void At45dbP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc)
{
  At45dbP__request[sim_node()] = At45dbP__R_READCRC;
  if (!(((page >= AT45_MAX_PAGES || offset >= AT45_PAGE_SIZE) || n > AT45_PAGE_SIZE) || offset + n > AT45_PAGE_SIZE) == TRUE) {
      int ret;

#line 139
      ret = fseek(At45dbP__ifp[sim_node()], page * AT45_PAGE_SIZE + offset, 0);
      if (ret == 0) {
          uint8_t temp[n];

#line 142
          ret = fread(temp, 1, n, At45dbP__ifp[sim_node()]);
          if (ret >= 0) {
              uint16_t i;

#line 145
              __builtin_object_size(temp + ret, 0) != (size_t )-1 ? __builtin___memset_chk(temp + ret, 0xFF, n - ret, __builtin_object_size(temp + ret, 0)) : __inline_memset_chk(temp + ret, 0xFF, n - ret);
              At45dbP__newCrc[sim_node()] = baseCrc;
              for (i = 0; i < n; i++) {
                  At45dbP__newCrc[sim_node()] = crcByte(At45dbP__newCrc[sim_node()], temp[i]);
                }
              At45dbP__taskCrcSuccess__postTask();
              return;
            }
        }
    }

  At45dbP__taskFail__postTask();
}

# 176 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void BlockStorageP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc){
#line 176
  At45dbP__At45db__computeCrc(page, offset, n, baseCrc);
#line 176
}
#line 176
# 366 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__computeCrcDone(error_t result, uint16_t newCrc)
#line 366
{
  if (BlockStorageP__client[sim_node()] != BlockStorageP__NO_CLIENT) {
    BlockStorageP__multipageOpDone(result, newCrc);
    }
}

# 183 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void At45dbP__At45db__computeCrcDone(error_t error, uint16_t crc){
#line 183
  BlockStorageP__At45db__computeCrcDone(error, crc);
#line 183
}
#line 183
# 356 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__writeDone(error_t result)
#line 356
{
  if (BlockStorageP__client[sim_node()] != BlockStorageP__NO_CLIENT) {
    BlockStorageP__multipageOpDone(result, 0);
    }
}

# 69 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void At45dbP__At45db__writeDone(error_t error){
#line 69
  BlockStorageP__At45db__writeDone(error);
#line 69
}
#line 69
# 317 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__syncSyncDone(error_t error)
#line 317
{
  BlockStorageP__endRequest(error, 0);
}

#line 376
static inline void BlockStorageP__At45db__syncDone(error_t result)
#line 376
{
  if (BlockStorageP__client[sim_node()] != BlockStorageP__NO_CLIENT) {
    BlockStorageP__syncSyncDone(result);
    }
}

# 125 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void At45dbP__At45db__syncDone(error_t error){
#line 125
  BlockStorageP__At45db__syncDone(error);
#line 125
}
#line 125
# 381 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__flushDone(error_t result)
#line 381
{
}

# 143 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void At45dbP__At45db__flushDone(error_t error){
#line 143
  BlockStorageP__At45db__flushDone(error);
#line 143
}
#line 143
# 293 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__eraseEraseDone(error_t error)
#line 293
{
  BlockStorageP__endRequest(error, 0);
}

#line 371
static inline void BlockStorageP__At45db__eraseDone(error_t result)
#line 371
{
  if (BlockStorageP__client[sim_node()] != BlockStorageP__NO_CLIENT) {
    BlockStorageP__eraseEraseDone(result);
    }
}

# 105 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void At45dbP__At45db__eraseDone(error_t error){
#line 105
  BlockStorageP__At45db__eraseDone(error);
#line 105
}
#line 105
# 382 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__copyPageDone(error_t error)
#line 382
{
}

# 85 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45db.nc"
inline static void At45dbP__At45db__copyPageDone(error_t error){
#line 85
  BlockStorageP__At45db__copyPageDone(error);
#line 85
}
#line 85
# 42 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)&atm128RegFile[sim_node()][0x35] = 1 << SE;
  }
}

# 58 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__SubInit__default__init(void )
#line 38
{
  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MotePlatformP__SubInit__default__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 50 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 50
{
#line 50
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 30 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 30
}
#line 30
# 53 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 53
{
#line 53
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 33 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 33
}
#line 33
# 26 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 26
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 46
{
  sim_log_debug(53U, "Pins", "Setting bit %i of port %i.\n", (int )0, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 0;
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 29
}
#line 29
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 46
{
  sim_log_debug(54U, "Pins", "Setting bit %i of port %i.\n", (int )1, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 1;
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 29
}
#line 29
# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 46
{
  sim_log_debug(55U, "Pins", "Setting bit %i of port %i.\n", (int )2, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 2;
}

# 29 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 29
}
#line 29
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 0;
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 35
}
#line 35
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 1;
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 35
}
#line 35
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 2;
}

# 35 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 35
}
#line 35
# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    sim_log_debug(119U, "Init", "LEDS: initialized.\n");
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 21 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 21
{
  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP__power_init();

  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t SimMainP__PlatformInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool SimMainP__Scheduler__runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SimSchedulerBasicP__Scheduler__runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 61 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45dbP.nc"
static inline error_t At45dbP__Init__init(void )
{
  __builtin___sprintf_chk(At45dbP__filename[sim_node()], 0, __builtin_object_size(At45dbP__filename[sim_node()], 2 > 1), "image-at45db.%d.bin", TOS_NODE_ID);
  At45dbP__ifp[sim_node()] = freopen(At45dbP__filename[sim_node()], "r+", fopen(At45dbP__filename[sim_node()], "a"));
  if (At45dbP__ifp[sim_node()] == (void *)0) {
      sim_log_error(118U, "At45db", "Can't open the flash file, %s!\n", At45dbP__filename[sim_node()]);
    }

  return At45dbP__ifp[sim_node()] == (void *)0 ? FAIL : SUCCESS;
}

# 45 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 45
{
  __builtin_object_size(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[sim_node()], 0) != (size_t )-1 ? __builtin___memset_chk(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[sim_node()], /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[sim_node()], __builtin_object_size(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[sim_node()], 0)) : __inline_memset_chk(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[sim_node()], /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[sim_node()]);
  return SUCCESS;
}

# 51 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t SimMainP__SoftwareInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, At45dbP__Init__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 79 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 79
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 56 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialActiveMessageC__startDone__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(SerialActiveMessageC__startDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 62 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline error_t SerialActiveMessageC__SplitControl__start(void )
#line 62
{
  SerialActiveMessageC__startDone__postTask();
  return SUCCESS;
}

# 83 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t RandRWC__SerialControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = SerialActiveMessageC__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 114 "RandRWC.nc"
static inline void RandRWC__Boot__booted(void )
#line 114
{
  RandRWC__SerialControl__start();
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void SimMainP__Boot__booted(void ){
#line 49
  RandRWC__Boot__booted();
#line 49
}
#line 49
# 54 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel)
{
  if (newRadioChannel >= 11 && newRadioChannel <= 26) {
      SimMoteP__radioChannel[sim_node()] = newRadioChannel;
      return SUCCESS;
    }

  return FAIL;
}




static inline uint8_t SimMoteP__SimMote__getRadioChannel(void )
{
  if (SimMoteP__radioChannel[sim_node()] < 11 || SimMoteP__radioChannel[sim_node()] > 26) {
      return 26;
    }

  return SimMoteP__radioChannel[sim_node()];
}

#line 100
static inline long long int SimMoteP__SimMote__getEuid(void )
#line 100
{
  return SimMoteP__euid[sim_node()];
}

#line 103
static inline void SimMoteP__SimMote__setEuid(long long int e)
#line 103
{
  SimMoteP__euid[sim_node()] = e;
}

#line 106
static inline long long int SimMoteP__SimMote__getStartTime(void )
#line 106
{
  return SimMoteP__startTime[sim_node()];
}




static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size)
#line 113
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 130
static inline void SimMoteP__SimMote__turnOff(void )
#line 130
{
  SimMoteP__isOn[sim_node()] = FALSE;
}

#line 202
static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e)
#line 202
{
  char buf[128];

#line 204
  sim_print_now(buf, 128);

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(110U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP__SimMote__turnOn();
}

# 38 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 38
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 42
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 238 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 238
{
  va_list args;
  int i;

#line 241
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 246
      __builtin_va_start(args, format);
      fprintf(file, "%s DEBUG (%i): ", sim_time_string(), (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 76
static void fillInOutput(int id, char *name)
#line 76
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 81
  __builtin_object_size(newName, 0) != (size_t )-1 ? __builtin___memset_chk(newName, 0, strlen(name) + 1, __builtin_object_size(newName, 0)) : __inline_memset_chk(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          __builtin_object_size(newName, 0) != (size_t )-1 ? __builtin___strcpy_chk(newName, namePos, __builtin_object_size(newName, 2 > 1)) : __inline_strcpy_chk(newName, namePos);
        }
      else 
        {
          __builtin_object_size(newName, 0) != (size_t )-1 ? __builtin___memcpy_chk(newName, namePos, termination - namePos, __builtin_object_size(newName, 0)) : __inline_memcpy_chk(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, namePos);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          __builtin_object_size(newName, 0) != (size_t )-1 ? __builtin___strcpy_chk(newName, namePos, __builtin_object_size(newName, 2 > 1)) : __inline_strcpy_chk(newName, namePos);
        }
      else 
        {
          __builtin_object_size(newName, 0) != (size_t )-1 ? __builtin___memcpy_chk(newName, namePos, termination - namePos, __builtin_object_size(newName, 0)) : __inline_memcpy_chk(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, namePos);
      if (channel != (void *)0) {
          int i;
#line 129
          int j;

#line 130
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 176 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  char *sim_time_string()
#line 176
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

#line 171
  int sim_print_now(char *buf, int len)
#line 171
{
  return sim_print_time(buf, len, sim_time());
}

#line 148
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 148
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return __builtin___snprintf_chk(buf, len - 1, 0, __builtin_object_size(buf, 2 > 1), "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

#line 109
  sim_time_t sim_ticks_per_sec()
#line 109
{
  return 10000000000ULL;
}

#line 102
  sim_time_t sim_time()
#line 102
{
  return sim_ticks;
}








  unsigned long sim_node()
#line 113
{
  return current_node;
}

# 186 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 186
{
  int parent_index;

#line 188
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 147
static void swap(node_t *first, node_t *second)
#line 147
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 47 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 47
{
  long long int key;

#line 49
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 103 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 103
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 106
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 160
static void down_heap(heap_t *heap, int findex)
#line 160
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 174
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 179
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 52 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 52
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 56
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 66
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 71
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 76
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 82
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 49
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 57
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 226 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 226
{
  int i;

#line 228
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;
  int i;

#line 67
  for (j = 0; j < 1000; j++) {
      for (i = 0; i < 16; i++) {
          noiseData[j][i].noiseGenTime = 0;
          noiseData[j][i].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
          noiseData[j][i].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
          noiseData[j][i].noiseTraceLen = NOISE_MIN_TRACE;
          noiseData[j][i].noiseTraceIndex = 0;
        }
    }
}

# 94 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 94
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 72
  void sim_end()
#line 72
{
  sim_queue_init();
}



  int sim_random()
#line 78
{
  uint32_t mlcg;
#line 79
  uint32_t p;
#line 79
  uint32_t q;
  uint64_t tmpseed;

#line 81
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}

#line 105
  void sim_set_time(sim_time_t t)
#line 105
{
  sim_ticks = t;
}








  void sim_set_node(unsigned long node)
#line 116
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 121
{
  bool result = FALSE;

#line 123
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 125
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 179 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 179
{
  bool result;
  int tmp = sim_node();

#line 182
  sim_set_node(mote);
  result = SimMoteP__SimMote__isOn();
  sim_set_node(tmp);
  return result;
}

# 268 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 268
{
  va_list args;
  int i;

#line 271
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 276
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 181 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_add_channel(char *channel, FILE *file)
#line 181
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 185
{
  return sim_log_remove_channel(channel, file);
}

# 49 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 49
{
  return csmaInitHigh;
}

#line 52
  int sim_csma_init_low()
#line 52
{
  return csmaInitLow;
}

#line 55
  int sim_csma_high()
#line 55
{
  return csmaHigh;
}

#line 58
  int sim_csma_low()
#line 58
{
  return csmaLow;
}

#line 61
  int sim_csma_symbols_per_sec()
#line 61
{
  return csmaSymbolsPerSec;
}

#line 64
  int sim_csma_bits_per_symbol()
#line 64
{
  return csmaBitsPerSymbol;
}

#line 67
  int sim_csma_preamble_length()
#line 67
{
  return csmaPreambleLength;
}

#line 70
  int sim_csma_exponent_base()
#line 70
{
  return csmaExponentBase;
#line 71
  ;
}

#line 73
  int sim_csma_max_iterations()
#line 73
{
  return csmaMaxIterations;
}

#line 76
  int sim_csma_min_free_samples()
#line 76
{
  return csmaMinFreeSamples;
}

#line 79
  int sim_csma_rxtx_delay()
#line 79
{
  return csmaRxTxDelay;
}

#line 82
  int sim_csma_ack_time()
#line 82
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 88
{
  csmaInitHigh = val;
}

#line 91
  void sim_csma_set_init_low(int val)
#line 91
{
  csmaInitLow = val;
}

#line 94
  void sim_csma_set_high(int val)
#line 94
{
  csmaHigh = val;
}

#line 97
  void sim_csma_set_low(int val)
#line 97
{
  csmaLow = val;
}

#line 100
  void sim_csma_set_symbols_per_sec(int val)
#line 100
{
  csmaSymbolsPerSec = val;
}

#line 103
  void sim_csma_set_bits_per_symbol(int val)
#line 103
{
  csmaBitsPerSymbol = val;
}

#line 106
  void sim_csma_set_preamble_length(int val)
#line 106
{
  csmaPreambleLength = val;
}

#line 109
  void sim_csma_set_exponent_base(int val)
#line 109
{
  csmaExponentBase = val;
}

#line 112
  void sim_csma_set_max_iterations(int val)
#line 112
{
  csmaMaxIterations = val;
}

#line 115
  void sim_csma_set_min_free_samples(int val)
#line 115
{
  csmaMinFreeSamples = val;
}

#line 118
  void sim_csma_set_rxtx_delay(int val)
#line 118
{
  csmaRxTxDelay = val;
}

#line 121
  void sim_csma_set_ack_time(int val)
#line 121
{
  csmaAckTime = val;
}

# 15 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src, int channel_id)
#line 15
{

  sim_log_debug(8U, "channel_switching_debug", "Gain modeling: in sim_gain_first() and channel id is: %u\n", channel_id);

  if (src > 1000) {
      return connectivity[1000][channel_id];
    }
  return connectivity[src][channel_id];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 25
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain, int channel_id)
#line 29
{
  gain_entry_t *current;
  int temp = sim_node();

#line 32
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);
  current = sim_gain_first(src, channel_id);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }
  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest, channel_id);
      current->next = connectivity[src][channel_id];
      connectivity[src][channel_id] = current;
    }
  current->mote = dest;
  current->gain = gain;
  current->channel = channel_id;
  sim_log_debug(9U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest, int channel_id)
#line 56
{
  gain_entry_t *current;
  int temp = sim_node();

#line 59
  sim_set_node(src);
  current = sim_gain_first(src, channel_id);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(10U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(11U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest, int channel_id)
#line 74
{
  gain_entry_t *current;
  int temp = sim_node();

#line 77
  sim_set_node(src);
  current = sim_gain_first(src, channel_id);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest, int channel_id)
#line 90
{
  gain_entry_t *current;
  gain_entry_t *prevLink;

  int temp = sim_node();

#line 95
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);
  current = sim_gain_first(src, channel_id);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 104
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src][channel_id] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 123
  void sim_gain_set_noise_floor(int node, double mean, double range, int channel_id)
#line 123
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node][channel_id].mean = mean;
  localNoise[node][channel_id].range = range;
}

#line 147
  double sim_gain_sample_noise(int node, int channel_id)
#line 147
{
  double val;
#line 148
  double adjust;

#line 149
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node][channel_id].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node][channel_id].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 79 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id, uint8_t channel_id)
#line 79
{
  makeNoiseModel(node_id, channel_id);
  makePmfDistr(node_id, channel_id);
}

#line 419
  void makeNoiseModel(uint16_t node_id, uint8_t channel_id)
#line 419
{
  int i;




  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id][channel_id].key[i] = search_bin_num(noiseData[node_id][channel_id].noiseTrace[i]);
      sim_log_debug(45U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id][channel_id].key[i]);
    }


  for (i = NOISE_HISTORY; i < noiseData[node_id][channel_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id][channel_id].noiseTrace[i], channel_id);
      arrangeKey(node_id, channel_id);
      noiseData[node_id][channel_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id][channel_id].noiseTrace[i]);
    }
  noiseData[node_id][channel_id].generated = 1;
}

#line 107
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 110
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 138
  void sim_noise_add(uint16_t node_id, char noise, uint8_t channel_id)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id][channel_id].noiseTable;
  char *key = noiseData[node_id][channel_id].key;
  sim_noise_hash_t *noise_hash;

#line 144
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);


  sim_log_debug(14U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      __builtin_object_size((void *)noise_hash->key, 0) != (size_t )-1 ? __builtin___memcpy_chk((void *)noise_hash->key, (void *)key, NOISE_HISTORY, __builtin_object_size((void *)noise_hash->key, 0)) : __inline_memcpy_chk((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      __builtin_object_size((void *)noise_hash->elements, 0) != (size_t )-1 ? __builtin___memset_chk((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size, __builtin_object_size((void *)noise_hash->elements, 0)) : __inline_memset_chk((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      hashtable_insert(pnoiseTable, key, noise_hash);
      sim_log_debug(15U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 165
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(16U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(17U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      __builtin_object_size(newElements, 0) != (size_t )-1 ? __builtin___memcpy_chk(newElements, noise_hash->elements, noise_hash->size, __builtin_object_size(newElements, 0)) : __inline_memcpy_chk(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 242
  void arrangeKey(uint16_t node_id, uint8_t channel_id)
{

  char *pKey = noiseData[node_id][channel_id].key;

#line 246
  __builtin_object_size(pKey, 0) != (size_t )-1 ? __builtin___memcpy_chk(pKey, pKey + 1, NOISE_HISTORY - 1, __builtin_object_size(pKey, 0)) : __inline_memcpy_chk(pKey, pKey + 1, NOISE_HISTORY - 1);
}




  void makePmfDistr(uint16_t node_id, uint8_t channel_id)
{
  int i;
  char *pKey = noiseData[node_id][channel_id].key;
  char *fKey = noiseData[node_id][channel_id].freqKey;

  FreqKeyNum = 0;


  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id][channel_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id][channel_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id, channel_id);
      arrangeKey(node_id, channel_id);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id][channel_id].noiseTrace[i]);
    }

  sim_log_debug_clear(22U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(23U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(24U, "HASH", "\n");
}

#line 188
  void sim_noise_dist(uint16_t node_id, uint8_t channel_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id][channel_id].noiseTable;
  char *key = noiseData[node_id][channel_id].key;
  char *freqKey = noiseData[node_id][channel_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 197
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);




  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 212
      sim_log_debug(18U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 232
      FreqKeyNum = noise_hash->numElements;
      __builtin_object_size((void *)freqKey, 0) != (size_t )-1 ? __builtin___memcpy_chk((void *)freqKey, (void *)key, NOISE_HISTORY, __builtin_object_size((void *)freqKey, 0)) : __inline_memcpy_chk((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(19U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(20U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(21U, "HashZeroDebug", "\n");
    }
}

#line 93
  void sim_noise_trace_add(uint16_t node_id, char noiseVal, uint8_t channel_id)
#line 93
{

  if (noiseData[node_id][channel_id].noiseTraceIndex == noiseData[node_id][channel_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id][channel_id].noiseTraceLen * 2);

#line 97
      __builtin_object_size(data, 0) != (size_t )-1 ? __builtin___memcpy_chk(data, noiseData[node_id][channel_id].noiseTrace, noiseData[node_id][channel_id].noiseTraceLen, __builtin_object_size(data, 0)) : __inline_memcpy_chk(data, noiseData[node_id][channel_id].noiseTrace, noiseData[node_id][channel_id].noiseTraceLen);
      free(noiseData[node_id][channel_id].noiseTrace);
      noiseData[node_id][channel_id].noiseTraceLen *= 2;
      noiseData[node_id][channel_id].noiseTrace = data;
    }
  noiseData[node_id][channel_id].noiseTrace[noiseData[node_id][channel_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id][channel_id].noiseTraceIndex++;
  sim_log_debug(13U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id][channel_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}











  char search_noise_from_bin_num(int i)
{
  char noise;

#line 120
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 287
  char sim_noise_gen(uint16_t node_id, uint8_t channel_id)
{

  int i;
  int noiseIndex = 0;
  char noise;

  struct hashtable *pnoiseTable = noiseData[node_id][channel_id].noiseTable;

  char *pKey = noiseData[node_id][channel_id].key;
  char *fKey = noiseData[node_id][channel_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 300
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);



  if (noise_hash == (void *)0) {

      sim_log_debug(25U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(26U, "HASH", "(N)Noise\n");
      sim_log_debug(27U, "HashZeroDebug", "Defaulting to common hash.\n");
      __builtin_object_size((void *)pKey, 0) != (size_t )-1 ? __builtin___memcpy_chk((void *)pKey, (void *)fKey, NOISE_HISTORY, __builtin_object_size((void *)pKey, 0)) : __inline_memcpy_chk((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(28U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(29U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(30U, "HASH", "\n");

  sim_log_debug(31U, "HASH", "Printing Key\n");
  sim_log_debug(32U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(33U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(34U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(35U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(36U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(37U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 354
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(39U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 361
  sim_log_debug(40U, "HASH", "OUT:for i=%d\n", i);
  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(41U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

  char sim_noise_generate(uint16_t node_id, uint32_t cur_t, uint8_t channel_id)
#line 367
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;

  prev_t = noiseData[node_id][channel_id].noiseGenTime;

  if (noiseData[node_id][channel_id].generated == 0) {
      sim_log_error(42U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id][channel_id].noiseGenTime = cur_t;
      noiseData[node_id][channel_id].key[cur_t] = search_bin_num(noiseData[node_id][channel_id].noiseTrace[cur_t]);
      noiseData[node_id][channel_id].lastNoiseVal = noiseData[node_id][channel_id].noiseTrace[cur_t];
      return noiseData[node_id][channel_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 391
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(43U, "HASH", "delta_t = %d\n", delta_t);
  if (delta_t == 0) {
    noise = noiseData[node_id][channel_id].lastNoiseVal;
    }
  else 
#line 396
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);
      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id, channel_id);
          arrangeKey(node_id, channel_id);
          noiseData[node_id][channel_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id][channel_id].lastNoiseVal = noise;
      free(noiseG);
    }
  noiseData[node_id][channel_id].noiseGenTime = cur_t;
  if (noise == 0) {
      sim_log_debug(44U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 253 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 253
{
  va_list args;
  int i;

#line 256
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 261
      __builtin_va_start(args, format);
      fprintf(file, "%s ERROR (%i): ", sim_time_string(), (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 46 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 46
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 48
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 51
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 53
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 56
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 58
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 61
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 63
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 66
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 68
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 70
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 70
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 72
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 75
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 77
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 80
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 82
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 85
{
  message_t *msg = (message_t *)p;

#line 87
  return (uint8_t *)& msg->data;
}

#line 89
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 89
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 92
  __nesc_hton_int8(md->strength.nxdata, str);
}

#line 94
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 94
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(46U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 102
{
  return 28;
}

  sim_packet_t *sim_packet_allocate()
#line 106
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 110
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

  void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn)
#line 115
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 117
  __nesc_hton_uint8(hdr->dsn.nxdata, dsn);
}

  uint8_t sim_packet_dsn(sim_packet_t *msg)
#line 120
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 122
  return __nesc_ntoh_uint8(hdr->dsn.nxdata);
}

# 43 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 43
{
  char timeBuf[128];

#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    {






      SimMainP__Scheduler__init();





      SimMainP__PlatformInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;





      SimMainP__SoftwareInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;
    }
#line 67
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(101U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP__Boot__booted();





  return 0;
}

# 172 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

#line 175
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP__popTask();
      if (nextTask == SimSchedulerBasicP__NO_TASK) 
        {
          sim_log_debug(103U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 181
            FALSE;

            {
#line 181
              __nesc_atomic_end(__nesc_atomic); 
#line 181
              return __nesc_temp;
            }
          }
        }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
#line 184
  sim_log_debug(104U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

# 63 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static void LedsP__Leds__led0On(void )
#line 63
{
  LedsP__Led0__clr();
  sim_log_debug(120U, "LedsC", "LEDS: Led""0"" %s.\n", LedsP__Led0__get() ? "off" : "on");
#line 65
  ;
}

# 53 "RandRWC.nc"
static void RandRWC__resetSeed(void )
#line 53
{
  RandRWC__shiftReg[sim_node()] = 119 * 119 * (TOS_NODE_ID % 100 + 1);
  RandRWC__initSeed[sim_node()] = RandRWC__shiftReg[sim_node()];
  RandRWC__mask[sim_node()] = 137 * 29 * (TOS_NODE_ID % 100 + 1);
}

#line 37
static uint16_t RandRWC__rand(void )
#line 37
{
  bool endbit;
  uint16_t tmpShiftReg;

  tmpShiftReg = RandRWC__shiftReg[sim_node()];
  endbit = (tmpShiftReg & 0x8000) != 0;
  tmpShiftReg <<= 1;
  if (endbit) {
    tmpShiftReg ^= 0x100b;
    }
#line 46
  tmpShiftReg++;
  RandRWC__shiftReg[sim_node()] = tmpShiftReg;
  tmpShiftReg = tmpShiftReg ^ RandRWC__mask[sim_node()];

  return tmpShiftReg;
}

#line 212
static void RandRWC__done(void )
#line 212
{

  uint8_t act = 0;




  RandRWC__Leds__led2Toggle();

  switch (act) 
    {
      case 0: 
        if (RandRWC__testCount[sim_node()] < sizeof RandRWC__actions[sim_node()]) {
          RandRWC__doAction(RandRWC__actions[sim_node()][RandRWC__testCount[sim_node()]]);
          }
        else {
#line 227
          RandRWC__success();
          }
#line 228
      break;

      case RandRWC__A_READ: case RandRWC__A_WRITE: 
          if (RandRWC__testCount[sim_node()]) {
            RandRWC__success();
            }
          else {
#line 234
            RandRWC__doAction(act);
            }
#line 235
      break;

      default: 
        RandRWC__fail(FAIL);
      break;
    }
  RandRWC__testCount[sim_node()]++;
}

# 103 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static void LedsP__Leds__led2Toggle(void )
#line 103
{
  LedsP__Led2__toggle();
  sim_log_debug(128U, "LedsC", "LEDS: Led""2"" %s.\n", LedsP__Led2__get() ? "off" : "on");
#line 105
  ;
}

# 191 "RandRWC.nc"
static void RandRWC__doAction(int act)
#line 191
{
  RandRWC__count[sim_node()] = 0;
  RandRWC__resetSeed();

  switch (act) 
    {
      case RandRWC__A_WRITE: 
        sim_log_debug(52U, "RandRWC", "Erasing...\n");
      RandRWC__scheck(RandRWC__BlockWrite__erase());
      break;
      case RandRWC__A_READ: 
        RandRWC__nextRead();
      break;
    }
}

#line 92
static __attribute((noinline)) bool RandRWC__scheck(error_t r)
#line 92
{
  if (r != SUCCESS) {
    RandRWC__fail(r);
    }
#line 95
  return r == SUCCESS;
}

#line 80
static void RandRWC__fail(error_t e)
#line 80
{
  sim_log_debug(47U, "RandRWC", "Error %d occurred\n", e);
  RandRWC__Leds__led0On();
  RandRWC__report(e);
}

#line 67
static void RandRWC__report(error_t e)
#line 67
{
  uint8_t *msg = RandRWC__AMSend__getPayload(&RandRWC__reportMsg[sim_node()], 1);

  msg[0] = e;
  if (RandRWC__AMSend__send(AM_BROADCAST_ADDR, &RandRWC__reportMsg[sim_node()], 1) != SUCCESS) {
    RandRWC__Leds__led0On();
    }
}

# 178 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static error_t BlockStorageP__newRequest(uint8_t newState, uint8_t id, 
storage_addr_t addr, uint8_t * buf, storage_len_t len)
#line 179
{
  storage_len_t vsize;

  if (BlockStorageP__s[sim_node()][id].request != BlockStorageP__R_IDLE) {
    return EBUSY;
    }
  vsize = BlockStorageP__BlockRead__getSize(id);
  if (addr > vsize || len > vsize - addr) {
    return EINVAL;
    }
  BlockStorageP__s[sim_node()][id].request = newState;
  BlockStorageP__s[sim_node()][id].addr = addr;




  BlockStorageP__s[sim_node()][id].buf = (void *)0;
  BlockStorageP__s[sim_node()][id].len = len;
  BlockStorageP__s[sim_node()][id].buf = buf;

  BlockStorageP__Resource__request(id);

  return SUCCESS;
}

# 197 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  error_t result;

#line 200
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    {
      result = SimSchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(105U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(106U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 69
static void SimSchedulerBasicP__sim_scheduler_submit_event(void )
#line 69
{
  if (SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP__sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP__sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 136 "RandRWC.nc"
static void RandRWC__nextRead(void )
#line 136
{
  if (++RandRWC__count[sim_node()] == RandRWC__NWRITES) {
    RandRWC__done();
    }
  else {
      RandRWC__setParameters();
      sim_log_debug(49U, "RandRWC", "Reading %d bytes from addr...\n", RandRWC__len[sim_node()], RandRWC__addr[sim_node()]);
      RandRWC__scheck(RandRWC__BlockRead__read(RandRWC__addr[sim_node()], RandRWC__rdata[sim_node()], RandRWC__len[sim_node()]));
    }
}

#line 104
static void RandRWC__setParameters(void )
#line 104
{
  RandRWC__addr[sim_node()] = ((uint32_t )RandRWC__count[sim_node()] << 12) | (RandRWC__rand() >> 6);
  RandRWC__len[sim_node()] = RandRWC__rand() >> 7;
  if (RandRWC__addr[sim_node()] + RandRWC__len[sim_node()] > RandRWC__SIZE) {
    RandRWC__addr[sim_node()] = RandRWC__SIZE - RandRWC__len[sim_node()];
    }
#line 109
  RandRWC__offset[sim_node()] = RandRWC__rand() >> 8;
  if (RandRWC__offset[sim_node()] + RandRWC__len[sim_node()] > sizeof RandRWC__data[sim_node()]) {
    RandRWC__offset[sim_node()] = sizeof RandRWC__data[sim_node()] - RandRWC__len[sim_node()];
    }
}

#line 86
static void RandRWC__success(void )
#line 86
{
  sim_log_debug(48U, "RandRWC", "Success\n");
  RandRWC__Leds__led1On();
  RandRWC__report(0x80);
}

# 72 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/sim/At45dbP.nc"
static void At45dbP__requestDone(error_t result, uint16_t computedCrc, uint8_t newState)
{
  uint8_t orequest = At45dbP__request[sim_node()];

  At45dbP__request[sim_node()] = newState;
  switch (orequest) {
      case At45dbP__R_READ: 
        At45dbP__At45db__readDone(result);
      break;
      case At45dbP__R_READCRC: 
        At45dbP__At45db__computeCrcDone(result, computedCrc);
      break;
      case At45dbP__R_WRITE: 
        At45dbP__At45db__writeDone(result);
      break;
      case At45dbP__R_SYNC: 
        case At45dbP__R_SYNCALL: 
          At45dbP__At45db__syncDone(result);
      break;
      case At45dbP__R_FLUSH: 
        case At45dbP__R_FLUSHALL: 
          At45dbP__At45db__flushDone(result);
      break;
      case At45dbP__R_ERASE: 
        At45dbP__At45db__eraseDone(result);
      break;
      case At45dbP__R_COPY: 
        At45dbP__At45db__copyPageDone(result);
      break;
    }
}

# 150 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static void BlockStorageP__endRequest(error_t result, uint16_t crc)
#line 150
{
  uint8_t c = BlockStorageP__client[sim_node()];
  uint8_t tmpState = BlockStorageP__s[sim_node()][c].request;

  BlockStorageP__client[sim_node()] = BlockStorageP__NO_CLIENT;
  BlockStorageP__s[sim_node()][c].request = BlockStorageP__R_IDLE;
  BlockStorageP__Resource__release(c);

  switch (tmpState) 
    {
      case BlockStorageP__R_READ: 
        BlockStorageP__BlockRead__readDone(c, BlockStorageP__s[sim_node()][c].addr, BlockStorageP__s[sim_node()][c].buf, BlockStorageP__currentOffset[sim_node()], result);
      break;
      case BlockStorageP__R_WRITE: 
        BlockStorageP__BlockWrite__writeDone(c, BlockStorageP__s[sim_node()][c].addr, BlockStorageP__s[sim_node()][c].buf, BlockStorageP__currentOffset[sim_node()], result);
      break;
      case BlockStorageP__R_ERASE: 
        BlockStorageP__BlockWrite__eraseDone(c, result);
      break;
      case BlockStorageP__R_CRC: 
        BlockStorageP__BlockRead__computeCrcDone(c, BlockStorageP__s[sim_node()][c].addr, BlockStorageP__currentOffset[sim_node()], crc, result);
      break;
      case BlockStorageP__R_SYNC: 
        BlockStorageP__BlockWrite__syncDone(c, result);
      break;
    }
}

# 180 "RandRWC.nc"
static __attribute((noinline)) void RandRWC__BlockRead__readDone(storage_addr_t x, void *buf, storage_len_t rlen, error_t result)
#line 180
{
  if (RandRWC__scheck(result) && RandRWC__bcheck(x == RandRWC__addr[sim_node()] && rlen == RandRWC__len[sim_node()] && buf == RandRWC__rdata[sim_node()] && 
  memcmp(RandRWC__data[sim_node()] + RandRWC__offset[sim_node()], RandRWC__rdata[sim_node()], rlen) == 0)) {
    RandRWC__nextRead();
    }
}

#line 147
static void RandRWC__nextWrite(void )
#line 147
{
  if (++RandRWC__count[sim_node()] == RandRWC__NWRITES) 
    {
      RandRWC__Leds__led2Toggle();
      sim_log_debug(50U, "RandRWC", "Syncing...\n");
      RandRWC__scheck(RandRWC__BlockWrite__sync());
    }
  else 
    {
      RandRWC__setParameters();
      sim_log_debug(51U, "RandRWC", "Writing %d bytes to addr...\n", RandRWC__len[sim_node()], RandRWC__addr[sim_node()]);
      RandRWC__scheck(RandRWC__BlockWrite__write(RandRWC__addr[sim_node()], RandRWC__data[sim_node()] + RandRWC__offset[sim_node()], RandRWC__len[sim_node()]));
    }
}

# 235 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static void BlockStorageP__multipageContinue(uint16_t crc)
#line 235
{
  storage_addr_t remaining = BlockStorageP__s[sim_node()][BlockStorageP__client[sim_node()]].len - BlockStorageP__currentOffset[sim_node()];
#line 236
  storage_addr_t addr;
  at45page_t page;
  at45pageoffset_t pageOffset;
#line 238
  at45pageoffset_t count;
  uint8_t *buf = BlockStorageP__s[sim_node()][BlockStorageP__client[sim_node()]].buf;

  if (remaining == 0) 
    {
      BlockStorageP__endRequest(SUCCESS, crc);
      return;
    }

  addr = BlockStorageP__s[sim_node()][BlockStorageP__client[sim_node()]].addr + BlockStorageP__currentOffset[sim_node()];
  page = BlockStorageP__pageRemap(addr >> AT45_PAGE_SIZE_LOG2);
  pageOffset = addr & ((1 << AT45_PAGE_SIZE_LOG2) - 1);
  count = (1 << AT45_PAGE_SIZE_LOG2) - pageOffset;
  if (remaining < count) {
    count = remaining;
    }
  switch (BlockStorageP__s[sim_node()][BlockStorageP__client[sim_node()]].request) 
    {
      case BlockStorageP__R_WRITE: 
        BlockStorageP__At45db__write(page, pageOffset, buf + BlockStorageP__currentOffset[sim_node()], count);
      break;
      case BlockStorageP__R_READ: 
        BlockStorageP__At45db__read(page, pageOffset, buf + BlockStorageP__currentOffset[sim_node()], count);
      break;
      case BlockStorageP__R_CRC: 
        BlockStorageP__At45db__computeCrc(page, pageOffset, count, crc);
      break;
    }
  BlockStorageP__currentOffset[sim_node()] += count;
}

#line 114
static at45page_t BlockStorageP__BConfig__remap(uint8_t id, at45page_t page)
#line 114
{
  if (BlockStorageP__BConfig__isConfig(id) && BlockStorageP__BConfig__flipped(id)) {
    page += BlockStorageP__BConfig__npages(id);
    }
#line 117
  return BlockStorageP__At45dbVolume__remap(id, page);
}

# 79 "/Users/boli/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  error_t sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel)
#line 79
{
  error_t result;
  int tmp = sim_node();

#line 82
  sim_set_node(mote);
  result = SimMoteP__SimMote__setRadioChannel(newRadioChannel);
  sim_set_node(tmp);
  return result;
}




  uint8_t sim_mote_get_radio_channel(int mote)
#line 91
{
  uint8_t result;
  int tmp = sim_node();

#line 94
  sim_set_node(mote);
  result = SimMoteP__SimMote__getRadioChannel();
  sim_set_node(tmp);
  return result;
}

#line 135
  long long int sim_mote_euid(int mote)
#line 135
{
  long long int result;
  int tmp = sim_node();

#line 138
  sim_set_node(mote);
  result = SimMoteP__SimMote__getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 144
{
  int tmp = sim_node();

#line 146
  sim_set_node(mote);
  SimMoteP__SimMote__setEuid(id);
  sim_set_node(tmp);
}

  long long int sim_mote_start_time(int mote)
#line 151
{
  long long int result;
  int tmp = sim_node();

#line 154
  sim_set_node(mote);
  result = SimMoteP__SimMote__getStartTime();
  sim_set_node(tmp);
  return result;
}

  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 160
{
  int result;
  int tmpID = sim_node();

#line 163
  sim_set_node(mote);
  result = SimMoteP__SimMote__getVariableInfo(name, ptr, len);
  sim_log_debug(108U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 170
{
  int tmpID = sim_node();

#line 172
  sim_set_node(mote);
  SimMoteP__startTime[sim_node()] = t;
  sim_log_debug(109U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 188
{
  int tmp = sim_node();

#line 190
  sim_set_node(mote);
  SimMoteP__SimMote__turnOn();
  sim_set_node(tmp);
}

#line 117
static void SimMoteP__SimMote__turnOn(void )
#line 117
{
  if (!SimMoteP__isOn[sim_node()]) {
      if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP__startTime[sim_node()] = sim_time();
      sim_log_debug(107U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
      SimMoteP__isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 195
  void sim_mote_turn_off(int mote)
#line 195
{
  int tmp = sim_node();

#line 197
  sim_set_node(mote);
  SimMoteP__SimMote__turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 211
{
  int tmp = sim_node();

#line 213
  sim_set_node(mote);

  if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP__bootEvent[sim_node()]->time == SimMoteP__startTime[sim_node()]) {

          SimMoteP__bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP__bootEvent[sim_node()]->time = SimMoteP__startTime[sim_node()];
  SimMoteP__bootEvent[sim_node()]->mote = mote;
  SimMoteP__bootEvent[sim_node()]->force = TRUE;
  SimMoteP__bootEvent[sim_node()]->data = (void *)0;
  SimMoteP__bootEvent[sim_node()]->handle = SimMoteP__sim_mote_boot_handle;
  SimMoteP__bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP__bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module RandRWC */
  if (!strcmp(varname, "RandRWC__shiftReg"))
  {
    *addr = (uintptr_t)&RandRWC__shiftReg[__nesc_mote];
    *size = sizeof(RandRWC__shiftReg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandRWC__initSeed"))
  {
    *addr = (uintptr_t)&RandRWC__initSeed[__nesc_mote];
    *size = sizeof(RandRWC__initSeed[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandRWC__mask"))
  {
    *addr = (uintptr_t)&RandRWC__mask[__nesc_mote];
    *size = sizeof(RandRWC__mask[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandRWC__data"))
  {
    *addr = (uintptr_t)&RandRWC__data[__nesc_mote];
    *size = sizeof(RandRWC__data[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandRWC__rdata"))
  {
    *addr = (uintptr_t)&RandRWC__rdata[__nesc_mote];
    *size = sizeof(RandRWC__rdata[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandRWC__count"))
  {
    *addr = (uintptr_t)&RandRWC__count[__nesc_mote];
    *size = sizeof(RandRWC__count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandRWC__testCount"))
  {
    *addr = (uintptr_t)&RandRWC__testCount[__nesc_mote];
    *size = sizeof(RandRWC__testCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandRWC__addr"))
  {
    *addr = (uintptr_t)&RandRWC__addr[__nesc_mote];
    *size = sizeof(RandRWC__addr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandRWC__len"))
  {
    *addr = (uintptr_t)&RandRWC__len[__nesc_mote];
    *size = sizeof(RandRWC__len[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandRWC__offset"))
  {
    *addr = (uintptr_t)&RandRWC__offset[__nesc_mote];
    *size = sizeof(RandRWC__offset[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandRWC__reportMsg"))
  {
    *addr = (uintptr_t)&RandRWC__reportMsg[__nesc_mote];
    *size = sizeof(RandRWC__reportMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandRWC__actions"))
  {
    *addr = (uintptr_t)&*(unsigned char (*)[2])&RandRWC__actions[__nesc_mote];
    *size = sizeof(*(unsigned char (*)[2])&RandRWC__actions[__nesc_mote]);
    return 0;
  }

  /* Module BlockStorageP */
  if (!strcmp(varname, "BlockStorageP__client"))
  {
    *addr = (uintptr_t)&BlockStorageP__client[__nesc_mote];
    *size = sizeof(BlockStorageP__client[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BlockStorageP__currentOffset"))
  {
    *addr = (uintptr_t)&BlockStorageP__currentOffset[__nesc_mote];
    *size = sizeof(BlockStorageP__currentOffset[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BlockStorageP__s"))
  {
    *addr = (uintptr_t)&BlockStorageP__s[__nesc_mote];
    *size = sizeof(BlockStorageP__s[__nesc_mote]);
    return 0;
  }

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP__0 */

  /* Module HplAtm128GeneralIOPinP__1 */

  /* Module HplAtm128GeneralIOPinP__2 */

  /* Module HplAtm128GeneralIOPinP__3 */

  /* Module HplAtm128GeneralIOPinP__4 */

  /* Module HplAtm128GeneralIOPinP__5 */

  /* Module HplAtm128GeneralIOPinP__6 */

  /* Module HplAtm128GeneralIOPinP__7 */

  /* Module HplAtm128GeneralIOPinP__8 */

  /* Module HplAtm128GeneralIOPinP__9 */

  /* Module HplAtm128GeneralIOPinP__10 */

  /* Module HplAtm128GeneralIOPinP__11 */

  /* Module HplAtm128GeneralIOPinP__12 */

  /* Module HplAtm128GeneralIOPinP__13 */

  /* Module HplAtm128GeneralIOPinP__14 */

  /* Module HplAtm128GeneralIOPinP__15 */

  /* Module HplAtm128GeneralIOPinP__16 */

  /* Module HplAtm128GeneralIOPinP__17 */

  /* Module HplAtm128GeneralIOPinP__18 */

  /* Module HplAtm128GeneralIOPinP__19 */

  /* Module HplAtm128GeneralIOPinP__20 */

  /* Module HplAtm128GeneralIOPinP__21 */

  /* Module HplAtm128GeneralIOPinP__22 */

  /* Module HplAtm128GeneralIOPinP__23 */

  /* Module HplAtm128GeneralIOPinP__24 */

  /* Module HplAtm128GeneralIOPinP__25 */

  /* Module HplAtm128GeneralIOPinP__26 */

  /* Module HplAtm128GeneralIOPinP__27 */

  /* Module HplAtm128GeneralIOPinP__28 */

  /* Module HplAtm128GeneralIOPinP__29 */

  /* Module HplAtm128GeneralIOPinP__30 */

  /* Module HplAtm128GeneralIOPinP__31 */

  /* Module HplAtm128GeneralIOPinP__32 */

  /* Module HplAtm128GeneralIOPinP__33 */

  /* Module HplAtm128GeneralIOPinP__34 */

  /* Module HplAtm128GeneralIOPinP__35 */

  /* Module HplAtm128GeneralIOPinP__36 */

  /* Module HplAtm128GeneralIOPinP__37 */

  /* Module HplAtm128GeneralIOPinP__38 */

  /* Module HplAtm128GeneralIOPinP__39 */

  /* Module HplAtm128GeneralIOPinP__40 */

  /* Module HplAtm128GeneralIOPinP__41 */

  /* Module HplAtm128GeneralIOPinP__42 */

  /* Module HplAtm128GeneralIOPinP__43 */

  /* Module HplAtm128GeneralIOPinP__44 */

  /* Module HplAtm128GeneralIOPinP__45 */

  /* Module HplAtm128GeneralIOPinP__46 */

  /* Module HplAtm128GeneralIOPinP__47 */

  /* Module HplAtm128GeneralIOSlowPinP__0 */

  /* Module HplAtm128GeneralIOSlowPinP__1 */

  /* Module HplAtm128GeneralIOSlowPinP__2 */

  /* Module HplAtm128GeneralIOSlowPinP__3 */

  /* Module HplAtm128GeneralIOSlowPinP__4 */

  /* Module HplAtm128GeneralIOSlowPinP__5 */

  /* Module HplAtm128GeneralIOSlowPinP__6 */

  /* Module HplAtm128GeneralIOSlowPinP__7 */

  /* Module HplAtm128GeneralIOSlowPinP__8 */

  /* Module HplAtm128GeneralIOSlowPinP__9 */

  /* Module HplAtm128GeneralIOSlowPinP__10 */

  /* Module HplAtm128GeneralIOSlowPinP__11 */

  /* Module HplAtm128GeneralIOSlowPinP__12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP__m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP__euid"))
  {
    *addr = (uintptr_t)&SimMoteP__euid[__nesc_mote];
    *size = sizeof(SimMoteP__euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__startTime"))
  {
    *addr = (uintptr_t)&SimMoteP__startTime[__nesc_mote];
    *size = sizeof(SimMoteP__startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__isOn"))
  {
    *addr = (uintptr_t)&SimMoteP__isOn[__nesc_mote];
    *size = sizeof(SimMoteP__isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP__bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP__bootEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__radioChannel"))
  {
    *addr = (uintptr_t)&SimMoteP__radioChannel[__nesc_mote];
    *size = sizeof(SimMoteP__radioChannel[__nesc_mote]);
    return 0;
  }

  /* Module CC2420CsmaP */
  if (!strcmp(varname, "CC2420CsmaP__buffer"))
  {
    *addr = (uintptr_t)&CC2420CsmaP__buffer[__nesc_mote];
    *size = sizeof(CC2420CsmaP__buffer[__nesc_mote]);
    return 0;
  }

  /* Module FcfsResourceQueueC__0 */
  if (!strcmp(varname, "/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ"))
  {
    *addr = (uintptr_t)&/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[__nesc_mote];
    *size = sizeof(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead"))
  {
    *addr = (uintptr_t)&/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[__nesc_mote];
    *size = sizeof(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail"))
  {
    *addr = (uintptr_t)&/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail[__nesc_mote];
    *size = sizeof(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail[__nesc_mote]);
    return 0;
  }

  /* Module ArbiterP__0 */
  if (!strcmp(varname, "/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state"))
  {
    *addr = (uintptr_t)&/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[__nesc_mote];
    *size = sizeof(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId"))
  {
    *addr = (uintptr_t)&/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[__nesc_mote];
    *size = sizeof(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId"))
  {
    *addr = (uintptr_t)&/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId[__nesc_mote];
    *size = sizeof(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId[__nesc_mote]);
    return 0;
  }

  /* Module At45dbP */
  if (!strcmp(varname, "At45dbP__ifp"))
  {
    *addr = (uintptr_t)&At45dbP__ifp[__nesc_mote];
    *size = sizeof(At45dbP__ifp[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "At45dbP__request"))
  {
    *addr = (uintptr_t)&At45dbP__request[__nesc_mote];
    *size = sizeof(At45dbP__request[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "At45dbP__filename"))
  {
    *addr = (uintptr_t)&At45dbP__filename[__nesc_mote];
    *size = sizeof(At45dbP__filename[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "At45dbP__newCrc"))
  {
    *addr = (uintptr_t)&At45dbP__newCrc[__nesc_mote];
    *size = sizeof(At45dbP__newCrc[__nesc_mote]);
    return 0;
  }

  /* Module At45dbStorageManagerC */

  /* Module LedsP */

  /* Module SerialActiveMessageC */

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module RandRWC */
  memset((void *)&RandRWC__shiftReg[__nesc_mote], 0, sizeof RandRWC__shiftReg[__nesc_mote]);
  memset((void *)&RandRWC__initSeed[__nesc_mote], 0, sizeof RandRWC__initSeed[__nesc_mote]);
  memset((void *)&RandRWC__mask[__nesc_mote], 0, sizeof RandRWC__mask[__nesc_mote]);
  memset((void *)&RandRWC__data[__nesc_mote], 0, sizeof RandRWC__data[__nesc_mote]);
  memset((void *)&RandRWC__rdata[__nesc_mote], 0, sizeof RandRWC__rdata[__nesc_mote]);
  memset((void *)&RandRWC__count[__nesc_mote], 0, sizeof RandRWC__count[__nesc_mote]);
  memset((void *)&RandRWC__testCount[__nesc_mote], 0, sizeof RandRWC__testCount[__nesc_mote]);
  memset((void *)&RandRWC__addr[__nesc_mote], 0, sizeof RandRWC__addr[__nesc_mote]);
  memset((void *)&RandRWC__len[__nesc_mote], 0, sizeof RandRWC__len[__nesc_mote]);
  memset((void *)&RandRWC__offset[__nesc_mote], 0, sizeof RandRWC__offset[__nesc_mote]);
  memset((void *)&RandRWC__reportMsg[__nesc_mote], 0, sizeof RandRWC__reportMsg[__nesc_mote]);
  memcpy((void *)&*(unsigned char (*)[2])&RandRWC__actions[__nesc_mote], (void *)&(unsigned char const [2]){ RandRWC__A_WRITE, RandRWC__A_READ }, sizeof *(unsigned char (*)[2])&RandRWC__actions[__nesc_mote]);

  /* Module BlockStorageP */
  BlockStorageP__client[__nesc_mote] = BlockStorageP__NO_CLIENT;
  memset((void *)&BlockStorageP__currentOffset[__nesc_mote], 0, sizeof BlockStorageP__currentOffset[__nesc_mote]);
  memset((void *)&BlockStorageP__s[__nesc_mote], 0, sizeof BlockStorageP__s[__nesc_mote]);

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP__0 */

  /* Module HplAtm128GeneralIOPinP__1 */

  /* Module HplAtm128GeneralIOPinP__2 */

  /* Module HplAtm128GeneralIOPinP__3 */

  /* Module HplAtm128GeneralIOPinP__4 */

  /* Module HplAtm128GeneralIOPinP__5 */

  /* Module HplAtm128GeneralIOPinP__6 */

  /* Module HplAtm128GeneralIOPinP__7 */

  /* Module HplAtm128GeneralIOPinP__8 */

  /* Module HplAtm128GeneralIOPinP__9 */

  /* Module HplAtm128GeneralIOPinP__10 */

  /* Module HplAtm128GeneralIOPinP__11 */

  /* Module HplAtm128GeneralIOPinP__12 */

  /* Module HplAtm128GeneralIOPinP__13 */

  /* Module HplAtm128GeneralIOPinP__14 */

  /* Module HplAtm128GeneralIOPinP__15 */

  /* Module HplAtm128GeneralIOPinP__16 */

  /* Module HplAtm128GeneralIOPinP__17 */

  /* Module HplAtm128GeneralIOPinP__18 */

  /* Module HplAtm128GeneralIOPinP__19 */

  /* Module HplAtm128GeneralIOPinP__20 */

  /* Module HplAtm128GeneralIOPinP__21 */

  /* Module HplAtm128GeneralIOPinP__22 */

  /* Module HplAtm128GeneralIOPinP__23 */

  /* Module HplAtm128GeneralIOPinP__24 */

  /* Module HplAtm128GeneralIOPinP__25 */

  /* Module HplAtm128GeneralIOPinP__26 */

  /* Module HplAtm128GeneralIOPinP__27 */

  /* Module HplAtm128GeneralIOPinP__28 */

  /* Module HplAtm128GeneralIOPinP__29 */

  /* Module HplAtm128GeneralIOPinP__30 */

  /* Module HplAtm128GeneralIOPinP__31 */

  /* Module HplAtm128GeneralIOPinP__32 */

  /* Module HplAtm128GeneralIOPinP__33 */

  /* Module HplAtm128GeneralIOPinP__34 */

  /* Module HplAtm128GeneralIOPinP__35 */

  /* Module HplAtm128GeneralIOPinP__36 */

  /* Module HplAtm128GeneralIOPinP__37 */

  /* Module HplAtm128GeneralIOPinP__38 */

  /* Module HplAtm128GeneralIOPinP__39 */

  /* Module HplAtm128GeneralIOPinP__40 */

  /* Module HplAtm128GeneralIOPinP__41 */

  /* Module HplAtm128GeneralIOPinP__42 */

  /* Module HplAtm128GeneralIOPinP__43 */

  /* Module HplAtm128GeneralIOPinP__44 */

  /* Module HplAtm128GeneralIOPinP__45 */

  /* Module HplAtm128GeneralIOPinP__46 */

  /* Module HplAtm128GeneralIOPinP__47 */

  /* Module HplAtm128GeneralIOSlowPinP__0 */

  /* Module HplAtm128GeneralIOSlowPinP__1 */

  /* Module HplAtm128GeneralIOSlowPinP__2 */

  /* Module HplAtm128GeneralIOSlowPinP__3 */

  /* Module HplAtm128GeneralIOSlowPinP__4 */

  /* Module HplAtm128GeneralIOSlowPinP__5 */

  /* Module HplAtm128GeneralIOSlowPinP__6 */

  /* Module HplAtm128GeneralIOSlowPinP__7 */

  /* Module HplAtm128GeneralIOSlowPinP__8 */

  /* Module HplAtm128GeneralIOSlowPinP__9 */

  /* Module HplAtm128GeneralIOSlowPinP__10 */

  /* Module HplAtm128GeneralIOSlowPinP__11 */

  /* Module HplAtm128GeneralIOSlowPinP__12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP__m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_next[__nesc_mote]);
  SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP__euid[__nesc_mote], 0, sizeof SimMoteP__euid[__nesc_mote]);
  memset((void *)&SimMoteP__startTime[__nesc_mote], 0, sizeof SimMoteP__startTime[__nesc_mote]);
  memset((void *)&SimMoteP__isOn[__nesc_mote], 0, sizeof SimMoteP__isOn[__nesc_mote]);
  memset((void *)&SimMoteP__bootEvent[__nesc_mote], 0, sizeof SimMoteP__bootEvent[__nesc_mote]);
  SimMoteP__radioChannel[__nesc_mote] = 26;

  /* Module CC2420CsmaP */
  memset((void *)&CC2420CsmaP__buffer[__nesc_mote], 0, sizeof CC2420CsmaP__buffer[__nesc_mote]);

  /* Module FcfsResourceQueueC__0 */
  memset((void *)&/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[__nesc_mote], 0, sizeof /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[__nesc_mote]);
  /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead[__nesc_mote] = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
  /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail[__nesc_mote] = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

  /* Module ArbiterP__0 */
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state[__nesc_mote] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId[__nesc_mote] = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
  memset((void *)&/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId[__nesc_mote], 0, sizeof /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId[__nesc_mote]);

  /* Module At45dbP */
  At45dbP__ifp[__nesc_mote] = (void *)0;
  memset((void *)&At45dbP__request[__nesc_mote], 0, sizeof At45dbP__request[__nesc_mote]);
  memset((void *)&At45dbP__filename[__nesc_mote], 0, sizeof At45dbP__filename[__nesc_mote]);
  memset((void *)&At45dbP__newCrc[__nesc_mote], 0, sizeof At45dbP__newCrc[__nesc_mote]);

  /* Module At45dbStorageManagerC */

  /* Module LedsP */

  /* Module SerialActiveMessageC */

}
