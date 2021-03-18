#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int* A, int len)
{
    int i, j, temp;

    for (i = len - 1; i > 0 ; i--)
    {
        for(j = 0; j <= (i - 1) ; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int total_len = nums1Size + nums2Size;
    int i;
    int list[total_len];
    float result;

    for(i = 0; i < nums1Size; i++)
    {
        list[i] = nums1[i];
    }
    for(i = 0; i < nums2Size; i++)
    {
        list[nums1Size + i] = nums2[i];
    }

    BubbleSort(list, total_len);

    if((total_len % 2) == 0)
    {
        //key point that need to "TYPE CASTING" (int to float)
        result = ((float)list[(total_len / 2)] + (float)list[(total_len / 2) - 1])/2;
    }
    else
    {
        result = list[total_len / 2];
    }

    return result;

}
