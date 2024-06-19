#ifndef EFSTDINT_H
#define EFSTDINT_H

/* >>int */

#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ efint64_t;
#define EFINT_LEAST64 efint64_t
#define EFINT_LEAST32 efint64_t
#define EFINT_LEAST16 efint64_t
#define EFINT_LEAST8 efint64_t
#define EFINT_FAST64 efint64_t
#define EFINT_FAST32 efint64_t
#define EFINT_FAST16 efint64_t
#define EFINT_FAST8 efint64_t
#endif

#ifdef __INT56_TYPE__
typedef __INT56_TYPE__ efint56_t;
#define EFINT_LEAST32 efint56_t
#define EFINT_LEAST16 efint56_t
#define EFINT_LEAST8 efint56_t
#define EFINT_FAST32 efint56_t
#define EFINT_FAST16 efint56_t
#define EFINT_FAST8 efint56_t
#endif

#ifdef __INT48_TYPE__
typedef __INT48_TYPE__ efint48_t;
#define EFINT_LEAST32 efint48_t
#define EFINT_LEAST16 efint48_t
#define EFINT_LEAST8 efint48_t
#define EFINT_FAST32 efint48_t
#define EFINT_FAST16 efint48_t
#define EFINT_FAST8 efint48_t
#endif

#ifdef __INT40_TYPE__
typedef __INT40_TYPE__ efint40_t;
#define EFINT_LEAST32 efint40_t
#define EFINT_LEAST16 efint40_t
#define EFINT_LEAST8 efint40_t
#define EFINT_FAST32 efint40_t
#define EFINT_FAST16 efint40_t
#define EFINT_FAST8 efint40_t
#endif


#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ efint32_t;
#define EFINT_LEAST32 efint32_t
#define EFINT_LEAST16 efint32_t
#define EFINT_LEAST8 efint32_t
#define EFINT_FAST32 efint32_t
#define EFINT_FAST16 efint32_t
#define EFINT_FAST8 efint32_t
#endif

#ifdef __INT24_TYPE__
typedef __INT24_TYPE__ efint24_t;
#define EFINT_LEAST16 efint24_t
#define EFINT_LEAST8 efint24_t
#define EFINT_FAST16 efint24_t
#define EFINT_FAST8 efint24_t
#endif

#ifdef __INT16_TYPE__
typedef __INT16_TYPE__ efint16_t;
#define EFINT_LEAST16 efint16_t
#define EFINT_LEAST8 efint16_t
#define EFINT_FAST16 efint16_t
#define EFINT_FAST8 efint16_t
#endif

#ifdef __INT8_TYPE__
typedef __INT8_TYPE__ efint8_t;
#define EFINT_LEAST8 efint8_t
#define EFINT_FAST8 efint8_t
#endif

/* >>uint */

#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ efuint64_t;
#define EFUINT_LEAST64 efuint64_t
#define EFUINT_LEAST32 efuint64_t
#define EFUINT_LEAST16 efuint64_t
#define EFUINT_LEAST8 efuint64_t
#endif

#ifdef __UINT56_TYPE__
typedef __UINT56_TYPE__ efuint56_t;
#define EFUINT_LEAST32 efuint56_t
#define EFUINT_LEAST16 efuint56_t
#define EFUINT_LEAST8 efuint56_t
#endif

#ifdef __UINT48_TYPE__
typedef __UINT48_TYPE__ efuint48_t;
#define EFUINT_LEAST32 efuint48_t
#define EFUINT_LEAST16 efuint48_t
#define EFUINT_LEAST8 efuint48_t
#endif

#ifdef __UINT40_TYPE__
typedef __UINT40_TYPE__ efuint40_t;
#define EFUINT_LEAST32 efuint40_t
#define EFUINT_LEAST16 efuint40_t
#define EFUINT_LEAST8 efuint40_t
#endif

#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ efuint32_t;
#define EFUINT_LEAST32 efuint32_t
#define EFUINT_LEAST16 efuint32_t
#define EFUINT_LEAST8 efuint32_t
#endif

#ifdef __UINT24_TYPE__
typedef __UINT24_TYPE__ efuint24_t;
#define EFUINT_LEAST16 efuint24_t
#define EFUINT_LEAST8 efuint24_t
#endif

#ifdef __UINT16_TYPE__
typedef __UINT16_TYPE__ efuint16_t;
#define EFUINT_LEAST16 efuint16_t
#define EFUINT_LEAST8 efuint16_t
#endif

#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ efuint8_t;
#define EFUINT_LEAST8 efuint8_t
#endif

/* >>int_least */

#ifdef EFINT64_LEAST
typedef EFINT64_LEAST efint_least64_t;
#endif

#ifdef EFINT56_LEAST
typedef EFINT56_LEAST efint_least56_t;
#endif

#ifdef EFINT48_LEAST
typedef EFINT48_LEAST efint_least48_t;
#endif

#ifdef EFINT40_LEAST
typedef EFINT40_LEAST efint_least40_t;
#endif

#ifdef EFINT32_LEAST
typedef EFINT32_LEAST efint_least32_t;
#endif

#ifdef EFINT24_LEAST
typedef EFINT24_LEAST efint_least24_t;
#endif

#ifdef EFINT16_LEAST
typedef EFINT16_LEAST efint_least16_t;
#endif

#ifdef EFINT8_LEAST
typedef EFINT8_LEAST efint_least8_t;
#endif

/* >>uint_least */

#ifdef EFUINT64_LEAST
typedef EFUINT64_LEAST efuint_least64_t;
#endif

#ifdef EFUINT56_LEAST
typedef EFUINT56_LEAST efuint_least56_t;
#endif

#ifdef EFUINT48_LEAST
typedef EFUINT48_LEAST efuint_least48_t;
#endif

#ifdef EFUINT40_LEAST
typedef EFUINT40_LEAST efuint_least40_t;
#endif

#ifdef EFUINT32_LEAST
typedef EFUINT32_LEAST efuint_least32_t;
#endif

#ifdef EFUINT24_LEAST
typedef EFUINT24_LEAST efuint_least24_t;
#endif

#ifdef EFUINT16_LEAST
typedef EFUINT16_LEAST efuint_least16_t;
#endif

#ifdef EFUINT8_LEAST
typedef EFUINT8_LEAST efuint_least8_t;
#endif

/* >>int_fast */

#ifdef EFINT64_FAST
typedef EFINT64_FAST efint_fast64_t;
#endif

#ifdef EFINT56_FAST
typedef EFINT56_FAST efint_fast56_t;
#endif

#ifdef EFINT48_FAST
typedef EFINT48_FAST efint_fast48_t;
#endif

#ifdef EFINT40_FAST
typedef EFINT40_FAST efint_fast40_t;
#endif

#ifdef EFINT32_FAST
typedef EFINT32_FAST efint_fast32_t;
#endif

#ifdef EFINT24_FAST
typedef EFINT24_FAST efint_fast24_t;
#endif

#ifdef EFINT16_FAST
typedef EFINT16_FAST efint_fast16_t;
#endif

#ifdef EFINT8_FAST
typedef EFINT8_FAST efint_fast8_t;
#endif

/* >>uint_fast */

#ifdef EFUINT64_FAST
typedef EFUINT64_FAST efuint_fast64_t;
#endif

#ifdef EFUINT56_FAST
typedef EFUINT56_FAST efuint_fast56_t;
#endif

#ifdef EFUINT48_FAST
typedef EFUINT48_FAST efuint_fast48_t;
#endif

#ifdef EFUINT40_FAST
typedef EFUINT40_FAST efuint_fast40_t;
#endif

#ifdef EFUINT32_FAST
typedef EFUINT32_FAST efuint_fast32_t;
#endif

#ifdef EFUINT24_FAST
typedef EFUINT24_FAST efuint_fast24_t;
#endif

#ifdef EFUINT16_FAST
typedef EFUINT16_FAST efuint_fast16_t;
#endif

#ifdef EFUINT8_FAST
typedef EFUINT8_FAST efuint_fast8_t;
#endif

/* >>intptr */

#ifdef __INTPTR_TYPE__
typedef __INTPTR_TYPE__ efintptr_t;
#endif

/* >>uintptr */

#ifdef __UINTPTR_TYPE__
typedef __UINTPTR_TYPE__ efuintptr_t;
#endif

/* >>intmax */

#ifdef __INTMAX_TYPE__
typedef __INTMAX_TYPE__ efintmax_t;
#endif

/* >>uintmax */

#ifdef __UINTMAX_TYPE__
#define __UINTMAX_TYPE__ uintmax_t;
#endif

/* >>INT_MIN */

#define EFINT8_MIN -0x80
#define EFINT16_MIN -0x8000
#define EFINT24_MIN -0x800000
#define EFINT32_MIN -0x80000000
#define EFINT40_MIN -0x8000000000
#define EFINT48_MIN -0x800000000000
#define EFINT56_MIN -0x80000000000000
#define EFINT64_MIN -0x8000000000000000

/* >>INT_MAX */

#define EFINT8_MAX 0x7F
#define EFINT16_MAX 0x7FFF
#define EFINT24_MAX 0x7FFFFF
#define EFINT32_MAX 0x7FFFFFFF
#define EFINT40_MAX 0x7FFFFFFFFF
#define EFINT48_MAX 0x7FFFFFFFFFFF
#define EFINT56_MAX 0x7FFFFFFFFFFFFF
#define EFINT64_MAX 0x7FFFFFFFFFFFFFFF

/* >>UINT_MAX */

#define EFUINT8_MAX 0xFF
#define EFUINT16_MAX 0xFFFF
#define EFUINT24_MAX 0xFFFFFF
#define EFUINT32_MAX 0xFFFFFFFF
#define EFUINT40_MAX 0xFFFFFFFFFF
#define EFUINT48_MAX 0xFFFFFFFFFFFF
#define EFUINT56_MAX 0xFFFFFFFFFFFFFF
#define EFUINT64_MAX 0xFFFFFFFFFFFFFFFF

/* >>INT_LEAST_MIN */

/* >>INT_LEAST_MAX */

/* >>UINT_LEAST_MAX */

/* >>INT_FAST_MIN */

/* >>INT_FAST_MAX */

/* >>UINT_FAST_MAX */

/* >>INTPTR_MIN */

/* >>INTPTR_MAX */

/* >>UINTPTR_MAX */

/* >>INTMAX_MIN */

/* >>INTMAX_MAX */

/* >>UINTMAX_MAX */

#endif

