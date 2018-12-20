#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = fopen("file.txt", "w+");

    // fputs writes up to a null terminator, but it does not write the null terminator to the file
    // It's best to use this to write a line of text with a newline terminator
    fputs("This is c programming.\n", fp);
    fputs("This is a systems programming language.\n", fp);
    fputs("Hold onto your butts.\n", fp);

    fclose(fp);

    return 0;
}