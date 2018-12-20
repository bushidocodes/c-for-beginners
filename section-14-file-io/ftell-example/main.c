#include <stdio.h>

int main(void)
{
    FILE *fp;
    int len;

    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return -1;
    }
    // Go to the end of the file and then use ftell to find the bytes offset from the start of the file
    fseek(fp, 0, SEEK_END);
    len = ftell(fp);

    fclose(fp);

    printf("Total size of file.txt = %d bytes\n", len);
    return 0;
}