#include <stdio.h>
#include <math.h>

int gcd(int first, int second);
float absoluteValue(float original);
float calcSquareRoot(float original);

int main(void)
{
    printf("10, 15 = %d\n", gcd(10, 15));
    printf("81, 9 = %d\n", gcd(81, 9));
    printf("81 = %f\n", absoluteValue(81));
    printf("-81 = %f\n", absoluteValue(-81));
    printf("-81.4444 = %f\n", absoluteValue(-81.4444));
    printf("Square Root of 9: %f\n", calcSquareRoot(9));
    printf("Square Root of -9: %f\n", calcSquareRoot(-9));
    return 0;
}

int gcd(int first, int second)
{
    if (second == 0)
    {
        return first;
    }
    else
    {
        return gcd(second, first % second);
    }
}

float absoluteValue(float original)
{
    return original < 0 ? original * -1 : original;
}

float calcSquareRoot(float original)
{
    if (original < 0)
    {
        printf("Cannot take a root of a negative. Using absolute value\n");
        return sqrt(absoluteValue(original));
    }
    else
    {
        return sqrt(original);
    }
}