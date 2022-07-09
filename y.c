

typedef __builtin_va_list __gnuc_va_list;

typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short	__int16_t;
typedef unsigned short __uint16_t;
typedef int	__int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long	__darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
typedef int	__darwin_ct_rune_t;





typedef union {
	char		__mbstate8[128];
	long long	_mbstateL;
}		__mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int	__darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int	__darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long	__darwin_ssize_t;
typedef long	__darwin_time_t;
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
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char	__darwin_uuid_string_t[37];

struct __darwin_pthread_handler_rec {
	void            (*__routine) (void *);
	void           *__arg;
	struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
	long		__sig;
	char		__opaque  [56];
};

struct _opaque_pthread_cond_t {
	long		__sig;
	char		__opaque  [40];
};

struct _opaque_pthread_condattr_t {
	long		__sig;
	char		__opaque  [8];
};

struct _opaque_pthread_mutex_t {
	long		__sig;
	char		__opaque  [56];
};

struct _opaque_pthread_mutexattr_t {
	long		__sig;
	char		__opaque  [8];
};

struct _opaque_pthread_once_t {
	long		__sig;
	char		__opaque  [8];
};

struct _opaque_pthread_rwlock_t {
	long		__sig;
	char		__opaque  [192];
};

struct _opaque_pthread_rwlockattr_t {
	long		__sig;
	char		__opaque  [16];
};

struct _opaque_pthread_t {
	long		__sig;
	struct __darwin_pthread_handler_rec *__cleanup_stack;
	char		__opaque  [8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
typedef int	__darwin_nl_item;
typedef int	__darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;



typedef signed char int8_t;
typedef short	int16_t;
typedef int	int32_t;
typedef long long int64_t;

typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t	register_t;





typedef __darwin_intptr_t intptr_t;
typedef unsigned long uintptr_t;




typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t	user_ssize_t;
typedef int64_t	user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t	user_time_t;
typedef int64_t	user_off_t;
typedef u_int64_t syscall_arg_t;
typedef __darwin_va_list va_list;
typedef __darwin_size_t size_t;



int 
renameat(int, const char *, int, const char *);



int 
renamex_np(const char *, const char *, unsigned int);
int 
renameatx_np(int, const char *, int, const char *, unsigned int);





typedef __darwin_off_t fpos_t;
struct __sbuf {
	unsigned char  *_base;
	int		_size;
};


struct __sFILEX;
typedef struct __sFILE {
	unsigned char  *_p;
	int		_r;
	int		_w;
	short		_flags;
	short		_file;
	struct __sbuf	_bf;
	int		_lbfsize;


	void           *_cookie;
	int             (*_close) (void *);
	int             (*_read) (void *, char *, int);
			fpos_t        (*_seek) (void *, fpos_t, int);
	int             (*_write) (void *, const char *, int);


	struct __sbuf	_ub;
	struct __sFILEX *_extra;
	int		_ur;


	unsigned char	_ubuf[3];
	unsigned char	_nbuf[1];


	struct __sbuf	_lb;


	int		_blksize;
	fpos_t		_offset;
}		FILE;


extern FILE    *__stdinp;
extern FILE    *__stdoutp;
extern FILE    *__stderrp;


void		clearerr  (FILE *);
int		fclose     (FILE *);
int		feof       (FILE *);
int		ferror     (FILE *);
int		fflush     (FILE *);
int		fgetc      (FILE *);
int		fgetpos    (FILE * restrict, fpos_t *);
char           *fgets(char *restrict, int, FILE *);



FILE           *fopen(const char *restrict __filename, const char *restrict __mode)__asm("_" "fopen");

int		fprintf    (FILE * restrict, const char *restrict,...)__attribute__((__format__(__printf__, 2, 3)));
int		fputc      (int, FILE *);
int		fputs      (const char *restrict, FILE * restrict)__asm("_" "fputs");
size_t		fread   (void *restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE           *
freopen(const char *restrict, const char *restrict,
	FILE * restrict)__asm("_" "freopen");
	int		fscanf     (FILE * restrict, const char *restrict,...)__attribute__((__format__(__scanf__, 2, 3)));
	int		fseek      (FILE *, long, int);
	int		fsetpos    (FILE *, const fpos_t *);
	long		ftell     (FILE *);
	size_t		fwrite  (const void *restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream)__asm("_" "fwrite");
	int		getc       (FILE *);
	int		getchar    (void);
	char           *gets(char *);
	void		perror    (const char *)__attribute__((__cold__));
	int		printf     (const char *restrict,...)__attribute__((__format__(__printf__, 1, 2)));
	int		putc       (int, FILE *);
	int		putchar    (int);
	int		puts       (const char *);
	int		remove     (const char *);
	int		rename     (const char *__old, const char *__new);
	void		rewind    (FILE *);
	int		scanf      (const char *restrict,...)__attribute__((__format__(__scanf__, 1, 2)));
	void		setbuf    (FILE * restrict, char *restrict);
	int		setvbuf    (FILE * restrict, char *restrict, int, size_t);
	int		sprintf    (char *restrict, const char *restrict,...)__attribute__((__format__(__printf__, 2, 3)));
	int		sscanf     (const char *restrict, const char *restrict,...)__attribute__((__format__(__scanf__, 2, 3)));
	FILE           *tmpfile(void);



__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))
	char           *tmpnam(char *);
	int		ungetc     (int, FILE *);
	int		vfprintf   (FILE * restrict, const char *restrict, __gnuc_va_list)__attribute__((__format__(__printf__, 2, 0)));
	int		vprintf    (const char *restrict, __gnuc_va_list)__attribute__((__format__(__printf__, 1, 0)));
	int		vsprintf   (char *restrict, const char *restrict, __gnuc_va_list)__attribute__((__format__(__printf__, 2, 0)));




	char           *ctermid(char *);






	FILE           *fdopen(int, const char *)__asm("_" "fdopen");

	int		fileno     (FILE *);


	int		pclose     (FILE *);



	FILE           *popen(const char *, const char *)__asm("_" "popen");



	int		__srget    (FILE *);
	int		__svfscanf (FILE *, const char *, __gnuc_va_list)__attribute__((__format__(__scanf__, 2, 0)));
	int		__swbuf    (int, FILE *);








	extern __inline	__attribute__((__gnu_inline__)) __attribute__((__always_inline__))
	int		__sputc    (int _c, FILE * _p)
{
	if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
		return (*_p->_p++ = _c);
	else
		return (__swbuf(_c, _p));
}

void		flockfile (FILE *);
int		ftrylockfile(FILE *);
void		funlockfile(FILE *);
int		getc_unlocked(FILE *);
int		getchar_unlocked(void);
int		putc_unlocked(int, FILE *);
int		putchar_unlocked(int);



int		getw       (FILE *);
int		putw       (int, FILE *);




__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))
	char           *tempnam(const char *__dir, const char *__prefix)__asm("_" "tempnam");

	typedef __darwin_off_t off_t;


	int		fseeko     (FILE * __stream, off_t __offset, int __whence);
	off_t		ftello   (FILE * __stream);





	int		snprintf   (char *restrict __str, size_t __size, const char *restrict __format,...)__attribute__((__format__(__printf__, 3, 4)));
	int		vfscanf    (FILE * restrict __stream, const char *restrict __format, __gnuc_va_list)__attribute__((__format__(__scanf__, 2, 0)));
	int		vscanf     (const char *restrict __format, __gnuc_va_list)__attribute__((__format__(__scanf__, 1, 0)));
	int		vsnprintf  (char *restrict __str, size_t __size, const char *restrict __format, __gnuc_va_list)__attribute__((__format__(__printf__, 3, 0)));
	int		vsscanf    (const char *restrict __str, const char *restrict __format, __gnuc_va_list)__attribute__((__format__(__scanf__, 2, 0)));

	typedef __darwin_ssize_t ssize_t;


	int		dprintf    (int, const char *restrict,...)__attribute__((__format__(__printf__, 2, 3)));
	int		vdprintf   (int, const char *restrict, __gnuc_va_list)__attribute__((__format__(__printf__, 2, 0)));
	ssize_t		getdelim(char **restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream);
	ssize_t		getline(char **restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream);
	FILE           *fmemopen(void *restrict __buf, size_t __size, const char *restrict __mode);
	FILE           *open_memstream(char **__bufp, size_t * __sizep);









	extern const int sys_nerr;
	extern const char *const sys_errlist[];

	int		asprintf   (char **restrict, const char *restrict,...)__attribute__((__format__(__printf__, 2, 3)));
	char           *ctermid_r(char *);
	char           *fgetln(FILE *, size_t *);
	const char     *fmtcheck(const char *, const char *);
	int		fpurge     (FILE *);
	void		setbuffer (FILE *, char *, int);
	int		setlinebuf (FILE *);
	int		vasprintf  (char **restrict, const char *restrict, __gnuc_va_list)__attribute__((__format__(__printf__, 2, 0)));





	FILE           *funopen(const void *,
						int           (*) (void *, char *, int),
						int           (*) (void *, const char *, int),
						fpos_t        (*) (void *, fpos_t, int),
						int           (*) (void *));

	extern int	__sprintf_chk(char *restrict, int, size_t,
				 		const		char  *restrict,...);
	extern int	__snprintf_chk(char *restrict, size_t, int, size_t,
				  		const		char  *restrict,...);







	extern int	__vsprintf_chk(char *restrict, int, size_t,
				  		const		char  *restrict, va_list);







	extern int	__vsnprintf_chk(char *restrict, size_t, int, size_t,
				   		const		char  *restrict, va_list);
	typedef enum {
		P_ALL,
		P_PID,
		P_PGID
	}		idtype_t;





	typedef __darwin_pid_t pid_t;
	typedef __darwin_id_t id_t;
	typedef int	sig_atomic_t;
	struct __darwin_arm_exception_state {
		__uint32_t	__exception;
		__uint32_t	__fsr;
		__uint32_t	__far;
	};
	struct __darwin_arm_exception_state64 {
		__uint64_t	__far;
		__uint32_t	__esr;
		__uint32_t	__exception;
	};
	struct __darwin_arm_thread_state {
		__uint32_t	__r  [13];
		__uint32_t	__sp;
		__uint32_t	__lr;
		__uint32_t	__pc;
		__uint32_t	__cpsr;
	};
	struct __darwin_arm_thread_state64 {
		__uint64_t	__x  [29];
		__uint64_t	__fp;
		__uint64_t	__lr;
		__uint64_t	__sp;
		__uint64_t	__pc;
		__uint32_t	__cpsr;
		__uint32_t	__pad;
	};
	struct __darwin_arm_vfp_state {
		__uint32_t	__r  [64];
		__uint32_t	__fpscr;
	};
	struct __darwin_arm_neon_state64 {
		__uint128_t	__v [32];
		__uint32_t	__fpsr;
		__uint32_t	__fpcr;
	};

	struct __darwin_arm_neon_state {
		__uint128_t	__v [16];
		__uint32_t	__fpsr;
		__uint32_t	__fpcr;
	};
	struct __arm_pagein_state {
		int		__pagein_error;
	};
	struct __arm_legacy_debug_state {
		__uint32_t	__bvr[16];
		__uint32_t	__bcr[16];
		__uint32_t	__wvr[16];
		__uint32_t	__wcr[16];
	};
	struct __darwin_arm_debug_state32 {
		__uint32_t	__bvr[16];
		__uint32_t	__bcr[16];
		__uint32_t	__wvr[16];
		__uint32_t	__wcr[16];
		__uint64_t	__mdscr_el1;
	};


	struct __darwin_arm_debug_state64 {
		__uint64_t	__bvr[16];
		__uint64_t	__bcr[16];
		__uint64_t	__wvr[16];
		__uint64_t	__wcr[16];
		__uint64_t	__mdscr_el1;
	};
	struct __darwin_arm_cpmu_state64 {
		__uint64_t	__ctrs[16];
	};




	struct __darwin_mcontext32 {
		struct __darwin_arm_exception_state __es;
		struct __darwin_arm_thread_state __ss;
		struct __darwin_arm_vfp_state __fs;
	};
	struct __darwin_mcontext64 {
		struct __darwin_arm_exception_state64 __es;
		struct __darwin_arm_thread_state64 __ss;
		struct __darwin_arm_neon_state64 __ns;
	};
	typedef struct __darwin_mcontext64 *mcontext_t;

	typedef __darwin_pthread_attr_t pthread_attr_t;

	struct __darwin_sigaltstack {
		void           *ss_sp;
		__darwin_size_t	ss_size;
		int		ss_flags;
	};
	typedef struct __darwin_sigaltstack stack_t;
	struct __darwin_ucontext {
		int		uc_onstack;
		__darwin_sigset_t uc_sigmask;
		struct __darwin_sigaltstack uc_stack;
		struct __darwin_ucontext *uc_link;
		__darwin_size_t	uc_mcsize;
		struct __darwin_mcontext64 *uc_mcontext;



	};


	typedef struct __darwin_ucontext ucontext_t;


	typedef __darwin_sigset_t sigset_t;

	typedef __darwin_uid_t uid_t;

	union sigval {

		int		sival_int;
		void           *sival_ptr;
	};





	struct sigevent {
		int		sigev_notify;
		int		sigev_signo;
		union sigval	sigev_value;
		void            (*sigev_notify_function) (union sigval);
		pthread_attr_t *sigev_notify_attributes;
	};


	typedef struct __siginfo {
		int		si_signo;
		int		si_errno;
		int		si_code;
		pid_t		si_pid;
		uid_t		si_uid;
		int		si_status;
		void           *si_addr;
		union sigval	si_value;
		long		si_band;
		unsigned long	__pad[7];
	}		siginfo_t;
	union __sigaction_u {
		void            (*__sa_handler) (int);
		void            (*__sa_sigaction) (int, struct __siginfo *,
						   		void         *);
	};


	struct __sigaction {
		union __sigaction_u __sigaction_u;
		void            (*sa_tramp) (void *, int, int, siginfo_t *, void *);
		sigset_t	sa_mask;
		int		sa_flags;
	};




	struct sigaction {
		union __sigaction_u __sigaction_u;
		sigset_t	sa_mask;
		int		sa_flags;
	};
	typedef void    (*sig_t) (int);
	struct sigvec {
		void            (*sv_handler) (int);
		int		sv_mask;
		int		sv_flags;
	};
	struct sigstack {
		char           *ss_sp;
		int		ss_onstack;
	};

	void            (*signal(int, void (*) (int))) (int);

	typedef unsigned char uint8_t;
	typedef unsigned short uint16_t;
	typedef unsigned int uint32_t;
	typedef unsigned long long uint64_t;


	typedef int8_t	int_least8_t;
	typedef int16_t	int_least16_t;
	typedef int32_t	int_least32_t;
	typedef int64_t	int_least64_t;
	typedef uint8_t	uint_least8_t;
	typedef uint16_t uint_least16_t;
	typedef uint32_t uint_least32_t;
	typedef uint64_t uint_least64_t;



	typedef int8_t	int_fast8_t;
	typedef int16_t	int_fast16_t;
	typedef int32_t	int_fast32_t;
	typedef int64_t	int_fast64_t;
	typedef uint8_t	uint_fast8_t;
	typedef uint16_t uint_fast16_t;
	typedef uint32_t uint_fast32_t;
	typedef uint64_t uint_fast64_t;
	typedef long int intmax_t;
	typedef long unsigned int uintmax_t;







	struct timeval {
		__darwin_time_t	tv_sec;
		__darwin_suseconds_t tv_usec;
	};
	typedef __uint64_t rlim_t;
	struct rusage {
		struct timeval	ru_utime;
		struct timeval	ru_stime;
		long		ru_maxrss;

		long		ru_ixrss;
		long		ru_idrss;
		long		ru_isrss;
		long		ru_minflt;
		long		ru_majflt;
		long		ru_nswap;
		long		ru_inblock;
		long		ru_oublock;
		long		ru_msgsnd;
		long		ru_msgrcv;
		long		ru_nsignals;
		long		ru_nvcsw;
		long		ru_nivcsw;


	};
	typedef void   *rusage_info_t;

	struct rusage_info_v0 {
		uint8_t		ri_uuid[16];
		uint64_t	ri_user_time;
		uint64_t	ri_system_time;
		uint64_t	ri_pkg_idle_wkups;
		uint64_t	ri_interrupt_wkups;
		uint64_t	ri_pageins;
		uint64_t	ri_wired_size;
		uint64_t	ri_resident_size;
		uint64_t	ri_phys_footprint;
		uint64_t	ri_proc_start_abstime;
		uint64_t	ri_proc_exit_abstime;
	};

	struct rusage_info_v1 {
		uint8_t		ri_uuid[16];
		uint64_t	ri_user_time;
		uint64_t	ri_system_time;
		uint64_t	ri_pkg_idle_wkups;
		uint64_t	ri_interrupt_wkups;
		uint64_t	ri_pageins;
		uint64_t	ri_wired_size;
		uint64_t	ri_resident_size;
		uint64_t	ri_phys_footprint;
		uint64_t	ri_proc_start_abstime;
		uint64_t	ri_proc_exit_abstime;
		uint64_t	ri_child_user_time;
		uint64_t	ri_child_system_time;
		uint64_t	ri_child_pkg_idle_wkups;
		uint64_t	ri_child_interrupt_wkups;
		uint64_t	ri_child_pageins;
		uint64_t	ri_child_elapsed_abstime;
	};

	struct rusage_info_v2 {
		uint8_t		ri_uuid[16];
		uint64_t	ri_user_time;
		uint64_t	ri_system_time;
		uint64_t	ri_pkg_idle_wkups;
		uint64_t	ri_interrupt_wkups;
		uint64_t	ri_pageins;
		uint64_t	ri_wired_size;
		uint64_t	ri_resident_size;
		uint64_t	ri_phys_footprint;
		uint64_t	ri_proc_start_abstime;
		uint64_t	ri_proc_exit_abstime;
		uint64_t	ri_child_user_time;
		uint64_t	ri_child_system_time;
		uint64_t	ri_child_pkg_idle_wkups;
		uint64_t	ri_child_interrupt_wkups;
		uint64_t	ri_child_pageins;
		uint64_t	ri_child_elapsed_abstime;
		uint64_t	ri_diskio_bytesread;
		uint64_t	ri_diskio_byteswritten;
	};

	struct rusage_info_v3 {
		uint8_t		ri_uuid[16];
		uint64_t	ri_user_time;
		uint64_t	ri_system_time;
		uint64_t	ri_pkg_idle_wkups;
		uint64_t	ri_interrupt_wkups;
		uint64_t	ri_pageins;
		uint64_t	ri_wired_size;
		uint64_t	ri_resident_size;
		uint64_t	ri_phys_footprint;
		uint64_t	ri_proc_start_abstime;
		uint64_t	ri_proc_exit_abstime;
		uint64_t	ri_child_user_time;
		uint64_t	ri_child_system_time;
		uint64_t	ri_child_pkg_idle_wkups;
		uint64_t	ri_child_interrupt_wkups;
		uint64_t	ri_child_pageins;
		uint64_t	ri_child_elapsed_abstime;
		uint64_t	ri_diskio_bytesread;
		uint64_t	ri_diskio_byteswritten;
		uint64_t	ri_cpu_time_qos_default;
		uint64_t	ri_cpu_time_qos_maintenance;
		uint64_t	ri_cpu_time_qos_background;
		uint64_t	ri_cpu_time_qos_utility;
		uint64_t	ri_cpu_time_qos_legacy;
		uint64_t	ri_cpu_time_qos_user_initiated;
		uint64_t	ri_cpu_time_qos_user_interactive;
		uint64_t	ri_billed_system_time;
		uint64_t	ri_serviced_system_time;
	};

	struct rusage_info_v4 {
		uint8_t		ri_uuid[16];
		uint64_t	ri_user_time;
		uint64_t	ri_system_time;
		uint64_t	ri_pkg_idle_wkups;
		uint64_t	ri_interrupt_wkups;
		uint64_t	ri_pageins;
		uint64_t	ri_wired_size;
		uint64_t	ri_resident_size;
		uint64_t	ri_phys_footprint;
		uint64_t	ri_proc_start_abstime;
		uint64_t	ri_proc_exit_abstime;
		uint64_t	ri_child_user_time;
		uint64_t	ri_child_system_time;
		uint64_t	ri_child_pkg_idle_wkups;
		uint64_t	ri_child_interrupt_wkups;
		uint64_t	ri_child_pageins;
		uint64_t	ri_child_elapsed_abstime;
		uint64_t	ri_diskio_bytesread;
		uint64_t	ri_diskio_byteswritten;
		uint64_t	ri_cpu_time_qos_default;
		uint64_t	ri_cpu_time_qos_maintenance;
		uint64_t	ri_cpu_time_qos_background;
		uint64_t	ri_cpu_time_qos_utility;
		uint64_t	ri_cpu_time_qos_legacy;
		uint64_t	ri_cpu_time_qos_user_initiated;
		uint64_t	ri_cpu_time_qos_user_interactive;
		uint64_t	ri_billed_system_time;
		uint64_t	ri_serviced_system_time;
		uint64_t	ri_logical_writes;
		uint64_t	ri_lifetime_max_phys_footprint;
		uint64_t	ri_instructions;
		uint64_t	ri_cycles;
		uint64_t	ri_billed_energy;
		uint64_t	ri_serviced_energy;
		uint64_t	ri_interval_max_phys_footprint;
		uint64_t	ri_runnable_time;
	};

	struct rusage_info_v5 {
		uint8_t		ri_uuid[16];
		uint64_t	ri_user_time;
		uint64_t	ri_system_time;
		uint64_t	ri_pkg_idle_wkups;
		uint64_t	ri_interrupt_wkups;
		uint64_t	ri_pageins;
		uint64_t	ri_wired_size;
		uint64_t	ri_resident_size;
		uint64_t	ri_phys_footprint;
		uint64_t	ri_proc_start_abstime;
		uint64_t	ri_proc_exit_abstime;
		uint64_t	ri_child_user_time;
		uint64_t	ri_child_system_time;
		uint64_t	ri_child_pkg_idle_wkups;
		uint64_t	ri_child_interrupt_wkups;
		uint64_t	ri_child_pageins;
		uint64_t	ri_child_elapsed_abstime;
		uint64_t	ri_diskio_bytesread;
		uint64_t	ri_diskio_byteswritten;
		uint64_t	ri_cpu_time_qos_default;
		uint64_t	ri_cpu_time_qos_maintenance;
		uint64_t	ri_cpu_time_qos_background;
		uint64_t	ri_cpu_time_qos_utility;
		uint64_t	ri_cpu_time_qos_legacy;
		uint64_t	ri_cpu_time_qos_user_initiated;
		uint64_t	ri_cpu_time_qos_user_interactive;
		uint64_t	ri_billed_system_time;
		uint64_t	ri_serviced_system_time;
		uint64_t	ri_logical_writes;
		uint64_t	ri_lifetime_max_phys_footprint;
		uint64_t	ri_instructions;
		uint64_t	ri_cycles;
		uint64_t	ri_billed_energy;
		uint64_t	ri_serviced_energy;
		uint64_t	ri_interval_max_phys_footprint;
		uint64_t	ri_runnable_time;
		uint64_t	ri_flags;
	};

	typedef struct rusage_info_v5 rusage_info_current;
	struct rlimit {
		rlim_t		rlim_cur;
		rlim_t		rlim_max;
	};
	struct proc_rlimit_control_wakeupmon {
		uint32_t	wm_flags;
		int32_t		wm_rate;
	};

	int		getpriority(int, id_t);

	int		getiopolicy_np(int, int);

	int		getrlimit  (int, struct rlimit *)__asm("_" "getrlimit");
	int		getrusage  (int, struct rusage *);
	int		setpriority(int, id_t, int);

	int		setiopolicy_np(int, int, int);

	int		setrlimit  (int, const struct rlimit *)__asm("_" "setrlimit");




	static		inline
			uint16_t
			_OSSwapInt16  (
			 		uint16_t	_data
)
{

	return (uint16_t) (_data << 8 | _data >> 8);
}

static		inline
		uint32_t
_OSSwapInt32(
	     uint32_t _data
)
{




	_data = (((_data ^ (_data >> 16 | (_data << 16))) & 0xFF00FFFF) >> 8) ^ (_data >> 8 | _data << 24);


	return _data;
}

static		inline
		uint64_t
_OSSwapInt64(
	     uint64_t _data
)
{



	union {
		uint64_t	_ull;
		uint32_t	_ul    [2];
	}		_u;


	_u._ul[0] = (uint32_t) (_data >> 32);
	_u._ul[1] = (uint32_t) (_data & 0xffffffff);
	_u._ul[0] = _OSSwapInt32(_u._ul[0]);
	_u._ul[1] = _OSSwapInt32(_u._ul[1]);
	return _u._ull;

}



struct _OSUnalignedU16 {
	volatile uint16_t __val;
}		__attribute__((__packed__));

struct _OSUnalignedU32 {
	volatile uint32_t __val;
}		__attribute__((__packed__));

struct _OSUnalignedU64 {
	volatile uint64_t __val;
}		__attribute__((__packed__));
static		inline
		uint16_t
OSReadSwapInt16(
		const volatile void *_base,
		uintptr_t _offset
)
{
	return _OSSwapInt16(((struct _OSUnalignedU16 *)((uintptr_t) _base + _offset))->__val);
}
static		inline
		uint32_t
OSReadSwapInt32(
		const volatile void *_base,
		uintptr_t _offset
)
{
	return _OSSwapInt32(((struct _OSUnalignedU32 *)((uintptr_t) _base + _offset))->__val);
}
static		inline
		uint64_t
OSReadSwapInt64(
		const volatile void *_base,
		uintptr_t _offset
)
{
	return _OSSwapInt64(((struct _OSUnalignedU64 *)((uintptr_t) _base + _offset))->__val);
}
static		inline
void
OSWriteSwapInt16(
		 volatile void *_base,
		 uintptr_t _offset,
		 uint16_t _data
)
{
	((struct _OSUnalignedU16 *)((uintptr_t) _base + _offset))->__val = _OSSwapInt16(_data);
}
static		inline
void
OSWriteSwapInt32(
		 volatile void *_base,
		 uintptr_t _offset,
		 uint32_t _data
)
{
	((struct _OSUnalignedU32 *)((uintptr_t) _base + _offset))->__val = _OSSwapInt32(_data);
}
static		inline
void
OSWriteSwapInt64(
		 volatile void *_base,
		 uintptr_t _offset,
		 uint64_t _data
)
{
	((struct _OSUnalignedU64 *)((uintptr_t) _base + _offset))->__val = _OSSwapInt64(_data);
}







union wait {
	int		w_status;



	struct {

		unsigned int	w_Termsig:7, w_Coredump:1, w_Retcode:8, w_Filler:16;







	}		w_T;





	struct {

		unsigned int	w_Stopval:8, w_Stopsig:8, w_Filler:16;






	}		w_S;
};

pid_t		wait     (int *)__asm("_" "wait");
pid_t		waitpid  (pid_t, int *, int)__asm("_" "waitpid");

int		waitid     (idtype_t, id_t, siginfo_t *, int)__asm("_" "waitid");


pid_t		wait3    (int *, int, struct rusage *);
pid_t		wait4    (pid_t, int *, int, struct rusage *);




void           *alloca(size_t);

typedef __darwin_ct_rune_t ct_rune_t;
typedef __darwin_rune_t rune_t;


typedef __darwin_wchar_t wchar_t;

typedef struct {
	int		quot;
	int		rem;
}		div_t;

typedef struct {
	long		quot;
	long		rem;
}		ldiv_t;


typedef struct {
	long long	quot;
	long long	rem;
}		lldiv_t;
extern int	__mb_cur_max;


void           *malloc(size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void           *calloc(size_t __count, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1, 2)));
void		free      (void *);
void           *realloc(void *__ptr, size_t __size)__attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

void           *valloc(size_t) __attribute__((alloc_size(1)));




void           *
aligned_alloc(size_t __alignment, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

	int		posix_memalign(void **__memptr, size_t __alignment, size_t __size);




	void		abort     (void)__attribute__((__cold__)) __attribute__((__noreturn__));
	int		abs        (int)__attribute__((__const__));
	int		atexit     (void (*) (void));
	double		atof    (const char *);
	int		atoi       (const char *);
	long		atol      (const char *);

	long long
			atoll         (const char *);

	void           *bsearch(const void *__key, const void *__base, size_t __nel,
						size_t	__width, int (*__compar) (const void *, const void *));

	div_t		div      (int, int)__attribute__((__const__));
	void		exit      (int)__attribute__((__noreturn__));

	char           *getenv(const char *);
	long		labs      (long)__attribute__((__const__));
	ldiv_t		ldiv    (long, long)__attribute__((__const__));

	long long
			llabs         (long long);
	lldiv_t		lldiv  (long long, long long);


	int		mblen      (const char *__s, size_t __n);
	size_t		mbstowcs(wchar_t * restrict, const char *restrict, size_t);
	int		mbtowc     (wchar_t * restrict, const char *restrict, size_t);

	void		qsort     (void *__base, size_t __nel, size_t __width,
			 		int           (*__compar) (const void *, const void *));
	int		rand       (void);

	void		srand     (unsigned);
	double		strtod  (const char *, char **)__asm("_" "strtod");
	float		strtof   (const char *, char **)__asm("_" "strtof");
	long		strtol    (const char *__str, char **__endptr, int __base);
	long double
			strtold       (const char *, char **);

	long long
			strtoll       (const char *__str, char **__endptr, int __base);

	unsigned long
			strtoul       (const char *__str, char **__endptr, int __base);

	unsigned long long
			strtoull      (const char *__str, char **__endptr, int __base);





	int		system     (const char *)__asm("_" "system");


	size_t		wcstombs(char *restrict, const wchar_t * restrict, size_t);
	int		wctomb     (char *, wchar_t);


	void		_Exit     (int)__attribute__((__noreturn__));
	long		a64l      (const char *);
	double		drand48 (void);
	char           *ecvt(double, int, int *restrict, int *restrict);
	double		erand48 (unsigned short[3]);
	char           *fcvt(double, int, int *restrict, int *restrict);
	char           *gcvt(double, int, char *);
	int		getsubopt  (char **, char *const *, char **);
	int		grantpt    (int);

	char           *initstate(unsigned, char *, size_t);



	long		jrand48   (unsigned short[3]);
	char           *l64a(long);
	void		lcong48   (unsigned short[7]);
	long		lrand48   (void);
	char           *mktemp(char *);
	int		mkstemp    (char *);
	long		mrand48   (void);
	long		nrand48   (unsigned short[3]);
	int		posix_openpt(int);
	char           *ptsname(int);


	int		ptsname_r  (int fildes, char *buffer, size_t buflen);


	int		putenv     (char *)__asm("_" "putenv");
	long		random    (void);
	int		rand_r     (unsigned *);

	char           *realpath(const char *restrict, char *restrict)__asm("_" "realpath" "$DARWIN_EXTSN");



	unsigned short
	               *seed48(unsigned short[3]);
	int		setenv     (const char *__name, const char *__value, int __overwrite)__asm("_" "setenv");

	void		setkey    (const char *)__asm("_" "setkey");



	char           *setstate(const char *);
	void		srand48   (long);

	void		srandom   (unsigned);



	int		unlockpt   (int);

	int		unsetenv   (const char *)__asm("_" "unsetenv");







	typedef __darwin_dev_t dev_t;
	typedef __darwin_mode_t mode_t;


	uint32_t	arc4random(void);
	void		arc4random_addrandom(unsigned char *, int);
	void		arc4random_buf(void *__buf, size_t __nbytes);
	void		arc4random_stir(void);
uint32_t
arc4random_uniform(uint32_t __upper_bound);
char           *cgetcap(char *, const char *, int);
int		cgetclose  (void);
int		cgetent    (char **, char **, const char *);
int		cgetfirst  (char **, char **);
int		cgetmatch  (const char *, const char *);
int		cgetnext   (char **, char **);
int		cgetnum    (char *, const char *, long *);
int		cgetset    (const char *);
int		cgetstr    (char *, const char *, char **);
int		cgetustr   (char *, const char *, char **);

int 
daemon(int, int)__asm("_" "daemon");
char           *devname(dev_t, mode_t);
char           *devname_r(dev_t, mode_t, char *buf, int len);
char           *getbsize(int *, long *);
int		getloadavg (double[], int);
const char
               *getprogname(void);
void		setprogname(const char *);
int 
heapsort(void *__base, size_t __nel, size_t __width,
	 int (*__compar) (const void *, const void *));





	int		mergesort  (void *__base, size_t __nel, size_t __width,
			 		int           (*__compar) (const void *, const void *));





	void		psort     (void *__base, size_t __nel, size_t __width,
			 int (*__compar) (const void *, const void *));





	void		psort_r   (void *__base, size_t __nel, size_t __width, void *,
			 int (*__compar) (void *, const void *, const void *));





	void		qsort_r   (void *__base, size_t __nel, size_t __width, void *,
			 		int           (*__compar) (void *, const void *, const void *));
	int		radixsort  (const unsigned char **__base, int __nel, const unsigned char *__table,
			 		unsigned	__endbyte);
	int		rpmatch    (const char *);
	int		sradixsort (const unsigned char **__base, int __nel, const unsigned char *__table,
			 		unsigned	__endbyte);
	void		sranddev  (void);
	void		srandomdev(void);
	void           *reallocf(void *__ptr, size_t __size)__attribute__((alloc_size(2)));
	long long
			strtonum      (const char *__numstr, long long __minval, long long __maxval, const char **__errstrp);

	long long
			strtoq        (const char *__str, char **__endptr, int __base);
	unsigned long long
			strtouq       (const char *__str, char **__endptr, int __base);

	extern char    *suboptarg;









	typedef long	J , *T;
	typedef void	V;
	typedef char	C , *S;
	static T	b      [100100];
	static T	p = (J *) b + 1;
	static inline T	tn(J n)
{
	T		x = p + ((J *) (p))[-1] + 1;
	((J *) (p))[-1] += 8;
	return ((J *) (x))[-1] = n, x;
}
static inline T	t1(T x) {
	T		r = tn(1);
	*r = ((J) x);
	return r;
}
static inline T	t2(T x, T y) {
	T		r = tn(2);
	*r = ((J) x);
	r[1] = ((J) y);
	return r;
}
static inline T	t3(T x, T y, T z) {
	T		r = tn(3);
	*r = ((J) x);
	r[1] = ((J) y);
	r[2] = ((J) z);
	return r;
}
static inline T 
tc(C c)
{
	return (T) (J) c;
}
static inline T	o(T x) {
	if ((!(((J) (x)) > 255))) {
		((C) (J) x > 9 && (C) (J) x < 255 ? printf("%c", (C) (J) x) : printf("<0x%x>", (C) (J) x));
	} else {
		printf("("); {
			J		_n = ((J *) (x))[-1], i = 0;
			for (; i < _n; i++) {
				if (((((J) (x[i])) > 255))) {
					o(((T) x[i]));
				} else
					(((C) (J) x[i]) > 9 && ((C) (J) x[i]) < 255 ? printf("%c", ((C) (J) x[i])) : printf("<0x%x>", ((C) (J) x[i])));
				i < ((J *) (x))[-1] - 1 ? printf(";") : 0;
			}
		} printf(")");
	};
	return x;
}
static inline T	first(T x) {
	return (T) (J) ((((J) (x)) > 255) ? *x : ((J) x));
}
static inline T	drop(J n, T x) {
	J		m = (((J) (x)) > 255) ? ((J *) (x))[-1] - n : 0;
	T		r = tn(m); {
		J		_n = m,	i = 0;
		for (; i < _n; i++) {
			r[i] = x[i + n];
		}
	} return r;
}
static inline T	list(T x) {
	return (((J) (x)) > 255) ? x : t1(x);
}
static inline T	join(T x, T y) {
	J		n;
	x = list(x), y = list(y);
	n = ((J *) (x))[-1] + ((J *) (y))[-1];
	T		r = tn(n); {
		J		_n = n,	i = 0;
		for (; i < _n; i++) {
			r[i] = i < ((J *) (x))[-1] ? x[i] : y[i - ((J *) (x))[-1]];
		}
	};
	return r;
}
static inline T	count(T x) {
	return (T) (J) ((((J) (x)) > 255) ? ((J *) (x))[-1] : 1);
}
static inline T 
one(T x)
{
	return (((J) (x)) > 255) && ((J *) (x))[-1] == 1 ? first(x) : x;
}

static inline T 
t0()
{
	((J *) (p))[-1] = 0;
}

static C	c      [] = "                                 +'++++/()+++++/``````````+;+++++``````````````````````````[/]++```````````````````````````{+}+";

int		v          (T x) {
	if (((!count(x)))) {
		return (0);
	} else;
	return !(((J) (x)) > 255) ? c[((J) x)] == '+' : (x = first(x), !(((J) (x)) > 255) && c[((J) x)] == '/');
}
static inline T	unv(T x) {
	return first(x) ? x : drop(1, x);
}

int		yylex      ();
int		yyerror    (char *);
enum yytokentype {
	YYEMPTY = -2,
	YYEOF = 0,
	YYerror = 256,
	YYUNDEF = 257
};
typedef enum yytokentype yytoken_kind_t;
extern T	yylval;


int		yyparse    (void);




enum yysymbol_kind_t {
	YYSYMBOL_YYEMPTY = -2,
	YYSYMBOL_YYEOF = 0,
	YYSYMBOL_YYerror = 1,
	YYSYMBOL_YYUNDEF = 2,
	YYSYMBOL_3_ = 3,
	YYSYMBOL_4_ = 4,
	YYSYMBOL_5_ = 5,
	YYSYMBOL_6_ = 6,
	YYSYMBOL_7_ = 7,
	YYSYMBOL_8_ = 8,
	YYSYMBOL_9_ = 9,
	YYSYMBOL_10_ = 10,
	YYSYMBOL_YYACCEPT = 11,
	YYSYMBOL_S = 12,
	YYSYMBOL_E = 13,
	YYSYMBOL_e = 14,
	YYSYMBOL_t = 15,
	YYSYMBOL_v = 16,
	YYSYMBOL_n = 17
};
typedef enum yysymbol_kind_t yysymbol_kind_t;
typedef signed char yytype_int8;







typedef short int yytype_int16;
typedef unsigned char yytype_uint8;
typedef short unsigned int yytype_uint16;
typedef yytype_int8 yy_state_t;


typedef int	yy_state_fast_t;
union yyalloc {
	yy_state_t	yyss_alloc;
	T		yyvs_alloc;
};
static const yytype_int8 yytranslate[] =
{
	0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	8, 9, 2, 5, 2, 2, 2, 4, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 3,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 6, 2, 7, 2, 2, 10, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 1, 2
};
static const yytype_int8 yypact[] =
{
	3, -4, 3, -4, 6, 13, -4, -3, -4, -4,
	1, -4, 3, -4, 3, -4, -4, -4, 12, -4
};




static const yytype_int8 yydefact[] =
{
	5, 10, 5, 13, 0, 2, 4, 5, 8, 7,
	0, 1, 5, 9, 5, 6, 12, 3, 0, 11
};


static const yytype_int8 yypgoto[] =
{
	-4, -4, -2, 2, -4, -4, -4
};


static const yytype_int8 yydefgoto[] =
{
	0, 4, 5, 6, 7, 8, 9
};




static const yytype_int8 yytable[] =
{
	10, 13, 1, 14, 12, 2, 11, 3, 1, 15,
	16, 2, 18, 3, 17, 12, 12, 0, 0, 19
};

static const yytype_int8 yycheck[] =
{
	2, 4, 5, 6, 3, 8, 0, 10, 5, 7,
	9, 8, 14, 10, 12, 3, 3, -1, -1, 7
};



static const yytype_int8 yystos[] =
{
	0, 5, 8, 10, 12, 13, 14, 15, 16, 17,
	13, 0, 3, 4, 6, 14, 9, 14, 13, 7
};


static const yytype_int8 yyr1[] =
{
	0, 11, 12, 13, 13, 14, 14, 15, 15, 16,
	16, 17, 17, 17
};


static const yytype_int8 yyr2[] =
{
	0, 2, 1, 3, 1, 0, 2, 1, 1, 2,
	1, 4, 3, 1
};


enum {
YYENOMEM = -2};
static void
yydestruct(const char *yymsg,
	   yysymbol_kind_t yykind, T * yyvaluep)
{
	((void)(yyvaluep));
	if (!yymsg)
		yymsg = "Deleting";
	;


#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Wuninitialized"

#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"

	((void)(yykind));

#pragma GCC diagnostic pop

}



int		yychar;


T		yylval;

int		yynerrs;
int
yyparse(void)
{
	yy_state_fast_t	yystate = 0;

	int		yyerrstatus = 0;





	long int	yystacksize = 200;


	yy_state_t	yyssa[200];
	yy_state_t     *yyss = yyssa;
	yy_state_t     *yyssp = yyss;


	T		yyvsa        [200];
	T              *yyvs = yyvsa;
	T              *yyvsp = yyvs;

	int		yyn;

	int		yyresult;

	yysymbol_kind_t	yytoken = YYSYMBOL_YYEMPTY;


	T		yyval;







	int		yylen = 0;

	((void)0);

	yychar = -2;

	goto yysetstate;





yynewstate:


	yyssp++;





yysetstate:
	((void)0);
	((void)(0 && (0 <= yystate && yystate < 20)));

	*yyssp = ((yy_state_t) (yystate));

	;

	if (yyss + yystacksize - 1 <= yyssp) {

		long int	yysize = yyssp - yyss + 1;
		if (10000 <= yystacksize)
			goto yyexhaustedlab;
		yystacksize *= 2;
		if (10000 < yystacksize)
			yystacksize = 10000;

		{
			yy_state_t     *yyss1 = yyss;
			union yyalloc  *yyptr =
			((union yyalloc *)(malloc(((long unsigned int)(((yystacksize) * (((long int)(sizeof(yy_state_t))) + ((long int)(sizeof(T)))) + (((long int)(sizeof(union yyalloc))) - 1)))))));
			if (!yyptr)
				goto yyexhaustedlab;
			do {
				long int	yynewbytes;
				__builtin_memcpy(&yyptr->yyss_alloc, yyss, ((long unsigned int)((yysize))) * sizeof(*(yyss)));
				yyss = &yyptr->yyss_alloc;
				yynewbytes = yystacksize * ((long int)(sizeof(*yyss))) + (((long int)(sizeof(union yyalloc))) - 1);
				yyptr += yynewbytes / ((long int)(sizeof(*yyptr)));
			} while (0);
			do {
				long int	yynewbytes;
				__builtin_memcpy(&yyptr->yyvs_alloc, yyvs, ((long unsigned int)((yysize))) * sizeof(*(yyvs)));
				yyvs = &yyptr->yyvs_alloc;
				yynewbytes = yystacksize * ((long int)(sizeof(*yyvs))) + (((long int)(sizeof(union yyalloc))) - 1);
				yyptr += yynewbytes / ((long int)(sizeof(*yyptr)));
			} while (0);

			if (yyss1 != yyssa)
				free(yyss1);
		}


		yyssp = yyss + yysize - 1;
		yyvsp = yyvs + yysize - 1;


		((void)0);


		if (yyss + yystacksize - 1 <= yyssp)
			goto yyabortlab;
	}
	if (yystate == 11)
		goto yyacceptlab;

	goto yybackup;





yybackup:




	yyn = yypact[yystate];
	if (((yyn) == (-4)))
		goto yydefault;




	if (yychar == -2) {
		((void)0);
		yychar = yylex();
	}
	if (yychar <= 0) {
		yychar = 0;
		yytoken = YYSYMBOL_YYEOF;
		((void)0);
	} else if (yychar == 256) {




		yychar = 257;
		yytoken = YYSYMBOL_YYerror;
		goto yyerrlab1;
	} else {
		yytoken = (0 <= (yychar) && (yychar) <= 257 ? ((yysymbol_kind_t) (yytranslate[yychar])) : YYSYMBOL_YYUNDEF);
		;
	}



	yyn += yytoken;
	if (yyn < 0 || 19 < yyn || yycheck[yyn] != yytoken)
		goto yydefault;
	yyn = yytable[yyn];
	if (yyn <= 0) {
		if (0)
			goto yyerrlab;
		yyn = -yyn;
		goto yyreduce;
	}
	if (yyerrstatus)
		yyerrstatus--;


	;
	yystate = yyn;

#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Wuninitialized"

#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"

	*++yyvsp = yylval;

#pragma GCC diagnostic pop



	yychar = -2;
	goto yynewstate;





yydefault:
	yyn = yydefact[yystate];
	if (yyn == 0)
		goto yyerrlab;
	goto yyreduce;





yyreduce:

	yylen = yyr2[yyn];
	yyval = yyvsp[1 - yylen];


	;
	switch (yyn) {
	case 2:
		{
			yyval = o(unv(yyvsp[0]));
			printf("\n");
		}
		break;

	case 3:
		{
			yyval = !count(yyvsp[0]) ? yyvsp[-2] : t2(yyvsp[-2], unv(yyvsp[0]));
		}
		break;

	case 4:
		{
			yyval = unv(yyvsp[0]);
		}
		break;

	case 5:
		{
			yyval = tn(0);
		}
		break;

	case 6:
		{
			T		t = yyvsp[-1], e = yyvsp[0];
			yyval = !count(e) ? (v(t) ? t2(0, t) : t) : v(t) ? (t3(0, t, !first(e) ? drop(1, e) : e)) : !first(e) ? t3(first(drop(1, e)), t, one(drop(2, e))) : t2(t, e);
		}
		break;

	case 7:
		{
			yyval = yyvsp[0];
		}
		break;

	case 8:
		{
			yyval = yyvsp[0];
		}
		break;

	case 9:
		{
			yyval = t2(yyvsp[0], yyvsp[-1]);
		}
		break;

	case 10:
		{
			yyval = yyvsp[0];
		}
		break;

	case 11:
		{
			yyval = t2(yyvsp[-3], yyvsp[-1]);
		}
		break;

	case 12:
		{
			yyval = one(yyvsp[-1]);
		}
		break;

	case 13:
		{
			yyval = yyvsp[0];
		}
		break;

	default:
		break;
	}
	;

	(yyvsp -= (yylen), yyssp -= (yylen));
	yylen = 0;

	*++yyvsp = yyval;




	{
		const int	yylhs = yyr1[yyn] - 11;
		const int	yyi = yypgoto[yylhs] + *yyssp;
		yystate = (0 <= yyi && yyi <= 19 && yycheck[yyi] == *yyssp
			   ? yytable[yyi]
			   : yydefgoto[yylhs]);
	}

	goto yynewstate;





yyerrlab:


	yytoken = yychar == -2 ? YYSYMBOL_YYEMPTY : (0 <= (yychar) && (yychar) <= 257 ? ((yysymbol_kind_t) (yytranslate[yychar])) : YYSYMBOL_YYUNDEF);

	if (!yyerrstatus) {
		++yynerrs;
		yyerror("syntax error");
	}
	if (yyerrstatus == 3) {



		if (yychar <= 0) {

			if (yychar == 0)
				goto yyabortlab;
		} else {
			yydestruct("Error: discarding",
				   yytoken, &yylval);
			yychar = -2;
		}
	}
	goto yyerrlab1;





yyerrorlab:


	if (0)
		goto yyerrorlab;
	++yynerrs;



	(yyvsp -= (yylen), yyssp -= (yylen));
	yylen = 0;
	;
	yystate = *yyssp;
	goto yyerrlab1;





yyerrlab1:
	yyerrstatus = 3;


	for (;;) {
		yyn = yypact[yystate];
		if (!((yyn) == (-4))) {
			yyn += YYSYMBOL_YYerror;
			if (0 <= yyn && yyn <= 19 && yycheck[yyn] == YYSYMBOL_YYerror) {
				yyn = yytable[yyn];
				if (0 < yyn)
					break;
			}
		}
		if (yyssp == yyss)
			goto yyabortlab;


		yydestruct("Error: popping",
			   ((yysymbol_kind_t) (yystos[yystate])), yyvsp);
		(yyvsp -= (1), yyssp -= (1));
		yystate = *yyssp;
		;
	}


#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Wuninitialized"

#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"

	*++yyvsp = yylval;

#pragma GCC diagnostic pop




	;

	yystate = yyn;
	goto yynewstate;





yyacceptlab:
	yyresult = 0;
	goto yyreturnlab;





yyabortlab:
	yyresult = 1;
	goto yyreturnlab;





yyexhaustedlab:
	yyerror("memory exhausted");
	yyresult = 2;
	goto yyreturnlab;





yyreturnlab:
	if (yychar != -2) {


		yytoken = (0 <= (yychar) && (yychar) <= 257 ? ((yysymbol_kind_t) (yytranslate[yychar])) : YYSYMBOL_YYUNDEF);
		yydestruct("Cleanup: discarding lookahead",
			   yytoken, &yylval);
	}
	(yyvsp -= (yylen), yyssp -= (yylen));
	;
	while (yyssp != yyss) {
		yydestruct("Cleanup: popping",
			   ((yysymbol_kind_t) (yystos[+*yyssp])), yyvsp);
		(yyvsp -= (1), yyssp -= (1));
	}

	if (yyss != yyssa)
		free(yyss);


	return yyresult;
}

static int	end;
static FILE    *f;
C		opt          [256];
int		yylex      () {
	int		y         , x = fgetc(f);
	if ((x == 10)) {
		0 > (y = fgetc(f)) ? x = y : ungetc(y, f);
	} else;
	return x == 10 || (end = (x < 0)) ? 0 : (yylval = tc(x), c[x]);
}
int		yyerror    (char *s){
	printf("'%s\n", s);
	exit(0);
	return 3;
}
int 
main(int c, S * v)
{
	f = c > 1 ? fopen(v[1], "r") :
	__stdinp
	;
	while ((!end))
		t0(), yyparse();
}
