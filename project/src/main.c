#include <stdio.h>
#include <inttypes.h>
#include <math.h>



float temperature(uint16_t reg);
float temperature(uint16_t reg){
    uint16_t temp_bits = (reg >> 2) & 0x3FFF;
    double temperature = (double)temp_bits * 0.03125;
    return (float)temperature;
    }
/*
int main(void){
    
    printf("Initial C setup\n");
    uint16_t arg = 32268 ;
    float temp = temperature(arg);
    printf("\nHumidity: %.2f \n", temp);
    return 0;
}
    */
    
    

