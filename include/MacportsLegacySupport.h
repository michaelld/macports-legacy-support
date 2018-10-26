
#include "AvailabilityMacros.h"

// defines for when legacy support is required for various functions

// 10.7 SDK
#ifndef MAC_OS_X_VERSION_10_7
#define MAC_OS_X_VERSION_10_7 1070
#endif

// 10.8 SDK
#ifndef MAC_OS_X_VERSION_10_8
#define MAC_OS_X_VERSION_10_8 1080
#endif

// 10.9 SDK
#ifndef MAC_OS_X_VERSION_10_9
#define MAC_OS_X_VERSION_10_9 1090
#endif

// 10.10 SDK
#ifndef MAC_OS_X_VERSION_10_10
#define MAC_OS_X_VERSION_10_10 101000
#endif

// 10.11 SDK
#ifndef MAC_OS_X_VERSION_10_11
#define MAC_OS_X_VERSION_10_11 101100
#endif

// 10.12 SDK
#ifndef MAC_OS_X_VERSION_10_12
#define MAC_OS_X_VERSION_10_12 101200
#endif

// 10.13 SDK
#ifndef MAC_OS_X_VERSION_10_13
#define MAC_OS_X_VERSION_10_13 101300
#endif

// clock_gettime
#define __MP_LEGACY_SUPPORT_GETTIME__ __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < MAC_OS_X_VERSION_10_11

// strnlen
#define __MP_LEGACY_SUPPORT_STRNLEN__ __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < MAC_OS_X_VERSION_10_7

// strndup
#define __MP_LEGACY_SUPPORT_STRNDUP__ __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < MAC_OS_X_VERSION_10_7

// getline
#define __MP_LEGACY_SUPPORT_GETLINE__ __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < MAC_OS_X_VERSION_10_7

// memmem
#define __MP_LEGACY_SUPPORT_MEMMEM__  __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < MAC_OS_X_VERSION_10_7

// wcsdup
#define __MP_LEGACY_SUPPORT_WCSDUP__  __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < MAC_OS_X_VERSION_10_7
