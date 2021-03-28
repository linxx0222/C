#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Lottery\n");
    int i;
    int arr[7];
    int count = 0;
    int retry;
    srand(time(NULL));

    do
    {
        arr[count] = rand() % 49;
        retry = 0;
        for(i = 0; i < count; i++)
        {
            if(arr[i] == arr[count])
            {
                retry = 1;
                break;
            }
        }
        if(retry == 0)
            count++;

    }while(count < 7);

    for(i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
