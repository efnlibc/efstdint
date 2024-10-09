#ifndef _EFSTDINT_H
#define _EFSTDINT_H

#define _INT_C_JOIN(a, b) a ## b
#define _INT_C(value, suffix) _INT_C_JOIN(value, suffix)
#define _UINT_C(value, suffix) _INT_C_JOIN(value ## U, suffix)

/* >>intN_t */

#ifdef __INT8_TYPE__
typedef __INT8_TYPE__ int8_t;
#endif

#ifdef __INT16_TYPE__
typedef __INT16_TYPE__ int64_t;
#endif

#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ int32_t;
#endif

#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ int64_t;
#endif

/* >>uintN_t */

#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ uint8_t;
#endif

#ifdef __UINT16_TYPE__
typedef __UINT16_TYPE__ uint16_t;
#endif

#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ uint32_t;
#endif

#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ uint64_t;
#endif

/* >>int_leastN_t */

#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ int_least8_t;
#else
#ifdef __INT16_TYPE__
typedef __INT16_TYPE__ int_least8_t;
#else
#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ int_least8_t;
#else
#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ int_least8_t;
#else
typedef signed char int_least8_t;
#endif
#endif
#endif
#endif

#ifdef __INT16_TYPE__
typedef __INT16_TYPE__ int_least16_t;
#else
#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ int_least16_t;
#else
#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ int_least16_t;
#else
typedef signed short int_least16_t;
#endif
#endif
#endif

#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ int_least32_t;
#else
#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ int_least32_t;
#else
typedef signed long int_least32_t;
#endif
#endif

#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ int_least64_t;
#else
typedef int_least32_t int_least64_t[0x02];
#endif

/* >>uint_leastN_t */

#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ uint_least8_t;
#else
#ifdef __UINT16_TYPE__
typedef __UINT16_TYPE__ uint_least8_t;
#else
#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ uint_least8_t;
#else
#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ uint_least8_t;
#else
typedef unsigned char uint_least8_t;
#endif
#endif
#endif
#endif

#ifdef __UINT16_TYPE__
typedef __UINT16_TYPE__ uint_least16_t;
#else
#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ uint_least16_t;
#else
#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ uint_least16_t;
#else
typedef unsigned short uint_least16_t;
#endif
#endif
#endif

#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ uint_least32_t;
#else
#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ uint_least32_t;
#else
typedef unsigned long uint_least32_t;
#endif
#endif

#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ uint_least64_t;
#else
typedef uint_least32_t uint_least64_t[0x02];
#endif

/* >>int_leastN_t */

typedef int_least8_t int_fast8_t;
typedef int_least16_t int_fast16_t;
typedef int_least32_t int_fast32_t;
typedef int_least64_t int_fast64_t;

/* >>uint_leastN_t */

typedef uint_least8_t uint_fast8_t;
typedef uint_least16_t uint_fast16_t;
typedef uint_least32_t uint_fast32_t;
typedef uint_least64_t uint_fast64_t;

/* >>intptr_t */

#ifdef __INTPTR_TYPE__
typedef __INTPTR_TYPE__ intptr_t;
#endif

/* >>uintptr_t */

#ifdef __UINTPTR_TYPE__
typedef __UINTPTR_TYPE__ uintptr_t;
#endif

/* >>intmax_t */

#ifdef __INTMAX_TYPE__
typedef __INTMAX_TYPE__ intmax_t;
#else
typedef int_least64_t intmax_t;
#endif

/* >>uintmax_t */

#ifdef __UINTMAX_TYPE__
typedef __UINTMAX_TYPE__ uintmax_t;
#else
typedef int_least64_t uintmax_t;
#endif

/* >>INTN_MIN */

#ifdef __INT8_C_SUFFIX__
#define INT8_MIN _INT_C(-0x80, __INT8_C_SUFFIX__)
#else
#define INT8_MIN -0x80
#endif

#ifdef __INT16_C_SUFFIX__
#define INT16_MIN _INT_C(-0x8000, __INT16_C_SUFFIX__)
#else
#define INT16_MIN -0x8000
#endif

#ifdef __INT32_C_SUFFIX__
#define INT32_MIN _INT_C(-0x80000000, __INT32_C_SUFFIX__)
#else
#define INT32_MIN -0x80000000
#endif

#ifdef __INT64_C_SUFFIX__
#define INT64_MIN _INT_C(-0x8000000000000000, __INT64_C_SUFFIX__)
#else
#define INT64_MIN -0x8000000000000000
#endif

/* >>INTN_MAX */

#ifdef __INT8_C_SUFFIX__
#define INT8_MAX _INT_C(0x7F, __INT8_C_SUFFIX__)
#else
#define INT8_MAX 0x7F
#endif

#ifdef __INT16_C_SUFFIX__
#define INT16_MAX _INT_C(0x7FFF, __INT16_C_SUFFIX__)
#else
#define INT16_MAX 0x7FFF
#endif

#ifdef __INT32_C_SUFFIX__
#define INT32_MAX _INT_C(0x7FFFFFFF, __INT32_C_SUFFIX__)
#else
#define INT32_MAX 0x7FFFFFFF
#endif

#ifdef __INT64_C_SUFFIX__
#define INT64_MAX _INT_C(0x7FFFFFFFFFFFFFFF, __INT64_C_SUFFIX__)
#else
#define INT64_MAX 0x7FFFFFFFFFFFFFFF
#endif

/* >>UINTN_MAX */

#ifdef __UINT8_C_SUFFIX__
#define UINT8_MAX _UINT_C(0xFF, __UINT8_C_SUFFIX__)
#else
#define UINT8_MAX _INT_C_JOIN(0xFF, U)
#endif

#ifdef __UINT16_C_SUFFIX__
#define UINT16_MAX _UINT_C(0xFFFF, __UINT8_C_SUFFIX__)
#else
#define UINT16_MAX _INT_C_JOIN(0xFFFF, U)
#endif

#ifdef __UINT32_C_SUFFIX__
#define UINT32_MAX _UINT_C(0xFFFFFFFF, __UINT8_C_SUFFIX__)
#else
#define UINT32_MAX _INT_C_JOIN(0xFFFFFFFF, U)
#endif

#ifdef __UINT64_C_SUFFIX__
#define UINT64_MAX _UINT_C(0xFFFFFFFFFFFFFFFF, __UINT8_C_SUFFIX__)
#else
#define UINT64_MAX _INT_C_JOIN(0xFFFFFFFFFFFFFFFF, U)
#endif

/* >>INT_LEASTN_MIN */

#ifdef __INT8_TYPE__
#define INT_LEAST8_MIN INT8_MIN
#elif defined __INT16_TYPE__
#define INT_LEAST8_MIN INT16_MIN
#elif defined __INT32_TYPE__
#define INT_LEAST8_MIN INT32_MIN
#elif defined __INT64_TYPE__
#define INT_LEAST8_MIN INT64_MIN
#else
#define INT_LEAST8_MIN -0x7F
#endif

#ifdef __INT16_TYPE__
#define INT_LEAST16_MIN INT16_MIN
#elif defined __INT32_TYPE__
#define INT_LEAST16_MIN INT32_MIN
#elif defined __INT64_TYPE__
#define INT_LEAST16_MIN INT64_MIN
#else
#define INT_LEAST16_MIN -0x7FFF
#endif

#ifdef __INT32_TYPE__
#define INT_LEAST32_MIN INT32_MIN
#elif defined __INT64_TYPE__
#define INT_LEAST32_MIN INT64_MIN
#else
#define INT_LEAST32_MIN -0x7FFFFFFF
#endif

#ifdef __INT64_TYPE__
#define INT_LEAST64_MIN INT64_MIN
#else
#define INT_LEAST64_MIN -0x7FFFFFFFFFFFFFFF
#endif

/* >>INT_LEASTN_MAX */

#ifdef __INT8_TYPE__
#define INT_LEAST8_MAX INT8_MAX
#elif defined __INT16_TYPE__
#define INT_LEAST8_MAX INT16_MAX
#elif defined __INT32_TYPE__
#define INT_LEAST8_MAX INT32_MAX
#elif defined __INT64_TYPE__
#define INT_LEAST8_MAX INT64_MAX
#else
#define INT_LEAST8_MAX INT8_MAX
#endif

#ifdef __INT16_TYPE__
#define INT_LEAST16_MAX INT16_MAX
#elif defined __INT32_TYPE__
#define INT_LEAST16_MAX INT32_MAX
#elif defined __INT64_TYPE__
#define INT_LEAST16_MAX INT64_MAX
#else
#define INT_LEAST16_MAX INT16_MAX
#endif

#ifdef __INT32_TYPE__
#define INT_LEAST32_MAX INT32_MAX
#elif defined __INT64_TYPE__
#define INT_LEAST32_MAX INT64_MAX
#else
#define INT_LEAST32_MAX INT32_MAX
#endif

#define INT_LEAST64_MAX INT64_MAX

/* >>UINT_LEASTN_MAX */

#ifdef __UINT8_TYPE__
#define UINT_LEAST8_MAX UINT8_MAX
#elif defined __UINT16_TYPE__
#define UINT_LEAST8_MAX UINT16_MAX
#elif defined __UINT32_TYPE__
#define UINT_LEAST8_MAX UINT32_MAX
#elif defined __UINT64_TYPE__
#define UINT_LEAST8_MAX UINT64_MAX
#else
#define UINT_LEAST8_MAX UINT8_MAX
#endif

#ifdef __UINT16_TYPE__
#define UINT_LEAST16_MAX UINT16_MAX
#elif defined __UINT32_TYPE__
#define UINT_LEAST16_MAX UINT32_MAX
#elif defined __UINT64_TYPE__
#define UINT_LEAST16_MAX UINT64_MAX
#else
#define UINT_LEAST16_MAX UINT16_MAX
#endif

#ifdef __UINT32_TYPE__
#define UINT_LEAST32_MAX UINT32_MAX
#elif defined __UINT64_TYPE__
#define UINT_LEAST32_MAX UINT64_MAX
#else
#define UINT_LEAST32_MAX UINT32_MAX
#endif

#define UINT_LEAST64_MAX UINT64_MAX

/* >>INT_FASTN_MIN */

#define INT_FAST8_MIN INT_LEAST8_MIN
#define INT_FAST16_MIN INT_LEAST16_MIN
#define INT_FAST32_MIN INT_LEAST32_MIN
#define INT_FAST64_MIN INT_LEAST64_MIN

/* >>INT_FASTN_MAX */

#define INT_FAST8_MAX INT_LEAST8_MAX
#define INT_FAST16_MAX INT_LEAST16_MAX
#define INT_FAST32_MAX INT_LEAST32_MAX
#define INT_FAST64_MAX INT_LEAST64_MAX

/* >>UINT_FASTN_MAX */

#define UINT_FAST8_MAX UINT_LEAST8_MAX
#define UINT_FAST16_MAX UINT_LEAST16_MAX
#define UINT_FAST32_MAX UINT_LEAST32_MAX
#define UINT_FAST64_MAX UINT_LEAST64_MAX

/* >>INTPTR_MIN */

#ifdef __INTPTR_MAX__
#define INTPTR_MIN -(__INTPTR_MAX__ - 0x01)
#else
#define INTPTR_MIN INT_LEAST16_MIN
#endif

/* >>INTPTR_MAX */

#ifdef __INTPTR_MAX__
#define INTPTR_MAX __INTPTR_MAX__
#else
#define INTPTR_MAX INT_LEAST16_MAX
#endif

/* >>UINTPTR_MAX */

#ifdef __UINTPTR_MAX__
#define UINTPTR_MAX __UINTPTR_MAX__
#else
#define UINTPTR_MAX UINT_LEAST16_MAX
#endif

/* >>INTMAX_MIN */

#ifdef __INTMAX_MAX__
#define INTMAX_MIN (-__INTMAX_MAX__ - 0x01)
#else
#define INTMAX_MIN INT_LEAST64_MIN
#endif

/* >>INTMAX_MAX */

#ifdef __INTMAX_MAX__
#define INTMAX_MAX __INTMAX_MAX__
#else
#define INTMAX_MAX INT_LEAST64_MAX
#endif

/* >>UINTMAX_MAX */

#ifdef __UINTMAX_MAX__
#define UINTMAX __UINTMAX_MAX__
#else
#define UINTMAX_MAX UINT_LEAST64_MAX
#endif
************************/

/* >>PTRDIFF_MIN */
/* >>PTRDIFF_MAX */
/* >>SIG_ATOMIC_MIN */
/* >>SIG_ATOMIC_MAX */
/* >>SIZE_MAX */
/* >>WCHAR_MIN */
/* >>WCHAR_MAX */
/* >>WINT_MIN */
/* >>WINT_MAX */

/* >>INTN_C */

#ifdef __INT8_C_SUFFIX__
#define INT8_C(value) _INT_C(value, __INT8_C_SUFFIX__)
#else
#define INT8_C(value) value
#endif

#ifdef __INT16_C_SUFFIX__
#define INT16_C(value) _INT_C(value, __INT16_C_SUFFIX__)
#else
#define INT16_C(value) value
#endif

#ifdef __INT32_C_SUFFIX__
#define INT32_C(value) _INT_C(value, __INT32_C_SUFFIX__)
#else
#define INT32_C(value) value
#endif

#ifdef __INT64_C_SUFFIX__
#define INT64_C(value) _INT_C(value, __INT64_C_SUFFIX__)
#else
#define INT64_C(value) value
#endif

/* >>UINTN_C */

#ifdef __INT8_C_SUFFIX__
#define UINT8_C(value) _UINT_C(value, __INT8_C_SUFFIX__)
#else
#define UINT8_C(value) _INT_C_JOIN(value, U)
#endif

#ifdef __INT16_C_SUFFIX__
#define UINT16_C(value) _UINT_C(value, __INT16_C_SUFFIX__)
#else
#define UINT16_C(value) _INT_C_JOIN(value, U)
#endif

#ifdef __INT32_C_SUFFIX__
#define UINT32_C(value) _UINT_C(value, __INT32_C_SUFFIX__)
#else
#define UINT32_C(value) _INT_C_JOIN(value, U)
#endif

#ifdef __INT64_C_SUFFIX__
#define UINT64_C(value) _UINT_C(value, __INT64_C_SUFFIX__)
#else
#define UINT64_C(value) _INT_C_JOIN(value, U)
#endif

/* >>INTMAX_C */

#ifdef __INTMAX_C_SUFFIX__
#define INTMAX_C(value) _INT_C(value, __INTMAX_C_SUFFIX__)
#else
#define INTMAX_C(value) value
#endif

/* >>UINTMAX_C */

#ifdef __UINTMAX_C_SUFFIX__
#define UINTMAX_C(value) _UINT_C(value, __UINTMAX_C_SUFFIX__)
#else
#define UINTMAX_C(value) _INT_C_JOIN(value, U)
#endif

#endif
