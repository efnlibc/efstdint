#include <stdio.h>
#include "../efstdint.h"

#define _CAT3(a, b, c) a ## b ## c
#define _XCAT3(a, b, c) _CAT3(a, b, c)

#define _INT_LOG(width, value) \
    (void)sprintf(\
        fmt, \
        "int%d = %%%s\n", \
        width, \
        _XCAT3(__INT, width, _FMTd__)); \
    (void)printf(fmt, value)

#define _UINT_LOG(width, value) \
    (void)sprintf(\
        fmt, \
        "uint%d = %%%s\n", \
        width, \
        _XCAT3(__UINT, width, _FMTu__)); \
    (void)printf(fmt, value)

int main(int argc, char **argv) {
    char fmt[0x0100];
    int8_t int8;
    int16_t int16;
    int32_t int32;
    int64_t int64;
    uint8_t uint8;
    uint16_t uint16;
    uint32_t uint32;
    uint64_t uint64;
    /*
    int_least8_t int_least8;
    int_least16_t int_least16;
    int_least32_t int_least32;
    int_least64_t int_least64;
    uint_least8_t uint_least8;
    uint_least16_t uint_least16;
    uint_least32_t uint_least32;
    uint_least64_t uint_least64;
    int_fast8_t int_fast8;
    int_fast16_t int_fast16;
    int_fast32_t int_fast32;
    int_fast64_t int_fast64;
    uint_fast8_t uint_fast8;
    uint_fast16_t uint_fast16;
    uint_fast32_t uint_fast32;
    uint_fast64_t uint_fast64;
    */
    (void)argc;
    (void)argv;
    int8 = INT8_MIN;
    int16 = INT16_MIN;
    int32 = INT32_MIN;
    int64 = INT64_MIN;
    _INT_LOG(8, int8);
    _INT_LOG(16, int16);
    _INT_LOG(32, int32);
    _INT_LOG(64, int64);
    int8 = INT8_MAX;
    int16 = INT16_MAX;
    int32 = INT32_MAX;
    int64 = INT64_MAX;
    _INT_LOG(8, int8);
    _INT_LOG(16, int16);
    _INT_LOG(32, int32);
    _INT_LOG(64, int64);
    uint8 = UINT8_MAX;
    uint16 = UINT16_MAX;
    uint32 = UINT32_MAX;
    uint64 = UINT64_MAX;
    _UINT_LOG(8, uint8);
    _UINT_LOG(16, uint16);
    _UINT_LOG(32, uint32);
    _UINT_LOG(64, uint64);
    return 0x00;
}

