#include <stdio.h>
#include <stdlib.h>
#include <time.h> // I need this to seed the random number generator

#define GUESS_LIMIT 5
#define LOWER_BOUND 0
#define UPPER_BOUND 20

int main()
{
    srand(time(0));                                /* Seed the random number generator using the system time*/
    int randomNumber = rand() % (UPPER_BOUND + 1); /* Random Number between 0 and 20 */
    int guessCount = 0;
    int latestGuess = -1;

    printf("Let's play the guessing game!\n");
    do
    {
        printf("Enter a number between 0 and 20:\n");
        scanf(" %d", &latestGuess);
        getchar(); // I need to consume the \n in the buffer to prevent an infinite loop

        if (latestGuess > 0 && latestGuess <= UPPER_BOUND)
        {

            guessCount++;
            if (latestGuess < randomNumber)
            {
                printf("Too Low!\n");
            }
            else if (latestGuess > randomNumber)
            {
                printf("Too High!\n");
            }
            else if (latestGuess == randomNumber)
            {
                printf("Bullseye!\n");
            }
        }
    } while (latestGuess != randomNumber && guessCount < GUESS_LIMIT);

    // End Game Resolution

    if (latestGuess == randomNumber)
    {
        printf("You won in %d guesses!\n", guessCount);
    }
    else
    {
        printf("Game Over!\n");
    }

    return 0;
}