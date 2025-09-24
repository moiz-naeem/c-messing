#include <stdio.h>
#include <math.h>
#include <inttypes.h>

uint32_t pressure(uint8_t xlsb, uint8_t lsb, uint8_t msb);

uint32_t pressure(uint8_t xlsb, uint8_t lsb, uint8_t msb){
    uint32_t pressure = ((uint32_t)msb << 12) | ((uint32_t)lsb << 4) | ((xlsb >> 4) & 0x0F);
    return pressure;

}
// int main(void){

//     return 0;
// }