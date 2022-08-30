#include <stdio.h>
#include <string.h>

static const int LENGTH = 20;

int my_strlen(const char *array, int lim);

int main()
{
    char array[LENGTH] = "";

    printf("%d\n", my_strlen(array, LENGTH));

    printf("%d\n", strlen(array));

    return 0;
}

int my_strlen(const char *array, int lim)
{
    int i = 0;

    if (array[0] == '\0')
        return 0;

    for (; i < lim && array[++i] != '\0';)
        {}

    return i;
}
