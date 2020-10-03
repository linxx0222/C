#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;

    printf("Please type a number:");
    scanf("%d", &input);

    if (input > 0 && (input & (input - 1)) == 0 )
    {
        printf("Input is Power By 2\n");
    }
    else
        printf("Input is not Power By 2\n");


    return 0;
}
