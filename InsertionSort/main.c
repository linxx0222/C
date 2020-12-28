#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int arr[], int n)
{
    int i, j;
    int poker;

    for (i = 1; i < n ; i++)
    {
        poker = arr[i];
        j = i - 1;
        while(poker <= arr [j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = poker;
    }
}

int main()
{
    printf("Insertion Sort\n");
    int List[] = {-3, 6, 5, -1, 0, 9, 3};
    int i, j, temp;
    int n = sizeof(List)/sizeof(int);

    InsertionSort(List, n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", List[i]);
    }
    return 0;
}
