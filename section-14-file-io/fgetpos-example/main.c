#include <stdio.h>

int main(void)
{
    FILE *fp;
    fpos_t position;

    fp = fopen("file.txt", "w+");
    fgetpos(fp, &position); // We have stored this location. We can later return to this position via fsetpos
    fputs("Hello, World!", fp);

    fsetpos(fp, &position); // This is taking us back to the start of the string which we saved before
    fputs("Bye**", fp);

    fclose(fp);
    return 0;
}