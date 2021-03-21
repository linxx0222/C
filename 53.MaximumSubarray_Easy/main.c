#include <stdio.h>
#include <stdlib.h>

int maxSubArray(int* nums, int numsSize){
    int i, sum = 0;
    int max = INT_MIN;

    for(i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        if(sum > max)
            max = sum;
        if(sum < 0)
            sum = 0;
    }

    return max;
}
