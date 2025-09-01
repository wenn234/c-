#include "perfect_numbers.h"

kind classify_number(int num){
    if(num <= 0)
        return -1;
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(!(num % i))
            sum += i;
    }
    if(num == sum)
        return 1;
    else if(num < sum)
        return 2;
    else
        return 3;
}