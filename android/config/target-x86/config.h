/* x86-specific configuration */
#include "android/config/config.h"
#define TARGET_I386 1
/* For now, KVM is only supported on Linux hosts */
#if defined(CONFIG_LINUX) && (defined(__i386__) || defined(__x86_64__))
#define CONFIG_KVM  1
#endif

/*
 * HAX is supported in darwin and windows host
 */
#ifdef CONFIG_DARWIN
#define CONFIG_HAX 1
#endif

#ifdef CONFIG_WIN32
#define CONFIG_HAX 1
#endif
