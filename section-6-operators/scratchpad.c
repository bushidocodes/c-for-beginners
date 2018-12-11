#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 33;
    int b = 15;
    int result = a % b;
    bool isRight = true;
    printf("Remainder is %i\n", result);
    printf("Is a equal to b? %i\n", (a == b));
    printf("Is a greater than b? %i\n", (a > b && isRight));

    // In a Bitwise &, the bit must be 1 in the same position in both operands to be 1
    unsigned int a2 = 60; // 0011 1100
    unsigned int b2 = 13; // 0000 1101
    int result2 = 0;
    result2 = a2 & b2; // 0000 1100 or 12?
    printf("Bitwise And result is %i\n", result2);

    // In a Bitwise |, the result is 1 if either of the operands had a 1 in the position
    unsigned int a3 = 60; // 0011 1100
    unsigned int b3 = 13; // 0000 1101
    int result3 = 0;      //----------
    result3 = a3 | b3;    // 0011 1101 or 12?
    printf("Bitwise Or result is %i\n", result3);

    // Shifting Bits two position left using bitwise. The bits wrap around
    unsigned int a4 = 60;  // 0011 1100
    int result4 = a4 << 2; // 1111 0000
    printf("Bitwise Left Shift result is %i\n", result4);

    // In the explicit casting below, the decimal values and dropped and the two integers are summed.
    printf("%i", (int)21.51 + (int)26.99); // 21 + 26

    return 0;
}