#include <stdio.h>
#include <math.h>
#include <inttypes.h>


float light(uint16_t reg);

float light(uint16_t reg){
    uint16_t e_bits=  (reg >> 12 ) & 0xf;
    uint16_t r_bits = reg & 0x0fff;
    double lux = (double)(0.01 * pow(2.0, e_bits) * r_bits);
    return (float)lux;


}
 int main(void ){
     uint16_t reg = 0b0110110000110101;
     float result = light(reg);
     printf("\nAmbient: %.2f \n", result);


    return 0;
 }