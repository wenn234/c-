#include "darts.h"
#include <math.h>


int score(coordinate_t pos){
    float x = pos.x;
    float y = pos.y;
    float rad = sqrt(pow(x, 2) + pow(y, 2));
    if (rad <= 1)
        return 10;
    else if(1 < rad && rad <= 5)
        return 5;
    else if(5 < rad && rad <= 10)
        return 1;
    else
        return 0;
        
        
}
