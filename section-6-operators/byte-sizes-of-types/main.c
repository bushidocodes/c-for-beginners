#include <stdio.h>

int main()
{
    printf("Size of int is %zd bytes\n", sizeof(int));
    printf("Size of char is %zd bytes\n", sizeof(char));
    printf("Size of long is %zd bytes\n", sizeof(long));
    printf("Size of long long is %zd bytes\n", sizeof(long long));
    printf("Size of double is %zd bytes\n", sizeof(double));
    printf("Size of long double is %zd bytes\n", sizeof(long double));
    return 0;
}