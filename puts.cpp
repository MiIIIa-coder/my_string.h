#include <stdio.h>

int my_puts(const char *str);

int main()
{
    const char mess[] = "ABC";

    my_puts(mess);
}


int my_puts(const char *mess)
{
    if (mess == NULL)
        return EOF;
    for (int i = 0; mess[i] != '\0';)
        putchar(mess[i++]);
    putchar('\n');
    return 0;
}
