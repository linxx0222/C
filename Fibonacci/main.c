#include <stdio.h>
#include <stdlib.h>

int Fibon(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return Fibon(n - 1) + Fibon (n - 2);
    }
}

int main()
{
    printf("Fibonacci! (Recursive)\n");
    int n, result;
    printf("Type index:\n");
    scanf("%d", &n);

    result = Fibon(n);
    printf("%d", result);

    return 0;
}
