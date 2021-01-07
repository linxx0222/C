#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b)
{
    if(a % b == 0)
    {
        return b;
    }
    else
    {
        return GCD(b, a % b);
    }
}

int main()
{
    printf("Greatest Common Divisor! (GCD) (Recursive)\n");
    int a, b;
    int result;
    printf("Type 2 numbers:\n");
    scanf("%d %d", &a, &b);

    result = GCD(a,b);
    printf("Result: %d", result);

    return 0;
}
