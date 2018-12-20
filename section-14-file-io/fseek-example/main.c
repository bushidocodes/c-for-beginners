#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("file.txt", "w+");
    fputs("This is Jason", fp);

    // We are going to overwrite text starting at position 7
    fseek(fp, 7, SEEK_SET);
    fputs("Hello, how are you?", fp);

    fclose(fp);

    return 0;
}