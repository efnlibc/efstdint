#ifndef EFSTDINT_H
#define EFSTDINT_H

/* >>clang */

#ifdef __INT64_TYPE__
#define EFINT64 __INT64_TYPE__
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
#define EFINT56 __INT56_TYPE__
#define EFINT_LEAST32 efint56_t
#define EFINT_LEAST16 efint56_t
#define EFINT_LEAST8 efint56_t
#define EFINT_FAST32 efint56_t
#define EFINT_FAST16 efint56_t
#define EFINT_FAST8 efint56_t
#endif

#ifdef __INT48_TYPE__
#define EFINT48 __INT48_TYPE__
#define EFINT_LEAST32 efint48_t
#define EFINT_LEAST16 efint48_t
#define EFINT_LEAST8 efint48_t
#define EFINT_FAST32 efint48_t
#define EFINT_FAST16 efint48_t
#define EFINT_FAST8 efint48_t
#endif

#ifdef __INT40_TYPE__
#define EFINT40 __INT40_TYPE__
#define EFINT_LEAST32 efint40_t
#define EFINT_LEAST16 efint40_t
#define EFINT_LEAST8 efint40_t
#define EFINT_FAST32 efint40_t
#define EFINT_FAST16 efint40_t
#define EFINT_FAST8 efint40_t
#endif

#ifdef __INT32_TYPE__
#define EFINT32 __INT32_TYPE__
#define EFINT_LEAST32 efint32_t
#define EFINT_LEAST16 efint32_t
#define EFINT_LEAST8 efint32_t
#define EFINT_FAST32 efint32_t
#define EFINT_FAST16 efint32_t
#define EFINT_FAST8 efint32_t
#endif

#ifdef __INT24_TYPE__
#define EFINT24 __INT24_TYPE__
#define EFINT_LEAST16 efint24_t
#define EFINT_LEAST8 efint24_t
#define EFINT_FAST16 efint24_t
#define EFINT_FAST8 efint24_t
#endif

#ifdef __INT16_TYPE__
#define EFINT16 __INT16_TYPE__
#define EFINT_LEAST16 efint16_t
#define EFINT_LEAST8 efint16_t
#define EFINT_FAST16 efint16_t
#define EFINT_FAST8 efint16_t
#endif

#ifdef __INT8_TYPE__
#define EFINT8 __INT8_TYPE__
#define EFINT_LEAST8 efint8_t
#define EFINT_FAST8 efint8_t
#endif


#ifdef __UINT64_TYPE__
#define EFUINT64 __UINT64_TYPE__
#define EFUINT_LEAST64 efuint64_t
#define EFUINT_LEAST32 efuint64_t
#define EFUINT_LEAST16 efuint64_t
#define EFUINT_LEAST8 efuint64_t
#endif

#ifdef __UINT56_TYPE__
#define EFUINT56 __UINT56_TYPE__
#define EFUINT_LEAST32 efuint56_t
#define EFUINT_LEAST16 efuint56_t
#define EFUINT_LEAST8 efuint56_t
#endif

#ifdef __UINT48_TYPE__
#define EFUINT48 __UINT48_TYPE__
#define EFUINT_LEAST32 efuint48_t
#define EFUINT_LEAST16 efuint48_t
#define EFUINT_LEAST8 efuint48_t
#endif

#ifdef __UINT40_TYPE__
#define EFUINT40 __UINT40_TYPE__
#define EFUINT_LEAST32 efuint40_t
#define EFUINT_LEAST16 efuint40_t
#define EFUINT_LEAST8 efuint40_t
#endif

#ifdef __UINT32_TYPE__
#define EFUINT32 __UINT32_TYPE__
#define EFUINT_LEAST32 efuint32_t
#define EFUINT_LEAST16 efuint32_t
#define EFUINT_LEAST8 efuint32_t
#endif

#ifdef __UINT24_TYPE__
#define EFUINT24 __UINT24_TYPE__
#define EFUINT_LEAST16 efuint24_t
#define EFUINT_LEAST8 efuint24_t
#endif

#ifdef __UINT16_TYPE__
#define EFUINT16 __UINT16_TYPE__
#define EFUINT_LEAST16 efuint16_t
#define EFUINT_LEAST8 efuint16_t
#endif

#ifdef __UINT8_TYPE__
#define EFUINT8 __UINT8_TYPE__
#define EFUINT_LEAST8 efuint8_t
#endif

/* >>int */

#ifdef EFINT64
typedef EFINT64 efint64_t;
#endif

#ifdef EFINT56
typedef EFINT56 efint56_t;
#endif

#ifdef EFINT48
typedef EFINT48 efint48_t;
#endif

#ifdef EFINT40
typedef EFINT40 efint40_t;
#endif

#ifdef EFINT32
typedef EFINT32 efint32_t;
#endif

#ifdef EFINT24
typedef EFINT24 efint24_t;
#endif

#ifdef EFINT16
typedef EFINT16 efint16_t;
#endif

#ifdef EFINT8
typedef EFINT8 efint8_t;
#endif

/* >>uint */

#ifdef EFUINT64
typedef EFUINT64 efuint64_t;
#endif

#ifdef EFUINT56
typedef EFUINT56 efuint56_t;
#endif

#ifdef EFUINT48
typedef EFUINT48 efuint48_t;
#endif

#ifdef EFUINT40
typedef EFUINT40 efuint40_t;
#endif

#ifdef EFUINT32
typedef EFUINT32 efuint32_t;
#endif

#ifdef EFUINT24
typedef EFUINT24 efuint24_t;
#endif

#ifdef EFUINT16
typedef EFUINT16 efuint16_t;
#endif

#ifdef EFUINT8
typedef EFUINT8 efuint8_t;
#endif

/* >>int_least */

#ifdef EFINT64_LEAST
typedef EFINT64_LEAST efint_least64_t;
#else
#error "required"
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
#else
#error "required"
#endif

#ifdef EFINT24_LEAST
typedef EFINT24_LEAST efint_least24_t;
#endif

#ifdef EFINT16_LEAST
typedef EFINT16_LEAST efint_least16_t;
#else
#error "required"
#endif

#ifdef EFINT8_LEAST
typedef EFINT8_LEAST efint_least8_t;
#else
#error "required"
#endif

/* >>uint_least */

#ifdef EFUINT64_LEAST
typedef EFUINT64_LEAST efuint_least64_t;
#else
#error "required"
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
#else
#error "required"
#endif

#ifdef EFUINT24_LEAST
typedef EFUINT24_LEAST efuint_least24_t;
#endif

#ifdef EFUINT16_LEAST
typedef EFUINT16_LEAST efuint_least16_t;
#else
#error "required"
#endif

#ifdef EFUINT8_LEAST
typedef EFUINT8_LEAST efuint_least8_t;
#else
#error "required"
#endif

/* >>int_fast */

#ifdef EFINT64_FAST
typedef EFINT64_FAST efint_fast64_t;
#else
#error "required"
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
#else
#error "required"
#endif

#ifdef EFINT24_FAST
typedef EFINT24_FAST efint_fast24_t;
#endif

#ifdef EFINT16_FAST
typedef EFINT16_FAST efint_fast16_t;
#else
#error "required"
#endif

#ifdef EFINT8_FAST
typedef EFINT8_FAST efint_fast8_t;
#else
#error "required"
#endif

/* >>uint_fast */

#ifdef EFUINT64_FAST
typedef EFUINT64_FAST efuint_fast64_t;
#else
#error "required"
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

#fdef EFUINT32_FAST
typedef EFUINT32_FAST efuint_fast32_t;
#else
#error "required"
#endif

#ifdef EFUINT24_FAST
typedef EFUINT24_FAST efuint_fast24_t;
#endif

#ifdef EFUINT16_FAST
typedef EFUINT16_FAST efuint_fast16_t;
#else
#error "required"
#endif

#ifdef EFUINT8_FAST
typedef EFUINT8_FAST efuint_fast8_t;
#else
#error "required"
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
#else
#error "required"
#endif

/* >>uintmax */

#ifdef __UINTMAX_TYPE__
#define __UINTMAX_TYPE__ uintmax_t;
#else
#error "required"
#endif

/* >>INT_MIN */

#ifdef EFINT8
#define EFINT8_MIN -0x80
#endif

#ifdef EFINT16
#define EFINT16_MIN -0x8000
#endif

#ifdef EFINT24
#define EFINT24_MIN -0x800000
#endif

#ifdef EFINT32
#define EFINT32_MIN -0x80000000
#endif

#ifdef EFINT40
#define EFINT40_MIN -0x8000000000
#endif

#ifdef EFINT48
#define EFINT48_MIN -0x800000000000
#endif

#ifdef EFINT56
#define EFINT56_MIN -0x80000000000000
#endif

#ifdef EFINT64
#define EFINT64_MIN -0x8000000000000000
#endif

/* >>INT_MAX */

/* todo: move into above or conditionalize */
#define EFINT8_MAX 0x7F
#define EFINT16_MAX 0x7FFF
#define EFINT24_MAX 0x7FFFFF
#define EFINT32_MAX 0x7FFFFFFF
#define EFINT40_MAX 0x7FFFFFFFFF
#define EFINT48_MAX 0x7FFFFFFFFFFF
#define EFINT56_MAX 0x7FFFFFFFFFFFFF
#define EFINT64_MAX 0x7FFFFFFFFFFFFFFF

/* >>UINT_MAX */

#ifdef EFUINT8
#define EFUINT8_MAX 0xFF
#endif

#ifdef EFUINT16
#define EFUINT16_MAX 0xFFFF
#endif

#ifdef EFUINT24
#define EFUINT24_MAX 0xFFFFFF
#endif

#ifdef EFUINT32
#define EFUINT32_MAX 0xFFFFFFFF
#endif

#ifdef EFUINT40
#define EFUINT40_MAX 0xFFFFFFFFFF
#endif

#ifdef EFUINT48
#define EFUINT48_MAX 0xFFFFFFFFFFFF
#endif

#ifdef EFUINT56
#define EFUINT56_MAX 0xFFFFFFFFFFFFFF
#endif

#ifdef EFUINT64
#define EFUINT64_MAX 0xFFFFFFFFFFFFFFFF
#endif

/* >>INT_LEAST_MIN */

#define EFINT_LEAST8_MIN 0x00
#define EFINT_LEAST16_MIN 0x00
#define EFINT_LEAST32_MIN 0x00
#define EFINT_LEAST64_MIN 0x00

/* >>INT_LEAST_MAX */

#define EFINT_LEAST8_MAX 0x00
#define EFINT_LEAST16_MAX 0x00
#define EFINT_LEAST32_MAX 0x00
#define EFINT_LEAST64_MAX 0x00

/* >>UINT_LEAST_MAX */

#define EFUINT_LEAST8_MAX 0x00
#define EFUINT_LEAST16_MAX 0x00
#define EFUINT_LEAST32_MAX 0x00
#define EFUINT_LEAST64_MAX 0x00

/* >>INT_FAST_MIN */

/* >>INT_FAST_MAX */

/* >>UINT_FAST_MAX */

/* >>INTPTR_MIN */

/* >>INTPTR_MAX */

/* >>UINTPTR_MAX */

/* >>INTMAX_MIN */

/* >>INTMAX_MAX */

/* >>UINTMAX_MAX */

/* todo: SIZE_MAX? efnlibc doesn't define it, but eflibc does, if SIZE_MAX isn't defined elsewhere, define here */

/* >>INT_C */

#ifdef EFINT8
#ifdef EFINT8_C_SUFFIX
#define EFINT8_C(value) value ## EFINT8_C_SUFFIX
#else
#define EFINT8_C(value) value
#endif
#endif

/* >>UINT_C */

/* >>INTMAX_C */

/* >>UINTMAX_C */

#endif

