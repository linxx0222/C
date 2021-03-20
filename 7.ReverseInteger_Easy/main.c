#include <stdio.h>
#include <stdlib.h>



int reverse(int x){
    //Best Solution
    int ans = 0;
    while (x != 0)
    {
        int r = x % 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10) return 0;

        ans = ans * 10 + r;
        x /= 10;
    }
    return ans;
}


int reverse(int x){
    //This method cannot pass some test case about overflow.
    if(x == 0 )
        return 0;

    int degree = 0;
    int temp = x;
    int negative = 0;

    if(x < 0)
    {
        negative = 1;
        temp = -x;
    }

    while(temp != 0)
    {
        temp = temp / 10;
        degree++;
    }

    int arr[degree];

    if(x < 0)
    {
        negative = 1;
        temp = -x;
    }
    else
        temp = x;

    int j = 0;
    while(temp != 0)
    {
        arr[j] = temp % 10;
        temp = temp / 10;
        j++;
    }

    int result = 0;
    int k;
    k = degree - 1;
    for(j = 0; j < degree; j++)
    {
        result += arr[j] * pow(10, k);
        k--;
    }
    if(negative)
        result = -result;

    // if(result > INT_MAX || result  < INT_MIN ) return 0;

    return result;
}
