#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, 31, 20, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; ++index)
    {
        printf("Month %d had %2d days.\n", index + 1, days[index]);
    }
}