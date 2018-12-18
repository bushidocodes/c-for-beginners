#include <stdio.h>

/**
 * Purpose: Demonstrate the use of pointer arithmatic with an array
 * These two alternate notations are equivalents.
 * 
 * I personally prefer array notation because it's more clear what the function is doing
 **/

int arraySumWithArrayNotation(int array[], const int arrayLength)
{
    int sum = 0, *pInt;
    int *const arrayEnd = array + arrayLength; // Calculate the memory address of the end of the array and store in a const

    for (pInt = array; pInt < arrayEnd; ++pInt)
    {
        sum += *pInt;
    }
    return sum;
}

int arraySumWithPointerNotation(int *array, const int arrayLength)
{
    int sum = 0;
    int *const arrayEnd = array + arrayLength; // Calculate the memory address of the end of the array and store in a const

    for (; array < arrayEnd; ++array)
    {
        sum += *array;
    }
    return sum;
}

int main(void)
{
    int values[10] = {100,
                      4,
                      7,
                      2,
                      4,
                      6,
                      22,
                      67,
                      -70,
                      33};
    printf("The sum of values is %d\n", arraySumWithPointerNotation(values, sizeof(values) / sizeof(*values)));
    return 0;
}