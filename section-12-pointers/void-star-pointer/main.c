#include <stdio.h>
#include <stddef.h>

/**
 * Purpose: Demonstrate the void * pointer
 **/

int main(void)
{
    int i = 0;
    float f = 2.34;
    char ch = 'k';

    void *voidPointer;

    // We can assign the void pointer to whatever type we want, but we have to cast it to the proper type of pointer immediately before dereferencing
    voidPointer = &i;
    printf("Value of i = %d\n", *(int *)voidPointer);

    voidPointer = &f;
    printf("Value of f = %.2f\n", *(float *)voidPointer);

    voidPointer = &ch;
    printf("Value of ch = %c\n", *(char *)voidPointer);

    return 0;
}