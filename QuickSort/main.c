#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void QuickSort(int List[], int left, int right)
{
    int pivot;
    int i, j;
    if (left < right)
    {
        pivot = List[left];
        i = left + 1;
        j = right;
        while(i < j)
        {
            while(List[i] < pivot)
                i++;
            while(List[j] > pivot)
                j--;
            if(i < j)
                swap(&List[i], &List[j]);
        }

        swap(&List[left], &List[j]);
        QuickSort(List, left, j - 1);
        QuickSort(List, j + 1, right);
    }
}

int main()
{
    printf("Quick Sort\n");
    int List[] = {-3, 6, 5, -1, 0, 9, 3};
    int i, j, temp;
    int n = sizeof(List)/sizeof(int);

    QuickSort(List, 0, n - 1);

    for(i = 0; i < n; i++)
    {
        printf("%d ", List[i]);
    }
    return 0;
}
