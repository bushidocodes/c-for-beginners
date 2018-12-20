#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE *fp1, *fp2;
    fp1 = fopen("lower.txt", "r");
    if (fp1 == NULL)
    {
        printf("File does not exist!\n");
        return -1;
    }
    fp2 = fopen("upper.txt", "w");
    if (fp2 == NULL)
    {
        printf("File does not exist!\n");
        return -1;
    }
    char c;
    while ((c = fgetc(fp1)) != EOF)
    {
        fputc(toupper(c), fp2);
    }

    fclose(fp1);
    fclose(fp2);
    rename("upper.txt", "lower.txt");
    remove("upper.txt");
    return 0;
}