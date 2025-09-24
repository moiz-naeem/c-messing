#include <stdio.h>
#include <inttypes.h>
#include <math.h>>



int main(void){
    float humidity(uint16_t reg){
        double humidity_percent = ((double)reg / pow(2.0, 16.0)) * 100. 0 ; 
        return float(humidity_percent);
    }
    printf("Initial C setup");
    uint16_t arg = 0x8000;
    float hum = humidity(arg);
    printf("Humidity: %.2f %%\n", hum);
    return 0;
}

