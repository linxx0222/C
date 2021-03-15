#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    //Hash Table
    *returnSize = 2;
    int min = 2147483647;
    int i = 0;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] < min)
            min = nums[i];
    }
    int max = target - min;
    int len = max - min + 1;
    int *table = (int*)malloc(len*sizeof(int));
    int *indice = (int*)malloc(2*sizeof(int));
    for (i = 0; i < len; i++) {
        table[i] = -1;
    }
    for (i = 0; i < numsSize; i++) {
        if (nums[i] - min < len) {
            if (table[target - nums[i] - min] != -1) {
                indice[0] = table[target - nums[i] - min];
                indice[1] = i;
                return indice;
            }
            table[nums[i] - min] = i;
        }
    }
    free(table);
    return indice;

}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    //Brute Force
    int i, j;
    *returnSize = 2;

    int *ret = (int*)malloc(2 * sizeof(int));

    for (i = 0; i < numsSize; i++)
    {
        for(j = i + 1; j < numsSize; j++)
        {
            if( target == (nums[i] + nums[j]) )
            {
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
    }

    return ret;

}
