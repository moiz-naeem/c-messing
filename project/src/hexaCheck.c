#include <stdio.h>
#include <inttypes.h>
#include <math.h>

uint8_t hexago(uint32_t hex);

uint8_t hexago(uint32_t luku) {
    double n = (sqrt(8.0 * luku + 1.0) + 1.0) / 4.0;

    if (floor(n) == n) {
        return 1;  
    } else {
        return 0; 
    }
}

// int main(void){
//     uint32_t test1 = 15; 
//     uint32_t test2 = 16; 

//     printf("%u is hexagonal? %u\n", test1, hexago(test1)); 
//     printf("%u is hexagonal? %u\n", test2, hexago(test2));

//     return 0;
// }