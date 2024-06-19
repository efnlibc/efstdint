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

#ifdef __INTPTR_TYPE__
#define EFINTPTR __INTPTR_TYPE__
#endif

#ifdef __UINTPTR_TYPE__
#define EFUINTPTR __UINTPTR_TYPE__
#endif

#ifdef __INTMAX_TYPE__
#define EFINTMAX __INTMAX_TYPE__
#endif

#ifdef __UINTMAX_TYPE__
#define EFUINTMAX __UINTMAX_TYPE__
#endif

#ifdef __INT64_C_SUFFIX__
#define EFINT64_C_SUFFIX __INT64_C_SUFFIX__
#endif

#ifdef __INT56_C_SUFFIX__
#define EFINT56_C_SUFFIX __INT56_C_SUFFIX__
#endif

#ifdef __INT48_C_SUFFIX__
#define EFINT48_C_SUFFIX __INT48_C_SUFFIX__
#endif

#ifdef __INT40_C_SUFFIX__
#define EFINT40_C_SUFFIX __INT40_C_SUFFIX__
#endif

#ifdef __INT32_C_SUFFIX__
#define EFINT32_C_SUFFIX __INT32_C_SUFFIX__
#endif

#ifdef __INT24_C_SUFFIX__
#define EFINT24_C_SUFFIX __INT24_C_SUFFIX__
#endif

#ifdef __INT16_C_SUFFIX__
#define EFINT16_C_SUFFIX __INT16_C_SUFFIX__
#endif

#ifdef __INT8_C_SUFFIX__
#define EFINT8_C_SUFFIX __INT8_C_SUFFIX__
#endif

/* >>generic */

#define EFINT_C_JOIN(a, b) a ## b
#define EFINT_C(value, suffix) EFINT_C_JOIN(value, suffix)
#define EFUINT_C(value, suffix) EFINT_C_JOIN(EFINT_C_JOIN(value, U), suffix)

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

#ifdef EFINT_LEAST64
typedef EFINT_LEAST64 efint_least64_t;
#else
#error "required"
#endif

#ifdef EFINT_LEAST56
typedef EFINT_LEAST56 efint_least56_t;
#endif

#ifdef EFINT_LEAST48
typedef EFINT_LEAST48 efint_least48_t;
#endif

#ifdef EFINT_LEAST40
typedef EFINT_LEAST40 efint_least40_t;
#endif

#ifdef EFINT_LEAST32
typedef EFINT_LEAST32 efint_least32_t;
#else
#error "required"
#endif

#ifdef EFINT_LEAST24
typedef EFINT_LEAST24 efint_least24_t;
#endif

#ifdef EFINT_LEAST16
typedef EFINT_LEAST16 efint_least16_t;
#else
#error "required"
#endif

#ifdef EFINT_LEAST8
typedef EFINT_LEAST8 efint_least8_t;
#else
#error "required"
#endif

/* >>uint_least */

#ifdef EFUINT_LEAST64
typedef EFUINT_LEAST64 efuint_least64_t;
#else
#error "required"
#endif

#ifdef EFUINT_LEAST56
typedef EFUINT_LEAST56 efuint_least56_t;
#endif

#ifdef EFUINT_LEAST48
typedef EFUINT_LEAST48 efuint_least48_t;
#endif

#ifdef EFUINT_LEAST40
typedef EFUINT_LEAST40 efuint_least40_t;
#endif

#ifdef EFUINT_LEAST32
typedef EFUINT_LEAST32 efuint_least32_t;
#else
#error "required"
#endif

#ifdef EFUINT_LEAST24
typedef EFUINT_LEAST24 efuint_least24_t;
#endif

#ifdef EFUINT_LEAST16
typedef EFUINT_LEAST16 efuint_least16_t;
#else
#error "required"
#endif

#ifdef EFUINT_LEAST8
typedef EFUINT_LEAST8 efuint_least8_t;
#else
#error "required"
#endif

/* >>int_fast */

#ifdef EFINT_FAST64
typedef EFINT_FAST64 efint_fast64_t;
#else
#error "required"
#endif

#ifdef EFINT_FAST56
typedef EFINT_FAST56 efint_fast56_t;
#endif

#ifdef EFINT_FAST48
typedef EFINT_FAST48 efint_fast48_t;
#endif

#ifdef EFINT_FAST40
typedef EFINT_FAST40 efint_fast40_t;
#endif

#ifdef EFINT_FAST32
typedef EFINT_FAST32 efint_fast32_t;
#else
#error "required"
#endif

#ifdef EFINT_FAST24
typedef EFINT_FAST24 efint_fast24_t;
#endif

#ifdef EFINT_FAST16
typedef EFINT_FAST16 efint_fast16_t;
#else
#error "required"
#endif

#ifdef EFINT_FAST8
typedef EFINT_FAST8 efint_fast8_t;
#else
#error "required"
#endif

/* >>uint_fast */

#ifdef EFUINT_FAST64
typedef EFUINT_FAST64 efuint_fast64_t;
#else
#error "required"
#endif

#ifdef EFUINT_FAST56
typedef EFUINT_FAST56 efuint_fast56_t;
#endif

#ifdef EFUINT_FAST48
typedef EFUINT_FAST48 efuint_fast48_t;
#endif

#ifdef EFUINT_FAST40
typedef EFUINT_FAST40 efuint_fast40_t;
#endif

#fdef EFUINT_FAST32
typedef EFUINT_FAST32 efuint_fast32_t;
#else
#error "required"
#endif

#ifdef EFUINT_FAST24
typedef EFUINT_FAST24 efuint_fast24_t;
#endif

#ifdef EFUINT_FAST16
typedef EFUINT_FAST16 efuint_fast16_t;
#else
#error "required"
#endif

#ifdef EFUINT_FAST8
typedef EFUINT_FAST8 efuint_fast8_t;
#else
#error "required"
#endif

/* >>intptr */

#ifdef EFINTPTR
typedef EFINTPTR efintptr_t;
#endif

/* >>uintptr */

#ifdef EFUINTPTR
typedef EFUINTPTR efuintptr_t;
#endif

/* >>intmax */

#ifdef EFINTMAX
typedef EFINTMAX efintmax_t;
#else
#error "required"
#endif

/* >>uintmax */

#ifdef EFUINTMAX
typedef EFUINTMAX uintmax_t;
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

#ifdef EFINT_LEAST8
#ifdef EFINT8_C_SUFFIX
#define EFINT8_C(value) EFINT_C(value, EFINT8_C_SUFFIX)
#else
#define EFINT8_C(value) value
#endif
#endif

/* >>UINT_C */

#ifdef EFUINT_LEAST8
#ifdef EFINT8_C_SUFFIX
#define EFUINT8_C(value) EFUINT_C(value, EFINT8_C_SUFFIX)
#else
#define EFUINT8_C(value) value
#endif
#endif

/* >>INTMAX_C */

/* >>UINTMAX_C */

#endif

