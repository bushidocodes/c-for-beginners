#include <stdio.h>

// Function Prototypes

/**
 * Adds two integers
 * returns: the sum of the two integers
**/
int add(int one, int two);

int main()
{
    int sum = add(add(1, 2), 4);
    printf("%d\n", sum);
    return 0;
}

int add(int one, int two)
{
    return one + two;
};
