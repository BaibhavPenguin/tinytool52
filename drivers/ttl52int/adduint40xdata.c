#include "ttl52int.h"

void ADDUINT40_XDATA(uint40t __xdata* out , const uint40t __xdata* inp1 , const uint40t __xdata* inp2 ){
    uint16t temp;
    uint8t carry = 0;
    uint8t counter = 0;
    while(counter < UINT40T_SIZE){
        temp = inp1->bytes[counter] + inp2->bytes[counter] + carry;
        out->bytes[counter] = temp & 0xFF;
        carry = temp > 255;
        counter++;
    };
    return;
}