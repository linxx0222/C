#include <stdio.h>
#include <stdlib.h>


bool isValid(char * s){
    char stack[strlen(s)];
    int flag = -1;

    while(*s)
    {
        switch(*s)
        {
            case ')':
                if(flag >= 0 && stack[flag--] == '(');
                else
                    return false;
                break;
            case ']':
                if(flag >= 0 && stack[flag--] == '[');
                else
                    return false;
                break;
            case '}':
                if(flag >= 0 && stack[flag--] == '{');
                else
                    return false;
                break;
            default:
                stack[++flag] = *s;
                break;
        }
        s++;
    }

    if(flag == -1)
        return true;
    else
        return false;

}
