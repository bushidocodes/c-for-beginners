/**
 * Purpose: Find all the prime numbers from 3 to 100
 * Author: Sean McBride
 * Date: 12/14/2018
 **/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int primes[50] = {2, 3}; /* Size is a SWAG here */
    int numberOfPrimes = 2;
    bool isPrime;

    for (int i = 5; i <= 100; i += 2) /* We only have to check odds */
    {
        // I don't have a reduce, so I have to do things imperatively
        isPrime = true;
        for (int j = 0; j < numberOfPrimes; ++j)
        {
            if (i % primes[j] == 0)
            {
                isPrime = false;
            }
            if (isPrime == false)
                break;
        }
        // I can't push to the array, so I have to keep track of the number of elements I've written
        if (isPrime == true)
        {
            primes[numberOfPrimes] = i;
            numberOfPrimes++;
        }
    }
    printf("The prime numbers from 0 to 100 are ");
    for (int i = 0; i < numberOfPrimes; ++i)
    {
        printf(i != numberOfPrimes - 1 ? "%d, " : "and %d.", primes[i]);
    }
    printf("\n");
}