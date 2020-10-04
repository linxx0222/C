#include <stdio.h>
#include <stdlib.h>

int strcmp_imp ( const char* s1, const char * s2 );
int strncmp_imp ( const char* s1, const char * s2 , size_t n );

int main()
{
    char *source = "abc";
    char *d1 = "abc";
    char *d2 = "cde";

    printf("strcmp: %d\n", strcmp_imp(source, d1));
    printf("strcmp: %d\n", strcmp_imp(source, d2));

    return 0;
}

int strcmp_imp ( const char* s1, const char * s2 )
{
    while(*s1 != '\0' || *s2 != '\0')
    {
        if((*s1 - *s2) > 0)
            return (*s1 - *s2);
        else if((*s1 - *s2) < 0)
            return (*s1 - *s2);
        else
            s1++;
            s2++;
    }
    return 0;
}
