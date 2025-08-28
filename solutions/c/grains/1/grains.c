#include "grains.h"
uint64_t square(uint8_t index){
    long long num = 1;
    if(index == 1)
        return index;
    else if(index < 1 || index > 64)
        return 0;
    for(int n = 2; n <= index; n++)
        num = num * 2;
    return num;
}
uint64_t total(void){
    long long sum = 0;
    for(int i = 1; i <= 64; i++){
        sum += square(i);
    }
    return sum;
}