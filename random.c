#include <stdlib.h>

char randchar(void){
    
    //upperbound - lowerbound +1 +lowerbound
    return rand() % ('Z'-'A'+1)+'A';
}