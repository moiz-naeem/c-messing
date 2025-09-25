#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <time.h>

void shuffle(uint8_t *list, uint16_t list_size);

#include <stdlib.h>
#include <stdint.h>

void shuffle(uint8_t *list, uint16_t list_size) {
    if (list_size <= 1) return;

    uint8_t result[list_size] = {}; 
    uint16_t remaining = list_size;

    for (uint16_t i = 0; i < list_size; i++) {

        int j = rand() % remaining;

        result[i] = list[j];

        for (uint16_t k = j; k < remaining - 1; k++) {
            list[k] = list[k + 1];
        }

        remaining--;
    }

    for (uint16_t i = 0; i < list_size; i++) {
        list[i] = result[i];
    }
}


// int main(void)
// {
//     uint8_t list[35] = {8, 137, 178, 144, 230, 68, 102, 165, 33, 79, 22, 211, 102, 157, 217, 40, 202, 1, 192, 22, 172, 130, 202, 51, 193, 86, 34, 199, 239, 24, 61, 72, 251, 134, 26};
//     uint16_t list_size = sizeof(list) / sizeof(list[0]);
//     srand(time(NULL));
//     shuffle(list, list_size);
//     printf("After Shuffle: ");
//     for (int i = 0; i < list_size; i++)
//     {
//         printf("%u ", list[i]);
//     }
//     printf("\n");

//     return 0;
// }