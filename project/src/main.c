#include <stdio.h>
#include <inttypes.h>
#include <math.h>



float temperature(uint16_t reg);
float temperature(uint16_t reg){
        uint16_t temp_bits = (reg >>2) & 0xffc;
        printf("temp_Bit %d", temp_bits, "\n");
        double temperature =  (double)(temp_bits * 0.03125);
        return (float)temperature;
    }
/*
int main(void){
    
    printf("Initial C setup\n");
    uint16_t arg = 0b0011001000000000 ;
    float temp = temperature(arg);
    printf("\nHumidity: %.2f \n", temp);
    return 0;
}
    */
    

