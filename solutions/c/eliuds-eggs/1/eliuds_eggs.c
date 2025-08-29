#include "eliuds_eggs.h"

int egg_count(int DEC_COUNT){
    int count = 0;
    while(DEC_COUNT > 0){
        if((DEC_COUNT % 2) == 1)
            count++;
        DEC_COUNT /= 2;
    }
    return count;
}