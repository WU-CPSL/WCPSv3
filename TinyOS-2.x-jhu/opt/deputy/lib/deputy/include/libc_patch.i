# 1 "/Users/gwh2/tinyos/build-deputy/deputy/include/libc_patch.h"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/Users/gwh2/tinyos/build-deputy/deputy/include/deputy/annots.h" 1
# 71 "/Users/gwh2/tinyos/build-deputy/deputy/include/deputy/annots.h"
extern const int DEPUTY_NUM_CHECKS_ADDED;
# 1 "<command line>" 2
# 1 "/Users/gwh2/tinyos/build-deputy/deputy/include/libc_patch.h"
# 10 "/Users/gwh2/tinyos/build-deputy/deputy/include/libc_patch.h"
typedef void __gid_t;
typedef void __uid_t;
typedef unsigned long size_t;
typedef signed long ssize_t;
typedef void socklen_t;
typedef void __socklen_t;
typedef void mode_t;
typedef void dev_t;
typedef void time_t;
typedef void FILE;
typedef void DIR;
typedef void __gnuc_va_list;
# 40 "/Users/gwh2/tinyos/build-deputy/deputy/include/libc_patch.h"
void __assert_fail(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __assertion, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __file,
                   unsigned int __line, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __function);






void __assert_rtn(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), int, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))));
void __eprintf(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), unsigned, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))));



char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) crypt(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) key, const char * __attribute__((bounds((__this),(__this + (2))))) __attribute__((nonnull)) salt);
void setkey(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) key);




extern const char (__attribute__((bounds((__this),(__this + (256))))) _ctype_)[256];


const unsigned short * __attribute__((bounds((__this),(__this + (256))))) * __ctype_b_loc();
const signed int * __attribute__((bounds((__this),(__this + (256))))) * __ctype_tolower_loc();
const signed int * __attribute__((bounds((__this),(__this + (256))))) * __ctype_toupper_loc();



int open(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) file, int mode, ...);
int create(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) file, mode_t mode);



typedef struct {
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((bounds((__this),(__this + (gl_pathc))))) __attribute__((nullterm)) gl_pathv;
} glob_t;

int glob(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) pattern, int flags,
         int errfunc(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) epath, int eerrno),
         glob_t * __attribute__((bounds((__this),(__this + (1))))) pglob);



struct group {
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) gr_name;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) gr_passwd;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) gr_mem;
};

struct group * __attribute__((bounds((__this),(__this + (1))))) getgrnam(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) name);
int initgroups(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __user, __gid_t __group);
int getgrouplist(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __user, __gid_t __group, __gid_t *__groups,
                 int *__ngroups);



void * (__attribute__((dalloc(size))) malloc)(int size);
void * (__attribute__((dalloc(nmemb * size))) calloc)(size_t nmemb, size_t size);
void * (__attribute__((drealloc((p), (size)))) realloc)(void *p, size_t size);
void (__attribute__((dfree(p))) free)(void *p);



struct hostent {
    const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) h_name;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) h_aliases;

    char * __attribute__((bounds((__this),(__this + (4))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) h_addr_list;
};

struct netent {
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) n_name;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) n_aliases;
};

struct servent {
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) s_name;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) s_aliases;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) s_proto;
};

struct protoent {
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) p_name;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) p_aliases;
};

struct rpcent {
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) r_name;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) r_aliases;
};

struct sockaddr_un {
    char (__attribute__((nullterm)) sun_path)[108];
};

struct hostent *gethostbyaddr(const void * __attribute__((bounds((__this),(__this + (__len))))),
                              __socklen_t __len, int);

int gethostbyaddr_r(void * __attribute__((bounds((__this),(__this + (__len))))) __addr, __socklen_t __len,
                    int __type, struct hostent *__result_buf,
                    char * __attribute__((bounds((__this),(__this + (__buflen))))) __buf, size_t __buflen,
                    struct hostent * __attribute__((bounds((__this),(__this + (1))))) * __attribute__((bounds((__this),(__this + (1))))) __result, int *__h_errnop);

struct hostent *gethostbyname(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));
int gethostbyname_r(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __name, struct hostent *__result_buf,
                    char * __attribute__((bounds((__this),(__this + (__buflen))))) __buf, size_t __buflen,
                    struct hostent * __attribute__((bounds((__this),(__this + (1))))) * __attribute__((bounds((__this),(__this + (1))))) __restrict, int *__h_errnop);

struct netent *getnetbyname(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));
struct protoent *getprotobyname(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));

struct servent *getservbyname (const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)), const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));
struct servent *getservbyport (int, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));

int getservent_r(struct servent *__result_buf,
                 char * __attribute__((bounds((__this),(__this + (__buflen))))) __buf, size_t __buflen,
                 struct servent **__result);

int getservbyname_r(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __name, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __proto,
                    struct servent *__result_buf,
                    char * __attribute__((bounds((__this),(__this + (__buflen))))) __buf, size_t __buflen,
                    struct servent **__result);

int getservbyport_r(int __port, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __proto,
                    struct servent *__result_buf,
                    char * __attribute__((bounds((__this),(__this + (__buflne))))) __buf, size_t __buflen,
                    struct servent **__result);

struct rpcent *getrpcbyname(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));

void herror(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));

int getaddrinfo(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __name, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __service,
                struct addrinfo *__req, struct addrinfo **__pai);

int getnameinfo(struct sockaddr *__sa, socklen_t __salen,
                char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (__hostlen - 1))))) __host, socklen_t __hostlen,
                char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (__servlen-1))))) __serv,
                socklen_t __servlen, unsigned int __flags);



struct passwd {
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) pw_name;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) pw_passwd;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) pw_comment;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) pw_class;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) pw_gecos;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) pw_dir;
    char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) pw_shell;
};

struct passwd *getpwnam(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));



int setsockopt(int __s, int __level, int __optname,
               void const * __attribute__((bounds((__this),(__this + (__optlen))))) optval, socklen_t __optlen);



int getsockopt(int s, int level, int optname,
               void* optval, socklen_t * __optlen);
int bind(int sockfd, struct sockaddr * __my_addr, socklen_t __addrlen);
int connect(int sockfd, struct sockaddr * __my_addr, socklen_t __addrlen);
int accept(int s, struct sockaddr * __peer, socklen_t *addrlen);
int getpeername(int s, struct sockaddr * __peer, socklen_t *namelen);
int getsockname(int s, struct sockaddr * name, socklen_t *namelen);

ssize_t sendto(int s, const void * __attribute__((nonnull)) __attribute__((bounds((__this),(__this + (len))))) msg,
                 size_t len, int flags,
                 struct sockaddr * __addr, socklen_t __addr_len);

ssize_t recvfrom(int s, void * __attribute__((nonnull)) __attribute__((bounds((__this),(__this + (__n))))) buf,
                   size_t __n, int flags,
                   struct sockaddr * __addr, socklen_t * __addr_len);

ssize_t recv(int s, void * __attribute__((nonnull)) __attribute__((bounds((__this),(__this + (__n))))) buf,
               size_t __n, int flags);

ssize_t send(int s, const void * __attribute__((nonnull)) __attribute__((bounds((__this),(__this + (__n))))) msg,
               size_t __n, int flags);



int chmod(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __path, mode_t __mode);
int mkdir(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __path, mode_t __mode);
int mkfifo(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __path, mode_t __mode);
int stat(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __path, struct stat * __attribute__((bounds((__this),(__this + (1))))) __attribute__((nonnull)) __sbuf);

int lstat(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __path, struct stat * __attribute__((bounds((__this),(__this + (1))))) __attribute__((nonnull)) __sbuf);
int _stat(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __path, struct stat * __attribute__((bounds((__this),(__this + (1))))) __attribute__((nonnull)) __sbuf);

int __xstat(int __ver, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __path, struct stat * __attribute__((bounds((__this),(__this + (1))))) __attribute__((nonnull)) __sbuff);
int __lxstat(int __ver, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __path, struct stat * __attribute__((bounds((__this),(__this + (1))))) __attribute__((nonnull)) __sbuf);

int mknod(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __path, mode_t __mode, dev_t __dev);



int (__attribute__((dvararg(printf(2)))) fprintf) (FILE * __attribute__((bounds((__this),(__this + (1))))) __stream, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __format, ...);
int (__attribute__((dvararg(printf(1)))) printf) (char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __format, ...);
int (__attribute__((dvararg(printf(2)))) sprintf) (char * __attribute__((trusted)) __s, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __format, ...);
int (__attribute__((dvararg(printf(3)))) snprintf)(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (__maxlen-1))))) __s, size_t __maxlen,
                          char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __restrict __format, ...);
int (__attribute__((dvararg(printf(2)))) vfprintf)(FILE * __attribute__((bounds((__this),(__this + (1))))) __s, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __format,
                          __gnuc_va_list __arg);
int (__attribute__((dvararg(printf(1)))) vprintf) (char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __format, __gnuc_va_list __arg);
int (__attribute__((dvararg(printf(2)))) vsprintf)(char * __attribute__((trusted)) __s, __const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __format,
                          __gnuc_va_list __arg);

int fscanf(FILE * __attribute__((bounds((__this),(__this + (1))))) __attribute__((nonnull)), const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), ...);
int scanf(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), ...);
int sscanf(const char * __attribute__((trusted)), const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), ...);

char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) fgets(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (__n-1))))) __attribute__((nonnull)) __s, int __n,
                 FILE * __attribute__((nonnull)) __stream);

FILE * fdopen(int filedes, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) mode);

int fputs(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s, FILE * __attribute__((bounds((__this),(__this + (1))))) __attribute__((nonnull)) fl);
int puts(const char* __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s);

size_t fread(void * __attribute__((bounds((__this),(__this + (_size * _n))))) __attribute__((nonnull)), size_t _size,
             size_t _n, FILE * __attribute__((bounds((__this),(__this + (1))))) __attribute__((nonnull)));
size_t fwrite(const void * __attribute__((bounds((__this),(__this + (_size *_n))))) __attribute__((nonnull)),
              size_t _size, size_t _n, FILE * __attribute__((bounds((__this),(__this + (1))))) __attribute__((nonnull)));

extern void perror(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));

FILE * __attribute__((bounds((__this),(__this + (1))))) fopen(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) _name,
                           const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) _type);

int fseek(FILE * __attribute__((bounds((__this),(__this + (1))))) __attribute__((nonnull)), long, int);

int remove(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));
int rename(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)), const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));


extern FILE (__attribute__((bounds((__this),(__this + (3))))) __sF)[];



double atof(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))));
int atoi(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))));
long int atol(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))));
long long atoll(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))));

double __strtod_internal (char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) *, int);
float __strtof_internal (char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) *, int);
long double __strtold_internal(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) *, int);
long int __strtol_internal (char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) *, int, int);
long long int __strtoll_internal (char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) *, int, int);

double strtod(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((bounds((__this),(__this + (1))))) endptr);
long strtol(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((bounds((__this),(__this + (1))))) endptr, int base);
long long strtoll(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((bounds((__this),(__this + (1))))) endptr, int base);

char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) getenv(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str);
int putenv(char *__attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))));
int unsetenv(char *__attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))));

int system(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) str);



unsigned int strlen(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s);

void * (__attribute__((dmemset((1),(2),(3)))) memset)(void* p, int what, size_t sz);
int (__attribute__((dmemcmp((1),(2),(3)))) memcmp)(void* s1, void* s2, size_t sz);
void * (__attribute__((dmemcpy((1),(2),(3)))) memcpy)(void* dst, void* src, size_t sz);
void * (__attribute__((dmemcpy((1),(2),(3)))) memmove)(void *dst, void* src, size_t sz);

void bzero(void * __attribute__((bounds((__this),(__this + (size))))) buff, unsigned int size);

char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) strncpy(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (n))))) __attribute__((nonnull)) dest, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) src, size_t n);
char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __builtin_strncpy(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (n))))) __attribute__((nonnull)) dest, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) src, size_t n);

int strcmp(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s1, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s2);
int __builtin_strcmp(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s1, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s2);

int strncmp(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s1, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s2, size_t n);
int __builtin_strncmp(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s1, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s2, size_t n);

size_t strlcpy(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (siz-1))))) __attribute__((nonnull)) dst, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) src, size_t siz);

char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) strncat(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (n))))) __attribute__((nonnull)) dest, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) src, size_t n);
char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __builtin_strncat(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (n))))) __attribute__((nonnull)) dest, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) src, size_t n);

size_t strlcat(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (n-1))))) __attribute__((nonnull)) dest, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) src, size_t n);

char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) strchr(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s, int chr);
char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __builtin_strchr(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s, int chr);

char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) strrchr(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s, int chr);
char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) strdup(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s);
char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __strdup(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s);
char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) strpbrk(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) accept_arg);
char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __builtin_strpbrk(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) accept_arg);
char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __strpbrk_c2 (__const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, int __accept1, int __accept2);
char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) strsep(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) stringp, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) delim);

size_t strspn(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) charset);
size_t __builtin_strspn(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) charset);

size_t __strspn_c1(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, int accept1);
size_t __strspn_c2(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, int accept1, int accept2);
size_t __strspn_c3(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, int accept1, int accept2, int accept3);

size_t strcspn(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) charset);
size_t __builtin_strcspn(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) charset);

size_t __strcspn_c1(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, int reject1);
size_t __strcspn_c2(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, int reject1, int reject2);
size_t __strcspn_c3(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) str, int reject1, int reject2, int reject3);

int strcasecmp(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s1, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s2);
int strncasecmp(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s1, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) s2, size_t n);

char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) strtok(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) str, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) delim);

char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) strerror(int errnum);
char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) strstr(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __haystack, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __needle);



extern char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) ctime(const time_t *timer);
extern char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) asctime(const struct tm *timep);



size_t strftime(char * __attribute__((nonnull)) __attribute__((bounds((__this),(__this + (max))))) s, size_t max, const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) format,
                           const struct tm * __attribute__((bounds((__this),(__this + (1))))) tm);




struct iovec {
    void * __attribute__((bounds((__this),(__this + (iov_len))))) iov_base;
    size_t iov_len;
};

int readv(int fd, const struct iovec * __attribute__((bounds((__this),(__this + (__count))))), int __count);
int writev(int fd, const struct iovec * __attribute__((bounds((__this),(__this + (__count))))), int __count);



void read (int __fd, void * __attribute__((bounds((__this),(__this + (__nbytes))))) __buf, void __nbytes);
void write (int __fd, const void * __attribute__((bounds((__this),(__this + (__n))))) __buf, void __n);

int access(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) path, int amode);
int execv(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) path, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) argv);
int execvp(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) path, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) argv);
int execve(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) path, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) argv,
           char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) envp);

char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) getlogin(void);
char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) ttyname(int filedes);

int getopt(int argc, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (argc))))) argv,
           const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) optstring);

extern char *__attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) optarg;

char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) getusershell(void);

int chdir(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)));
int unlink(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __attribute__((nonnull)) __path);
int rmdir(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __path);




int gethostname (char * __attribute__((nonnull)) __attribute__((bounds((__this),(__this + (__len))))) __name, size_t __len);

int chown(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __file, __uid_t __owner, __gid_t __group);
int link(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __from, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __to);
int chroot(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) __path);

int readlink (char *__attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), char *__attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), size_t);

char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) getcwd (char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (__size))))) __attribute__((nonnull)) __buf, size_t __size);
# 440 "/Users/gwh2/tinyos/build-deputy/deputy/include/libc_patch.h"
typedef union __attribute__((trusted)) sigval {
    int sival_int;
    void *sival_ptr;
} sigval_t;
# 455 "/Users/gwh2/tinyos/build-deputy/deputy/include/libc_patch.h"
struct siginfo {
    union {
        void _kill __attribute__((when(si_signo == 9)));
        void _timer __attribute__((when(si_signo == 14)));
        void _rt __attribute__((when(0)));
        void _sigchld __attribute__((when(si_signo == 17)));
        void _sigfault __attribute__((when(si_signo == 4 || si_signo == 8 || si_signo == 11 || si_signo == 7)));

        void _sigpoll __attribute__((when(si_signo == 29)));
    } _sifields;
};





typedef void __sighandler_t;
typedef void siginfo_t;

struct sigaction {
    union {

        __sighandler_t sa_handler
            __attribute__((when(!(sa_flags & 4))));

        void (*sa_sigaction)(int, siginfo_t *, void *)
            __attribute__((when(sa_flags & 4)));
    } __sigaction_handler;
};



void openlog(char *__attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), int, int);
void syslog(int, char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), ...);



struct __res_state {
    char *__attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) (__attribute__((nullterm)) dnsrch)[0];
    char (__attribute__((nullterm)) defdname)[0];
    union {
        void pad __attribute__((when(0)));
        void _ext __attribute__((when(1)));
    } _u;
};



struct utsname {
    char (__attribute__((nullterm)) sysname)[0];
    char (__attribute__((nullterm)) nodename)[0];
    char (__attribute__((nullterm)) release)[0];
    char (__attribute__((nullterm)) version)[0];
    char (__attribute__((nullterm)) machine)[0];
    char (__attribute__((nullterm)) domainname)[0];
    char (__attribute__((nullterm)) __domainname)[0];
};



struct ifreq {
    union {
        char (__attribute__((nullterm)) ifrn_name)[0];
    } ifr_ifrn;
    union __attribute__((trusted)) {
    } ifr_ifru;
};

struct ifconf {
    union __attribute__((trusted)) {
        char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) ifcu_buf;
    } ifc_ifcu;
};



int statvfs(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), struct statvfs *);
int statvfs64(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), struct statvfs64 *);
int statfs(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), struct statfs *);
int statfs64(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), struct statfs64 *);



typedef void DB_ENV;
typedef void DB_INFO;
typedef void DBTYPE;
typedef void DB;
typedef unsigned int u_int32_t;

int db_appinit(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))) const *, DB_ENV *, u_int32_t);
int db_appexit(DB_ENV *);
int db_jump_set(void *, int);
int db_open(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), DBTYPE, u_int32_t, int,
              DB_ENV *, DB_INFO *, DB **);
int db_value_set(int, int);
char *db_version(int *, int *, int *);
int db_xa_open(const char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))), DBTYPE, u_int32_t, int, DB_INFO *, DB **);



struct dirent {
    char (__attribute__((nullterm)) d_name)[256];
};

struct dirent64 {
    char (__attribute__((nullterm)) d_name)[256];
};

DIR *opendir(char * __attribute__((nullterm)) __attribute__((bounds((__this),(__this + (0))))));
