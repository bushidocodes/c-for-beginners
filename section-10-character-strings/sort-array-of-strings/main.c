#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/**
 * Purpose: Sort an Array of Strings using Buble Sort
 * Author: Sean McBride
 **/

void bubbleSortStrings(int numberOfStrings, int stringLength, char arrayOfStrings[numberOfStrings][stringLength])
{
    char buffer[stringLength];
    bool isPristine = false; /* Used to know if we performed a swap during a pass */
    while (isPristine == false)
    {
        int numberOfSwaps = 0;
        for (int i = 0; i + 1 < numberOfStrings; i++)
        {
            if (strcmp(arrayOfStrings[i], arrayOfStrings[i + 1]) > 0)
            {

                strcpy(buffer, arrayOfStrings[i]);
                strcpy(arrayOfStrings[i], arrayOfStrings[i + 1]);
                strcpy(arrayOfStrings[i + 1], buffer);
                numberOfSwaps++;
            }
        }
        isPristine = numberOfSwaps == 0;
    }
}

int main(void)
{
    int numberOfStrings = 0;
    printf("Input number of words to sort: ");
    scanf("%d", &numberOfStrings);
    char strings[numberOfStrings][20];

    for (int i = 0; i < numberOfStrings; i++)
    {
        char buffer[20] = "";
        printf("Input word %d/%d: ", i + 1, numberOfStrings);
        scanf("%s", buffer);
        strcpy(strings[i], buffer);
    }

    bubbleSortStrings(numberOfStrings, 20, strings);
    printf("\n\nSorted output: \n");
    for (int i = 0; i < numberOfStrings; i++)
    {
        printf("%s\n", strings[i]);
    }
}