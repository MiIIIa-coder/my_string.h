#include <stdio.h>
#include <string.h>

char *my_strncpy(char *dest, const char *src, size_t n);

int main()
{
    const int LENGTH = 20;
    char dest[LENGTH] = "ZZZZZZZZZZ";
    char src[LENGTH]  = "ABCDEF";

    printf("%s\n", my_strncpy(dest, src, 3));

    char dest1[LENGTH] = "ZZZZZZZZZZ";
    char src1[LENGTH]  = "ABCDEF";

    printf("%s\n", strncpy(dest1, src1, 3));

    return 0;
}

char *my_strncpy(char *dest, const char *src, size_t n)
{
    int i = 0;
    int counter = 0;

    for (; src[i] != '\0' && counter < n; i++, counter++)
        dest[i] = src[i];
    dest[i] = '\0';

    return (char *) dest;
}
