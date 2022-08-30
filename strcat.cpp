#include <stdio.h>

char *my_strcat(char *dest, const char *src);

int main()
{
    char dest[10] = "ABC";
    char src[]    = "DEF";

    printf("%s\n", my_strcat(dest, src));

    return 0;
}

char *my_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;

    for (; dest[i] != '\0'; ++i)
        {}

    for (; src[j] != '\0'; ++i, ++j) {
        dest[i] = src[j];
    }

    return (char *) dest;
}
