#include <stdio.h>
#include <inttypes.h>

int64_t factorial(int8_t n);

int64_t factorial(int8_t n){
    if(n > 20){
       return -1;

    }
    int64_t factorial = 1;
    for(int8_t i = n;  i > 0; i--){
         factorial = factorial * i;

    }
    return factorial;

}

// int main(void){
//     int64_t factor =  factorial(19);
//     printf("%lld", factor);

//     return 0;
// }