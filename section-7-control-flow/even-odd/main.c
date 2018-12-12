#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int userNumber = atoi(argv[1]);
    if (userNumber % 2 == 0)
    {
        printf("The number is even\n");
    }
    else if (userNumber == 1)
    {
        printf("Uno!\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    // Basic example of ternary
    printf(userNumber % 2 == 0 ? "even" : "odd");
}