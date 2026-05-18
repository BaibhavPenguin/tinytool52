#include "ttl52int.h"

void main(){
    uint24t __idata mynum1 = UINT24(12234);
    uint24t __idata mynum2 = UINT24(12234);
    uint24t __idata mynum3 = UINT24(12234);

    //SUBUINT24(&mynum1,&mynum2,&mynum3);
    SUBUINT24_IDATA(&mynum1,&mynum2,&mynum3);
   // SUBUINT24_IDATA(&mynum1,&mynum2,&mynum3);
}

