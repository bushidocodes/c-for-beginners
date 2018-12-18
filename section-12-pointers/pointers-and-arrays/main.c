#include <stdio.h>
#include <stddef.h>

/**
 * Purpose: Demonstrate that a pointer is just a variable that stores a memory address
 * with tools to "dereference" and retrieve the value at that address
 **/

int main(void)
{
    int values[100] = {1, 2, 3, 4, 5};
    int *pValues = values;                       // This sets the pointer to the first element in the array
    pValues = &values[0];                        // This is functionally the same thing as the previous statement
    printf("%d\n", values == &values[0]);        // 1 because they equal. An array evaluates to the address fo the first element
    printf("%d\n", values[1] == *(pValues + 1)); // 1 because they equal. Pointer Math can be used in place of the Array index
}