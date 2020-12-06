#include <stdio.h>
#include <stdlib.h>

int main()
{
    int find;
    int n=0;
    printf("Find the Highest Order bit, type a number:\n");
    scanf("%d", &find);

    while( (find & (find - 1))!=0 )
    {
        find = find & (find - 1);
    }
    while( (find & (1 << n)) ==0 )
    {
        n++;
    }
    printf("The Highest Order bit is bit:%d(0-base)\n", n);

    return 0;
}
