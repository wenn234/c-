#include "high_scores.h"
#include <stdlib.h>
#include <string.h>

/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len){
    return scores[scores_len - 1];
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len){
    int32_t max = 0;
    for(size_t i = 0; i < scores_len; i++){
        if(max < scores[i])
            max = scores[i];
    }
    return max;
}

/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output) {
    // 创建副本
    int32_t *scores_cpy = (int32_t*)malloc(scores_len * sizeof(int32_t));
    memcpy(scores_cpy, scores, scores_len * sizeof(int32_t));
    
    // 初始化输出数组
    int32_t max_buff[3] = {0};
    size_t output_size = (scores_len < 3) ? scores_len : 3;
    
    for(size_t i = 0; i < output_size; i++) {
        int32_t max = scores_cpy[i];
        size_t pos = i;
        
        // 找到当前最大值及其位置
        for(size_t j = i + 1; j < scores_len; j++) {
            if(max < scores_cpy[j]) {
                max = scores_cpy[j];
                pos = j;
            }
        }
        // 交换元素
        int32_t temp = scores_cpy[i];
        scores_cpy[i] = scores_cpy[pos];
        scores_cpy[pos] = temp;
        
        // 保存到输出
        max_buff[i] = max;
    }
    // 复制到输出数组
    for(size_t i = 0; i < output_size; i++) {
        output[i] = max_buff[i];
    }
    // 释放内存
    free(scores_cpy);
    return output_size;
}