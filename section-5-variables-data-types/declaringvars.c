#include <stdio.h>

int main()
{
    int myInt = 15;
    myInt += 1;
    printf("%i\n", myInt); // d and i are integers

    float myPi = 3.14;
    printf("%f\n", myPi);

    double doubleVar = 8.44e+11;
    printf("%e\n", doubleVar); // e and g are doubles

    _Bool hasMasteredC = 0;
    printf("%d\n", hasMasteredC); // booleans are really ints under the hood, so use d or i

    char myChar = 'G';
    printf("%c\n", myChar);

    enum RPSState
    {
        rock,
        paper,
        scissors
    };
    enum RPSState myPick = rock;
    enum RPSState ericaPick = paper;

    _Bool isSame = (myPick == ericaPick);
    printf("%d\n", isSame);

    return 0;
}