#include <stdio.h>

char *my_strncat(char *dest, const char *src, size_t n);

int main()
{
    char dest[20] = "ABC";
    char src[] = "DEFGH";
    size_t n = 3;

    printf("%s\n", my_strncat(dest, src, n));

    return 0;
}

char *my_strncat(char *dest, const char *src, size_t n)
{
    int i       = 0;
    int j       = 0;
    int counter = 0;

    for (; dest[i] != '\0'; ++i)
        {}

    for (; src[j] != '\0' && counter < n; ++i, ++j, ++counter)
        dest[i] = src[j];

    return (char *) dest;
}
