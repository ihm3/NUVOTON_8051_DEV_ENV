/**
 * led blink
 */

#include "n76.h"

int main(void){
    P14_QUASI_MODE;

    P14 = 0;

    while(1){
        P14 = !P14;
        Timer2_Delay(24000000,4,200,1000);
    }
}