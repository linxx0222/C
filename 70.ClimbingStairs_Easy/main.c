#include <stdio.h>
#include <stdlib.h>

int climbStairs(int n){
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else
    {
        int result, prev, next;
        int i;
        result = 0;
        prev = 1;
        next = 2;
        for(i = 2; i < n; i++)
        {
            result = prev + next;
            prev = next;
            next = result;
        }
        return result;
    }

}

int climbStairs(int n){
    //recursive but Time Limit Exceeded
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else
    {
        return climbStairs(n - 1) + climbStairs(n - 2);
    }

}
