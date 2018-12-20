#include <stdio.h>

int main(void)
{
    FILE *pf1, *pf2;
    pf1 = fopen("source.txt", "r");
    if (pf1 == NULL)
    {
        printf("No source file found!");
        return -1;
    }
    pf2 = fopen("output.txt", "w");
    if (pf2 == NULL)
    {
        printf("Unable to create output file!");
        return -1;
    }
    // Go to the end of the file
    fseek(pf1, 0, SEEK_END);
    int numberOfChars = ftell(pf1);
    for (int offset = numberOfChars - 1; offset >= 0; offset--)
    {
        fseek(pf1, offset, SEEK_SET);
        // printf("%c", fgetc(pf1));
        fputc(fgetc(pf1), pf2);
    };
    // Go backwards one character at a time and
    fclose(pf1);
    fclose(pf2);
    return 0;
}