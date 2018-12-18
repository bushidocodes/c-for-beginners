/**
 * Purpose: Demonstrate use of pointers to achieve pass by reference
 **/

#include <stdio.h>

void square(int *const pNumber);

int main(void)
{
    int number = 9;
    square(&number);
    printf("Number is %d\n", number);

    return 0;
}

// Mutate state in the memory adddres passed via the pointer
void square(int *const pNumber)
{
    *pNumber = (*pNumber) * (*pNumber);
}