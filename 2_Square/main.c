#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;

    printf("Please type a number¡G");
    scanf("%d", &input);

    if (input > 0 && (input & (input - 1)) == 0 )
    {
        printf("Input is a 2 Square number\n");
    }
    else
        printf("Input is not a 2 Square number\n");


    return 0;
}
