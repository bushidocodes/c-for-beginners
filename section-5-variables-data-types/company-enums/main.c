/***************************************************************
 * Author: Sean McBride                                        *
 * Purpose: Declare three variables using an enum of companies *
 * ************************************************************/

#include <stdio.h>

int main()
{
    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    enum Company firstEmployer = XEROX;
    enum Company secondEmployer = GOOGLE;
    enum Company thirdEmployer = EBAY;
    printf("%i, %i, %i\n", firstEmployer, secondEmployer, thirdEmployer);
    return 0;
}