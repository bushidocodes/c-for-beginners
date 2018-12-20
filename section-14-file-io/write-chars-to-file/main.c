#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("museumOfChars.txt", "w+");

    // the first bunch of characters are control chars, so start with stuff we can really print
    for (int ch = 33; ch <= 100; ch++)
    {
        fputc(ch, fp);
    }

    fclose(fp);
    return 0;
}