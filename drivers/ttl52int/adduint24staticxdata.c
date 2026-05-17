#include "ttl52int.h"

void ADDUINT24_STATIC_XDATA(uint24t __xdata* out , const uint24t __code* inp1 , const uint24t __code* inp2 ){
    uint16t temp;
    uint8t carry = 0;
    uint8t counter = 0;
    while(counter < UINT24T_SIZE){
        temp = inp1->bytes[counter] + inp2->bytes[counter] + carry;
        out->bytes[counter] = temp & 0xFF;
        carry = temp > 255;
        counter++;
    };
    return;
}