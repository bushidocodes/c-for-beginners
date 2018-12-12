#include <stdio.h>

int main()
{
    unsigned long long accumulator = 1LL; /* Accumulate the product of ints*/
    unsigned int endInt = 0;              /* Last int to multiply by to compute factorial */

    printf("Enter the factorial you wish to compute: ");
    scanf("%d", &endInt);

    // Compute the factorial of endInt!
    for (unsigned int i = 1; i <= endInt; accumulator *= i, ++i)
        ;

    printf("%d! = %d\n", endInt, accumulator);

    return 0;
}