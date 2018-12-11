#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double fahrenheit = atof(argv[1]);
    double celsius = (fahrenheit - 32) * ((double)5 / (double)9);
    printf("%f F* is %f C*\n", fahrenheit, celsius);
}