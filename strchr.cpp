#include <stdio.h>

char *my_strchr(const char *str, int ch);

int main()
{
    char array[] = "01234556";
    int ch = '5';
    char *ach = my_strchr(array, ch);

    printf("%p\n", ach);

    printf("%d\n", ach - array + 1);

    return 0;
}

char *my_strchr(const char *str, int ch)  // && *str != '\0'
{
    for (; *str != char(ch); ++str)
    printf("%c\n", *str);  //почему с этим работает?
    if (*str == ch)
        return (char *) str;
    return NULL;
}
