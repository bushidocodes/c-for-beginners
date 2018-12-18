#include <stdio.h>
#include <stddef.h>

/**
 * Purpose: Demonstrate that a pointer is just a variable that stores a memory address
 * with tools to "dereference" and retrieve the value at that address
 **/

int main(void)
{
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    printf("number\n");
    printf("address:\t%p\n", &number);
    printf("size:\t\t%d bytes\n", sizeof(number));
    printf("value:\t\t%d\n\n", number);

    pnumber = &number;

    printf("pnumber\n");
    printf("address:\t%p   \n", (void *)&pnumber);
    printf("size:\t\t%d bytes\n", sizeof(pnumber));
    printf("value:\t\t%p     \n", pnumber);
    printf("resolves to: \t%d\n", *pnumber);
}