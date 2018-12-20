#include <stdio.h>

int main()
{
    FILE *fp;
    int c;
    char buffer[10];

    // open file
    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("Error opening file");
        return -1;
    }

    // Print contents of file to STDOUT
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    printf("\n");

    // Rewind to the start of the file.
    rewind(fp);

    // Now indirectly read string chunks into a buffer and then output to string
    while (fgets(buffer, 10, fp) != NULL)
    {
        printf("%s", buffer);
        getchar();
    }

    // Close file
    fclose(fp);
    fp = NULL;
    return 0;
}