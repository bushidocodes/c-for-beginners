#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char userInput[50];
    char reverse[50];
    printf("Enter a word of up to 50 characters:");
    scanf("%s", userInput);
    printf("Input: %s\n", userInput);
    int lengthOfUserInput = strlen(userInput);
    printf("Input: %d\n", lengthOfUserInput);

    reverse[lengthOfUserInput + 1] = '\0';

    for (int i = 0; i < lengthOfUserInput; i++)
    {
        reverse[(lengthOfUserInput - 1) - i] = userInput[i];
    }
    printf("Output: %s\n", reverse);
    return 0;
}