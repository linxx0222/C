#include <stdio.h>
#include <stdlib.h>

int call(char s)
{
    switch(s)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int romanToInt(char * s){
    int i;
    int result = 0;
    int s_len = strlen(s);

    for(i = 0 ; i < s_len ; i++)
    {

        if(call(s[i + 1]) > call(s[i]) )
        {
            result += call(s[i + 1]) - call(s[i]);
            i++;
            continue;
        }
        result +=call(s[i]);
    }

    return result;
}
