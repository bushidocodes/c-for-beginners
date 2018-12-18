#include <stdio.h>

int main(void)
{
    int number = 33;
    int *pNumber = &number;
    printf("Address:\t%p\nValue:\t\t%p\nIndirect:\t%d\n", &pNumber, pNumber, *pNumber);

    return 0;
}