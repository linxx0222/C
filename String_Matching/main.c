#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("String Matching [Brute force]\n");
    char target[64] = "m9fh9yk6QvgHSAwFMXgYzsRSX5KaYD4dtzmWUtXpXWatAMktxMYduBQNprKgPa4t";
    char want[8] ;

    printf("Type a string you want to search(7 bytes):\n");
    scanf("%7s", &want);
    printf("Searching: %s\n", want);

    int i, mat;
    int find = 0;
    int target_len = strlen(target);
    int want_len = strlen(want);

    for (i = 0; i <= target_len - want_len; i++)
    {
        mat = 0;
        while (mat < want_len && target[i + mat] == want[mat]) mat++;
        if (mat == want_len)
        {
            find = i;
            break;
        }
    }

    if(find > 0)
        printf("Find at %d\n", find);
    else
        printf("Not Find!\n");

    return 0;
}
