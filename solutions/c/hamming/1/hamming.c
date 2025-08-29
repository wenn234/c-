#include "hamming.h"
#include <stddef.h>

int compute(const char *lhs, const char *rhs) {
    if (!lhs || !rhs) return -1;
    
    int count = 0;
    while (*lhs || *rhs) {
        if (!*lhs || !*rhs) return -1; // 任一字符串先结束
        if (*lhs != *rhs) count++;
        lhs++;
        rhs++;
    }
    return count;
}