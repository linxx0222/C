#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Quick Sort\n");
    int List[] = {-3, 6, 5, -1, 0, 9, 3};
    int i, j, temp;
    int n = sizeof(List)/sizeof(int);

    QuickSort(List, n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", List[i]);
    }
    return 0;
}
