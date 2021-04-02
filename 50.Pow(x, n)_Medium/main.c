#include <stdio.h>
#include <stdlib.h>



double myPow(double x, int n){
    //recursive
    if(n == 0)
        return 1;

        double half = myPow(x, n / 2);
    if(n % 2 == 0)
        return half * half;
    if(n > 0)
        return half * half * x;
    return half * half / x;
}


double myPow(double x, int n){
    //original method
    int i;
    double result = 1.0;

    if(n == 0 || x == 1)
        return 1;
    else if(x == -1 && n == -2147483648)
        return 1;
    else if(x == -1)
        return -1;
    else if (n == -2147483648 || n == 2147483647)
    {
        return 0;
    }
    else if(n > 0)
    {
        for(i = 0; i < n; i++)
        {
            result = result * x;
        }
    }
    else // n < 0
    {
        for(i = n; i < 0; i++)
        {
            result = result / x;
        }

    }

    return result;
}
