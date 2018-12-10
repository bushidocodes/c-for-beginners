/*******************************
* Written by Sean McBride      *
*******************************/

#include <stdio.h>
#include <stdlib.h>

// Returns a pointer to a static string
// In C, a string is an array of characters terminated by a zero byte. This is called a "zero-string"
const char *hello()
{
    return "By Sean McBride\n";
}

// main is a special function that is invoked on program start
int main()
{
    printf("Hello world!\n");
    printf(hello());
    // Return Code for console app
    return 0;
}
