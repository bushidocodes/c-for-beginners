#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str;

    // Alloc memory for 15 characters
    str = (char *)malloc(15 * sizeof(char));
    strcpy(str, "Sean was here");
    printf("String = %s, Address = %u\n", str, str);

    // We need to append to our string, and it needs more space, so we use realloc
    str = (char *)realloc(str, 25 * sizeof(char));
    strcat(str, " and there");
    printf("String = %s, Address = %u\n", str, str);

    free(str);
    str = NULL;

    return 0;
}