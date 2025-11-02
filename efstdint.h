#ifndef _STDINT_H
#define _STDINT_H

#define _STDINT_CAT(a, b) a ## b
#define _STDINT_XCAT(a, b) _STDINT_CAT(a, b)
#define _STDINT_CAT3(a, b, c) a ## b ## c
#define _STDINT_XCAT3(a, b, c) _STDINT_CAT3(a, b, c)

#ifndef U
#define U 0x01
#else
#error U
#endif

#ifndef LL
#define LL 0x01
#else
#error LL
#endif

#ifndef ULL
#define ULL 0x01
#else
#error ULL
#endif

#ifndef L
#define L 0x01
#else
#error L
#endif

#ifndef UL
#define UL 0x01
#else
#error UL
#endif

#define _STDINT_INTN_C_SUFFIX(width) \
    (0x01 + _STDINT_XCAT3(__INT, width, _C_SUFFIX__) - 0x01) && \
    (_STDINT_XCAT3(__INT, width, _C_SUFFIX__) + 0x00)

#if defined __INT8_C_SUFFIX__ && _STDINT_INTN_C_SUFFIX(8)
#define _STDINT_INT8_C(value) _STDINT_XCAT(value, __INT8_C_SUFFIX__)
#else
#define _STDINT_INT8_C(value) value
#endif

#if defined __INT16_C_SUFFIX__ && _STDINT_INTN_C_SUFFIX(16)
#define _STDINT_INT16_C(value) _STDINT_XCAT(value, __INT16_C_SUFFIX__)
#else
#define _STDINT_INT16_C(value) value
#endif

#if defined __INT32_C_SUFFIX__ && _STDINT_INTN_C_SUFFIX(32)
#define _STDINT_INT32_C(value) _STDINT_XCAT(value, __INT32_C_SUFFIX__)
#else
#define _STDINT_INT32_C(value) value
#endif

#if defined __INT64_C_SUFFIX__ && _STDINT_INTN_C_SUFFIX(64)
#define _STDINT_INT64_C(value) _STDINT_XCAT(value, __INT64_C_SUFFIX__)
#else
#define _STDINT_INT64_C(value) value
#endif

#define _STDINT_INTN_C(width, value) \
    _STDINT_XCAT3(_STDINT_INT, width, _C)(value)

#define _STDINT_UINTN_C_SUFFIX(width) \
    (0x01 + _STDINT_XCAT3(__UINT, width, _C_SUFFIX__) - 0x01) && \
    (_STDINT_XCAT3(__UINT, width, _C_SUFFIX__) + 0x00)

#if defined __UINT8_C_SUFFIX__ && _STDINT_UINTN_C_SUFFIX(8)
#define _STDINT_UINT8_C(value) _STDINT_XCAT(value, __UINT8_C_SUFFIX__)
#else
#define _STDINT_UINT8_C(value) value
#endif

#if defined __UINT16_C_SUFFIX__ && _STDINT_UINTN_C_SUFFIX(16)
#define _STDINT_UINT16_C(value) _STDINT_XCAT(value, __UINT16_C_SUFFIX__)
#else
#define _STDINT_UINT16_C(value) value
#endif

#if defined __UINT32_C_SUFFIX__ && _STDINT_UINTN_C_SUFFIX(32)
#define _STDINT_UINT32_C(value) _STDINT_XCAT(value, __UINT32_C_SUFFIX__)
#else
#define _STDINT_UINT32_C(value) value
#endif

#if defined __UINT64_C_SUFFIX__ && _STDINT_UINTN_C_SUFFIX(64)
#define _STDINT_UINT64_C(value) _STDINT_XCAT(value, __UINT64_C_SUFFIX__)
#else
#define _STDINT_UINT64_C(value) value
#endif

#undef U
#undef LL
#undef ULL
#undef L
#undef UL

#define _STDINT_INTN_MAX(width) _STDINT_XCAT3(INT, width, _MAX)
#define _STDINT_INTN_MIN(width) _STDINT_XCAT3(INT, width, _MIN)

/* >>intN_t */

#ifdef __INT8_TYPE__
typedef __INT8_TYPE__ int8_t;
#else
#error __INT8_TYPE__
#endif

#ifdef __INT8_TYPE__
typedef __INT16_TYPE__ int16_t;
#else
#error __INT16_TYPE__
#endif

#ifdef __INT8_TYPE__
typedef __INT32_TYPE__ int32_t;
#else
#error __INT32_TYPE__
#endif

#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ int64_t;
#else
#error __INT64_TYPE__
#endif

/* >>uintN_t */

#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ uint8_t;
#else
#error __UINT8_TYPE__
#endif

#ifdef __UINT16_TYPE__
typedef __UINT16_TYPE__ uint16_t;
#else
#error __UINT16_TYPE__
#endif

#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ uint32_t;
#else
#error __UINT32_TYPE__
#endif

#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ uint64_t;
#else
#error __UINT64_TYPE__
#endif

/* >>int_leastN_t */

typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

/* >>uint_leastN_t */

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;

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
/* >>uintptr_t */
/* >>intmax_t */
/* >>uintmax_t */

/* >>INTN_MIN */

#define INT8_MIN _STDINT_INT8_C(-0x80)
#define INT16_MIN _STDINT_INT16_C(-0x8000)
#define INT32_MIN _STDINT_INT32_C(-0x80000000)
#define INT64_MIN _STDINT_INT64_C(-0x8000000000000000)

/* >>INTN_MAX */

#define INT8_MAX _STDINT_INT8_C(0x7F)
#define INT16_MAX _STDINT_INT16_C(0x7FFF)
#define INT32_MAX _STDINT_INT32_C(0x7FFFFFFF)
#define INT64_MAX _STDINT_INT64_C(0x7FFFFFFFFFFFFFFF)

/* >>UINTN_MAX */

#define UINT8_MAX _STDINT_UINT8_C(0xFF)
#define UINT16_MAX _STDINT_UINT16_C(0xFFFF)
#define UINT32_MAX _STDINT_UINT32_C(0xFFFFFFFF)
#define UINT64_MAX _STDINT_UINT64_C(0xFFFFFFFFFFFFFFFF)

/* >>INT_LEASTN_MIN */

#define INT_LEAST8_MIN INT8_MIN
#define INT_LEAST16_MIN INT16_MIN
#define INT_LEAST32_MIN INT32_MIN
#define INT_LEAST64_MIN INT64_MIN

/* >>INT_LEASTN_MAX */

#define INT_LEAST8_MAX INT8_MAX
#define INT_LEAST16_MAX INT16_MAX
#define INT_LEAST32_MAX INT32_MAX
#define INT_LEAST64_MAX INT64_MAX

/* >>UINT_LEASTN_MAX */

#define UINT_LEAST8_MAX UINT8_MAX
#define UINT_LEAST16_MAX UINT16_MAX
#define UINT_LEAST32_MAX UINT32_MAX
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
/* >>INTPTR_MAX */
/* >>UINTPTR_MAX */
/* >>INTMAX_MIN */
/* >>INTMAX_MAX */
/* >>UINTMAX_MAX */

/* >>PTRDIFF_MIN */

#ifdef __PTRDIFF_MAX__
#ifdef __PTRDIFF_WIDTH__
#if __PTRDIFF_MAX__ == _STDINT_INTN_MAX(__PTRDIFF_WIDTH__)
#define PTRDIFF_MIN _STDINT_INTN_MIN(__PTRDIFF_WIDTH__)
#else
#define PTRDIFF_MIN _STDINT_INTN_C(__PTRDIFF_WIDTH__, 0x00)
#endif
#else
#error __PTRDIFF_WIDTH__
#endif
#else
#error __PTRDIFF_MAX__
#endif

/* >>PTRDIFF_MAX */

#ifdef __PTRDIFF_MAX__
#define PTRDIFF_MAX __PTRDIFF_MAX__
#else
#error __PTRDIFF_MAX__
#endif

/* >>SIG_ATOMIC_MIN */

#ifdef __SIG_ATOMIC_WIDTH__
#define SIG_ATOMIC_MIN _STDINT_INTN_MIN(__SIG_ATOMIC_WIDTH__)
#else
#error __SIG_ATOMIC_WIDTH__
#endif

/* >>SIG_ATOMIC_MAX */

#ifdef __SIG_ATOMIC_WIDTH__
#define SIG_ATOMIC_MAX _STDINT_INTN_MAX(__SIG_ATOMIC_WIDTH__)
#else
#error __SIG_ATOMIC_WIDTH__
#endif

/* >>SIZE_MAX */

#ifdef __SIZE_MAX__
#define SIZE_MAX __SIZE_MAX__
#else
#error __SIZE_MAX__
#endif

/* >>WCHAR_MIN */


#ifdef __WCHAR_MAX__
#ifdef __WCHAR_WIDTH__
#if __WCHAR_MAX__ == _STDINT_INTN_MAX(__WCHAR_WIDTH__)
#define WCHAR_MIN _STDINT_INTN_MIN(__WCHAR_WIDTH__)
#else
#define WCHAR_MIN _STDINT_UINTN_C(__WCHAR_WIDTH__, 0x00)
#endif
#else
#error __WCHAR_WIDTH__
#endif
#else
#error __WCHAR_MAX__
#endif

/* >>WCHAR_MAX */

#ifdef __WCHAR_MAX__
#define WCHAR_MAX __WCHAR_MAX__
#else
#error __WCHAR_MAX__
#endif

/* >>WINT_MIN */
/* >>WINT_MAX */

/* >>INTN_C */

#define INT8_C(value) _STDINT_INT8_C(value)
#define INT16_C(value) _STDINT_INT16_C(value)
#define INT32_C(value) _STDINT_INT32_C(value)
#define INT64_C(value) _STDINT_INT64_C(value)

/* >>UINTN_C */

#define UINT8_C(value) _STDINT_UINT8_C(value)
#define UINT16_C(value) _STDINT_UINT16_C(value)
#define UINT32_C(value) _STDINT_UINT32_C(value)
#define UINT64_C(value) _STDINT_UINT64_C(value)

/* >>INTMAX_C */
/* >>UINTMAX_C */

#endif

