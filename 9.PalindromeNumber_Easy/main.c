#include <stdio.h>
#include <stdlib.h>

bool isPalindrome(int x){
    if (x < 0)
        return false;
    else if (x == 0)
        return true;

    int degree = 0;
    int temp = x;
    while(temp != 0)
    {
        temp = temp / 10;
        degree++;
    }

    int arr[degree];
    int i = 0;
    while(x != 0)
    {
        arr[i] = x % 10;
        x = x / 10;
        i++;
    }
    int j;
    for(j = 0; j < degree / 2 ; j++)
    {
        if(arr[j] != arr[degree - j - 1])
            return false;
    }
    return true;
}
