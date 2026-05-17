#include "ttl52int.h"

void ADDUINT40(uint40t* out , const uint40t* inp1 , const uint40t* inp2 ){
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