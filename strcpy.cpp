#include <stdio.h>
#include <string.h>

char *my_strcpy(char *dest_array, const char *src_array);

int main()
{
    const int LENGTH = 20;

    char dest_array[LENGTH] = "ABCDE";
    char src_array[LENGTH]  = "JJJJIJIJIJ";

    printf("%s\n", my_strcpy(dest_array, src_array));

    char dest_array1[LENGTH] = "ABCDE";
    char src_array1[LENGTH]  = "JJJJIJIJIJ";

    printf("%s\n", strcpy(dest_array1, src_array1));

    return 0;
}

char *my_strcpy(char *dest_array, const char *src_array)
{
    for (int i = 0; src_array[i] != '\0'; i++)
    {
        dest_array[i] = src_array[i];
    }

    dest_array[i] = '\0';

    return (char *) dest_array;
}
