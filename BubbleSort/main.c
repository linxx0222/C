#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bubble Sort\n");
    int A[] = {-3, 6, 5, -1, 0, 9, 3};
    int i, j, temp;
    int n = sizeof(A)/sizeof(int);

    for (i = 0; i < (n - 1) ; i++)
    {
        for(j = 0; j <= (n - i - 1) ; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
