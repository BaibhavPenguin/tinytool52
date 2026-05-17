#include "ttl52int.h"

void ADDUINT24(uint24t* out , const uint24t* inp1 , const uint24t* inp2 ){
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