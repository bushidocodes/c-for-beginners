#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int number = 99; // Static compile-time allocation of memory for number
    int *pnumber = &number;

    printf("%d\n", *pnumber); // Use the dereference operator to get the value of the address that pnumber points to. We use %d because pnumber is an int pointer.

    return 0;
}