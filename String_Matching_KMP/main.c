#include <stdio.h>
#include <stdlib.h>

void Fail_Function(* char target)
{

}

int main()
{
    printf("String Matching [KMP Knuth-Morris-Pratt algorithm]\n");
    char target[64] = "m9fh9yk6QvgHSAwFMXgYzsRSX5KaYD4dtzmWUtXpXWatAMktxMYduBQNprKgPa4t";
    char want[8] ;

    printf("Type a string you want to search(7 bytes):\n");
    scanf("%7s", &want);
    printf("Searching: %s\n", want);


    return 0;
}
