#include <stdio.h>

int main(void)
{
    FILE *pfile;
    char currentChar;
    int numberOfLines = 1;

    pfile = fopen("text.txt", "r");
    if (pfile == NULL)
    {
        printf("File does not exist!\n");
        return -1;
    }

    while ((currentChar = fgetc(pfile)) != EOF)
    {
        if (currentChar == '\n')
            numberOfLines++;
    }

    fclose(pfile);
    pfile = NULL;

    printf("The file has %d lines.\n", numberOfLines);
    return 0;
}