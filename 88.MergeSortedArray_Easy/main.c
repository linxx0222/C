#include <stdio.h>
#include <stdlib.h>



void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    //Better Method
    int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }
        while (j >= 0)
            nums1[k--] = nums2[j--];

    return nums1;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    //Merge two array then using bubble sort
    int i;
    int j = 0;
    //Merge nums1 and nums2 into nums1
    for(i = m ; i < m + n; i++)
    {
        nums1[i] = nums2[j];
        j++;
    }

    //Bubble Sort
    int temp = 0;
    for( i = 0; i < m + n - 1 ; i++)
    {
        for(j = i + 1; j < m + n; j++)
        {
            if(nums1[i] > nums1[j])
            {
                temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }

    return nums1;
}
