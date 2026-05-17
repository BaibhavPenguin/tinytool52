// tinytool52 Copyright 2026 baibhav Bhattacharya
// Apache License version 2.0
// ttl52int.h is an implementation of stdint.h on 8051 and 8052 architectures


#ifndef ttl52int_h
#define ttl52int_h

#define INT24T_SIZE 3
#define INT40T_SIZE 5
#define INT48T_SIZE 6
#define INT56T_SIZE 7
#define INT64T_SIZE 8

#define UINT24T_SIZE 3
#define UINT40T_SIZE 5
#define UINT48T_SIZE 6
#define UINT56T_SIZE 7
#define UINT64T_SIZE 8

#define INT24T_MAX_VALUE 8388607
#define INT40T_MAX_VALUE 549755813887
#define INT48T_MAX_VALUE 140737488355327
#define INT56T_MAX_VALUE 36028797018963967
#define INT64T_MAX_VALUE 9223372036854775807

#define UINT24T_MAX_VALUE 16777215
#define UINT40T_MAX_VALUE 1099511627775
#define UINT48T_MAX_VALUE 281474976710655
#define UINT56T_MAX_VALUE 72057594037927935
#define UINT64T_MAX_VALUE 18446744073709551615




#define UINT24(x) { { \
    (x) & 0xFF, \
    ((x) >> 8) & 0xFF , \
    ((x) >> 16) & 0xFF \
} }


#define UINT40(x) { { \
    (x) & 0xFF, \
    ((x) >> 8) & 0xFF , \
    ((x) >> 16) & 0xFF, \
    ((x) >> 24) & 0xFF, \
    ((x) >> 32) & 0xFF, \
} }


#define UINT48(x) { { \
    (x) & 0xFF, \
    ((x) >> 8) & 0xFF , \
    ((x) >> 16) & 0xFF, \
    ((x) >> 24) & 0xFF, \
    ((x) >> 32) & 0xFF, \
    ((x) >> 40) & 0xFF \
} }


#define UINT56(x) { { \
    (x) & 0xFF, \
    ((x) >> 8) & 0xFF , \
    ((x) >> 16) & 0xFF, \
    ((x) >> 24) & 0xFF, \
    ((x) >> 32) & 0xFF, \
    ((x) >> 40) & 0xFF, \
    ((x) >> 48) & 0xFF \
} }


#define UINT64(x) { { \
    (x) & 0xFF, \
    ((x) >> 8) & 0xFF , \
    ((x) >> 16) & 0xFF, \
    ((x) >> 24) & 0xFF, \
    ((x) >> 32) & 0xFF, \
    ((x) >> 40) & 0xFF, \
    ((x) >> 48) & 0xFF, \
    ((x) >> 56) & 0xFF \
} }



#define INT24(x) { { \
    (x) & 0xFF, \
    ((x) >> 8) & 0xFF , \
    ((x) >> 16) & 0xFF \
} }


#define INT40(x) { { \
    (x) & 0xFF, \
    ((x) >> 8) & 0xFF , \
    ((x) >> 16) & 0xFF, \
    ((x) >> 24) & 0xFF, \
    ((x) >> 32) & 0xFF, \
} }


#define INT48(x) { { \
    (x) & 0xFF, \
    ((x) >> 8) & 0xFF , \
    ((x) >> 16) & 0xFF, \
    ((x) >> 24) & 0xFF, \
    ((x) >> 32) & 0xFF, \
    ((x) >> 40) & 0xFF \
} }


#define INT56(x) { { \
    (x) & 0xFF, \
    ((x) >> 8) & 0xFF , \
    ((x) >> 16) & 0xFF, \
    ((x) >> 24) & 0xFF, \
    ((x) >> 32) & 0xFF, \
    ((x) >> 40) & 0xFF, \
    ((x) >> 48) & 0xFF \
} }


#define INT64(x) { { \
    (x) & 0xFF, \
    ((x) >> 8) & 0xFF , \
    ((x) >> 16) & 0xFF, \
    ((x) >> 24) & 0xFF, \
    ((x) >> 32) & 0xFF, \
    ((x) >> 40) & 0xFF, \
    ((x) >> 48) & 0xFF, \
    ((x) >> 56) & 0xFF \
} }



// TYPE DEFINITIONS
typedef unsigned char uint8t;      // Unsigned Integer 8 Bits
typedef unsigned int uint16t;      // Unsigned Integer 16 Bits
typedef unsigned long uint32t;     // Unsigned Integer 32 Bits

typedef struct{
   uint8t bytes[3];
}uint24t;                          // 24 Bit Unsigned Integer

typedef struct{
    uint8t bytes[5];
}uint40t;                          // 40 bit Unsigned Integer

typedef struct{      
    uint8t bytes[6];
}uint48t;                          // 48 Bit Unsigned Integer

typedef struct{
   uint8t bytes[7];
}uint56t;                          // 56 Bit Unsigned Integer

typedef struct{
    uint8t bytes[8];
}uint64t;                          // 64 Bit Unsigned Integer


/*                                                                  SIGNED INTEGERS                                                                                      */

typedef char int8_t;                // Integer 8 Bits
typedef int int16_t;                // Integer 16 Bits
typedef long int32_t;               // Integer 32 Bits

typedef struct{
   uint8t bytes[3];
}int24t;                          // 24 Bit Integer

typedef struct{
    uint8t bytes[5];
}int40t;                          // 40 Bit Integer

typedef struct{      
    uint8t bytes[6];
}int48t;                          // 48 Bit Integer

typedef struct{
   uint8t bytes[7];
}int56t;                          // 56 Bit Integer

typedef struct{
    uint8t bytes[8];
}int64t;                          // 64 Bit Integer






void ADDUINT24(uint24t* out , const  uint24t* inp1 , const  uint24t* inp2);
void ADDUINT24_IDATA(uint24t __idata* out , const  uint24t __idata* inp1 , const  uint24t __idata* inp2);
void ADDUINT24_XDATA(uint24t __xdata* out , const  uint24t __xdata* inp1 , const  uint24t __xdata* inp2);
void ADDUINT24_STATIC_IDATA(uint24t __idata* out , const  uint24t __code* inp1 , const  uint24t __code* inp2);
void ADDUINT24_STATIC_XDATA(uint24t __xdata* out , const  uint24t __code* inp1 , const  uint24t __code* inp2);


void ADDUINT40(uint40t* out , const  uint40t* inp1 , const  uint40t* inp2);
void ADDUINT40_IDATA(uint40t __idata* out , const  uint40t __idata* inp1 , const  uint40t __idata* inp2);
void ADDUINT40_XDATA(uint40t __xdata* out , const  uint40t __xdata* inp1 , const  uint40t __xdata* inp2);
void ADDUINT40_STATIC_IDATA(uint40t __idata* out , const  uint40t __code* inp1 , const  uint40t __code* inp2);
void ADDUINT40_STATIC_XDATA(uint40t __xdata* out , const  uint40t __code* inp1 , const  uint40t __code* inp2);



#endif //ttl52int_h