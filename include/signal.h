#ifndef _SIGNAL_H
#define _SIGNAL_H

#include <sys/types.h>		// 锟斤拷锟斤拷头锟侥硷拷锟斤拷锟斤拷锟斤拷锟剿伙拷锟斤拷锟斤拷系统锟斤拷锟斤拷锟斤拷锟酵★拷

typedef int sig_atomic_t;	// 锟斤拷锟斤拷锟脚猴拷原锟接诧拷锟斤拷锟斤拷锟酵★拷
typedef unsigned int sigset_t;	/* 32 bits */// 锟斤拷锟斤拷锟脚号硷拷锟斤拷锟酵★拷

#define _NSIG 32		// 锟斤拷锟斤拷锟脚猴拷锟斤拷锟斤拷 -- 32 锟街★拷
#define NSIG _NSIG		// NSIG = _NSIG

// 锟斤拷锟斤拷锟斤拷些锟斤拷Linux 0.11 锟节猴拷锟叫讹拷锟斤拷锟斤拷藕拧锟�
#define SIGHUP 1		// Hang Up -- 锟揭断匡拷锟斤拷锟秸端伙拷锟斤拷獭锟�
#define SIGINT 2		// Interrupt -- 锟斤拷锟皆硷拷锟教碉拷锟叫断★拷
#define SIGQUIT 3		// Quit -- 锟斤拷锟皆硷拷锟教碉拷锟剿筹拷锟斤拷
#define SIGILL 4		// Illeagle -- 锟角凤拷指锟筋。
#define SIGTRAP 5		// Trap -- 锟斤拷锟劫断点。
#define SIGABRT 6		// Abort -- 锟届常锟斤拷锟斤拷锟斤拷
#define SIGIOT 6		// IO Trap -- 同锟较★拷
#define SIGUNUSED 7		// Unused -- 没锟斤拷使锟矫★拷
#define SIGFPE 8		// FPE -- 协锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷
#define SIGKILL 9		// Kill -- 强锟饺斤拷锟斤拷锟斤拷止锟斤拷
#define SIGUSR1 10		// User1 -- 锟矫伙拷锟脚猴拷1锟斤拷锟斤拷锟教匡拷使锟矫★拷
#define SIGSEGV 11		// Segment Violation -- 锟斤拷效锟节达拷锟斤拷锟矫★拷
#define SIGUSR2 12		// User2 -- 锟矫伙拷锟脚猴拷2锟斤拷锟斤拷锟教匡拷使锟矫★拷
#define SIGPIPE 13		// Pipe -- 锟杰碉拷写锟斤拷锟斤拷锟斤拷锟睫讹拷锟竭★拷
#define SIGALRM 14		// Alarm -- 实时锟斤拷时锟斤拷锟斤拷锟斤拷锟斤拷
#define SIGTERM 15		// Terminate -- 锟斤拷锟斤拷锟斤拷止锟斤拷
#define SIGSTKFLT 16		// Stack Fault -- 栈锟斤拷锟斤拷锟斤拷协锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷
#define SIGCHLD 17		// Child -- 锟接斤拷锟斤拷停止锟斤拷锟斤拷止锟斤拷
#define SIGCONT 18		// Continue -- 锟街革拷锟斤拷锟教硷拷锟斤拷执锟叫★拷
#define SIGSTOP 19		// Stop -- 停止锟斤拷锟教碉拷执锟叫★拷
#define SIGTSTP 20		// TTY Stop -- tty 锟斤拷锟斤拷停止锟斤拷锟教ｏ拷锟缴猴拷锟皆★拷
#define SIGTTIN 21		// TTY In -- 锟斤拷台锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟诫。
#define SIGTTOU 22		// TTY Out -- 锟斤拷台锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟�

/* Ok, I haven't implemented sigactions, but trying to keep headers POSIX */
/* OK锟斤拷锟揭伙拷没锟斤拷实锟斤拷sigactions 锟侥憋拷锟狡ｏ拷锟斤拷锟斤拷头锟侥硷拷锟斤拷锟斤拷希锟斤拷锟斤拷锟斤拷POSIX 锟斤拷准 */
#define SA_NOCLDSTOP 1		// 锟斤拷锟接斤拷锟教达拷锟斤拷停止状态锟斤拷锟酵诧拷锟斤拷SIGCHLD 锟斤拷锟斤拷锟斤拷
#define SA_NOMASK 0x40000000	// 锟斤拷锟斤拷止锟斤拷指锟斤拷锟斤拷锟脚号达拷锟斤拷锟斤拷锟斤拷(锟脚号撅拷锟�)锟斤拷锟斤拷锟秸碉拷锟斤拷锟脚号★拷
#define SA_ONESHOT 0x80000000	// 锟脚号撅拷锟揭伙拷锟斤拷锟斤拷锟斤拷霉锟斤拷突指锟斤拷锟侥�锟较达拷锟斤拷锟斤拷锟斤拷锟�

// 锟斤拷锟铰诧拷锟斤拷锟斤拷锟斤拷sigprocmask()-- 锟侥憋拷锟斤拷锟斤拷锟脚号硷拷(锟斤拷锟斤拷锟斤拷)锟斤拷锟斤拷些锟斤拷锟斤拷锟斤拷锟皆改憋拷煤锟斤拷锟斤拷锟斤拷锟轿�锟斤拷
#define SIG_BLOCK 0		/* for blocking signals */
// 锟斤拷锟斤拷锟斤拷锟脚号硷拷锟叫硷拷锟较革拷锟斤拷锟斤拷锟脚号硷拷锟斤拷
#define SIG_UNBLOCK 1		/* for unblocking signals */
// 锟斤拷锟斤拷锟斤拷锟脚号硷拷锟斤拷删锟斤拷指锟斤拷锟斤拷锟脚号硷拷锟斤拷
#define SIG_SETMASK 2		/* for setting the signal mask */
// 锟斤拷锟斤拷锟斤拷锟斤拷锟脚号硷拷锟斤拷锟脚猴拷锟斤拷锟斤拷锟诫）锟斤拷

#define SIG_DFL ((void (*)(int))0)	/* default signal handling */
// 默锟较碉拷锟脚号达拷锟斤拷锟斤拷锟斤拷锟脚号撅拷锟斤拷锟斤拷锟�
#define SIG_IGN ((void (*)(int))1)	/* ignore signal */
// 锟斤拷锟斤拷锟脚号的达拷锟斤拷锟斤拷锟斤拷

// 锟斤拷锟斤拷锟斤拷sigaction 锟斤拷锟斤拷锟捷结构锟斤拷
// sa_handler 锟角讹拷应某锟脚猴拷指锟斤拷要锟斤拷取锟斤拷锟叫讹拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟絊IG_DFL锟斤拷锟斤拷锟斤拷锟斤拷SIG_IGN 锟斤拷锟斤拷锟斤拷
// 锟斤拷锟脚号ｏ拷也锟斤拷锟斤拷锟斤拷指锟斤拷锟斤拷锟斤拷锟脚号猴拷锟斤拷锟斤拷一锟斤拷指锟诫。
// sa_mask 锟斤拷锟斤拷锟剿讹拷锟脚号碉拷锟斤拷锟斤拷锟诫，锟斤拷锟脚号筹拷锟斤拷执锟斤拷时锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷些锟脚号的达拷锟斤拷锟斤拷
// sa_flags 指锟斤拷锟侥憋拷锟脚号达拷锟斤拷锟斤拷锟教碉拷锟脚号硷拷锟斤拷锟斤拷锟斤拷锟斤拷37-39 锟叫碉拷位锟斤拷志锟斤拷锟斤拷摹锟�
// sa_restorer 锟街革拷锟斤拷锟斤拷指锟诫，锟斤拷锟斤拷锟节憋拷锟斤拷原锟斤拷锟截的癸拷锟斤拷指锟诫。
// 锟斤拷锟解，锟斤拷锟金触凤拷锟脚号达拷锟斤拷锟斤拷锟脚猴拷也锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷使锟斤拷锟斤拷SA_NOMASK 锟斤拷志锟斤拷
struct sigaction
{
  void (*sa_handler) (int);
  sigset_t sa_mask;
  int sa_flags;
  void (*sa_restorer) (void);
};

// 为锟脚猴拷_sig 锟斤拷装一锟斤拷锟铰碉拷锟脚号达拷锟斤拷锟斤拷锟斤拷锟脚号撅拷锟斤拷锟斤拷锟斤拷锟絪igaction()锟斤拷锟狡★拷
void (*signal (int _sig, void (*_func) (int))) (int);
// 锟斤拷前锟斤拷锟教凤拷锟斤拷一锟斤拷锟脚号★拷锟斤拷锟斤拷锟矫等硷拷锟斤拷kill(getpid(),sig)锟斤拷
int raise (int sig);
// 锟斤拷锟斤拷锟斤拷锟斤拷锟轿何斤拷锟斤拷锟斤拷锟斤拷锟教凤拷锟斤拷锟轿猴拷锟脚号★拷
int kill (pid_t pid, int sig);
// 锟斤拷锟脚号硷拷锟斤拷锟斤拷锟斤拷锟脚号★拷
int sigaddset (sigset_t * mask, int signo);
// 锟斤拷锟脚号硷拷锟斤拷去锟斤拷指锟斤拷锟斤拷锟脚号★拷
int sigdelset (sigset_t * mask, int signo);
// 锟斤拷锟脚号硷拷锟斤拷锟斤拷锟街革拷锟斤拷藕偶锟斤拷锟�
int sigemptyset (sigset_t * mask);
// 锟斤拷锟脚号硷拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟脚号★拷
int sigfillset (sigset_t * mask);
// 锟叫讹拷一锟斤拷锟脚猴拷锟角凤拷锟斤拷锟脚号硷拷锟叫的★拷1 -- 锟角ｏ拷 0 -- 锟斤拷锟角ｏ拷 -1 -- 锟斤拷锟斤拷锟斤拷
int sigismember (sigset_t * mask, int signo);	/* 1 - is, 0 - not, -1 error */
// 锟斤拷set 锟叫碉拷锟脚号斤拷锟叫硷拷猓�锟斤拷锟角凤拷锟叫癸拷锟斤拷锟斤拷藕拧锟�
int sigpending (sigset_t * set);
// 锟侥憋拷目前锟侥憋拷锟斤拷锟斤拷锟脚号硷拷锟斤拷锟脚猴拷锟斤拷锟斤拷锟诫）锟斤拷
int sigprocmask (int how, sigset_t * set, sigset_t * oldset);
// 锟斤拷sigmask 锟斤拷时锟芥换锟斤拷锟教碉拷锟脚猴拷锟斤拷锟斤拷锟斤拷,然锟斤拷锟斤拷停锟矫斤拷锟斤拷直锟斤拷锟秸碉拷一锟斤拷锟脚号★拷
int sigsuspend (sigset_t * sigmask);
// 锟斤拷锟节改憋拷锟斤拷锟斤拷锟斤拷盏锟街革拷锟斤拷藕锟绞憋拷锟斤拷锟饺★拷锟斤拷卸锟斤拷锟�
int sigaction (int sig, struct sigaction *act, struct sigaction *oldact);

#endif /* _SIGNAL_H */
