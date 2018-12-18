/**
 * Purpose: Demonstrate the dynamic allocation memory for variable length user input 
 **/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numberOfCharacters = 0;
    char *pString, format[8];

    printf("Enter number of characters you want to enter:");
    scanf("%d", &numberOfCharacters);
    // Add one for the null string
    numberOfCharacters++;
    pString = (char *)calloc(numberOfCharacters, sizeof(char));
    if (pString != NULL)
    {
        printf("Enter string: ");
        scanf(" ");
        fgets(pString, numberOfCharacters, stdin);
        printf("You entered:\n%s\n", pString);
    }
    free(pString);
    pString = NULL;

    return 0;
}