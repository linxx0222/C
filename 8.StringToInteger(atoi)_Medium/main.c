#include <stdio.h>
#include <stdlib.h>


int myAtoi(char * s){
    int i = 0;
    long long sum;

    while(s[i] == ' ')
        i++;

    if(s[i] == '-')
    {
        i++;
        sum = 0;
        while(s[i] >= '0' && s[i] <= '9')
        {
            sum = sum * 10 + (s[i] - '0');

            if(sum - 1 > __INT_MAX__) return INT_MIN;

            i++;
        }
        return sum * -1;
    }
    else if(s[i] == '+')
    {
        i++;
        sum = 0;
        while(s[i] >= '0' && s[i] <= '9')
        {
            sum = sum * 10 + (s[i] - '0');

            if(sum > __INT_MAX__) return INT_MAX;

            i++;
        }
        return sum;
    }
    else if(s[i] >= '0' && s[i] <= '9')
    {
        sum = 0;
        sum = sum * 10 + (s[i] - '0');
        i++;

        while(s[i] >= '0' && s[i] <= '9')
        {
            sum = sum * 10 + (s[i] - '0');

            if(sum > __INT_MAX__) return INT_MAX;

            i++;
        }
        return sum;
    }

    return 0;

}
