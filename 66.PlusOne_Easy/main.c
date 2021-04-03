#include <stdio.h>
#include <stdlib.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i = digitsSize;
    while(i > 0)
    {
        if(digits[i - 1] != 9)
        {
            digits[i - 1] += 1;
            break;
        }
        else // digits[i - 1] == 9
        {
            digits[i - 1] = 0;
        }
        i--;
    }

    if(digits[0] == 0)
        *returnSize = digitsSize + 1;
    else
    {
        *returnSize = digitsSize;
        return digits;
    }

    int *array = (int *)malloc(sizeof(int)*(*returnSize));

    for(i=*returnSize - 1; i >= 1; i--)
        array[i] = digits[i - 1];

    array[0] = 1;

    return array;

}
