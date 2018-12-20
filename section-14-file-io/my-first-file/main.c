#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "w");
    if (pfile == NULL)
    {
        printf("Failed to open %s.\n", filename);
        exit(-1);
    }
    fclose(pfile);
    pfile = NULL;
    rename("myfile.txt", "myawesomefile.txt");

    return 0;
}