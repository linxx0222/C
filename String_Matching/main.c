#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("String Matching [Brute force]\n");
    char target[64] = "m9fh9yk6QvgHSAwFMXgYzsRSX5KaYD4dtzmWUtXpXWatAMktxMYduBQNprKgPa4t";
    char want[8];

    printf("Type a string you want to search(7 bytes):\n");
    scanf("%7s", &want);
    printf("Searching: %s\n", want);

    return 0;
}
