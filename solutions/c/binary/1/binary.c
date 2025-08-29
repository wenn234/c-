#include "binary.h"
#include <math.h>

int convert(const char *input){
    int bit_count = 0;
    const char *temp = input;
    int sum = 0;
    for(; *temp; temp++){
        if (*temp != '0' && *temp != '1')
            return INVALID;
        bit_count++;
    }
    for(; *input; input++){
        if(*input == '1'){
            sum += pow(2, bit_count - 1);
        }
        bit_count--;
    }
    return sum;
    
}