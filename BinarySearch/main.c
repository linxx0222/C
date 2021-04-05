#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Binary Search!\n");
    int find;
    printf("Type a number you want to search:(0-99)\n");
    scanf("%d", &find);
    if(find < 0 || find > 99)
    {
        printf("Out of range!\n");
        return 0;
    }
    int arr[100];
    int i;
    int left, right, mid;
    for(i = 0; i < 100; i++)
    {
        arr[i] = i;
    }

    left = 0;
    right = 99;
    while(left < right)
    {
        mid = (left + right) / 2;
        if(find == arr[mid])
        {
            printf("FIND on %d\n", mid);
            break;
        }
        else if(find > arr[mid])
        {
            left = mid + 1;
            printf("find is larger mid %d\n", mid);
        }
        else if(find < arr[mid])
        {
            right = mid - 1;
            printf("find is smaller mid %d\n", mid);
        }
    }

    return 0;
}
