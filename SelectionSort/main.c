#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int List[], int n)
{
    int i, j, min_id;

    for (i = 0; i < n - 1; i++)
    {
        min_id = i;
        for(j = i + 1; j < n ; j++)
        {
            if(List[j] < List[min_id])
            {
                min_id = j;
            }
        }
        swap(&List[i], &List[min_id]);
    }

}

int main()
{
    printf("Selection Sort\n");
    int List[] = {-3, 6, 5, -1, 0, 9, 3};
    int i, j, temp;
    int n = sizeof(List)/sizeof(int);

    SelectionSort(List, n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", List[i]);
    }
    return 0;
}
