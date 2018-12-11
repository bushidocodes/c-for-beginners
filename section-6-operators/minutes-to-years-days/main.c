#include <stdio.h>

int main()
{
    const int MINUTES_PER_HOUR = 60;
    const int HOURS_PER_DAY = 24;
    const int DAYS_PER_YEAR = 365;
    int numberOfMinutes = 0;
    printf("Enter the number of minutes\n");
    scanf("%d", &numberOfMinutes);
    double numberOfDays = (double)numberOfMinutes / (MINUTES_PER_HOUR * HOURS_PER_DAY);
    double numberOfYears = (double)numberOfMinutes / (MINUTES_PER_HOUR * HOURS_PER_DAY * DAYS_PER_YEAR);
    printf("%d minutes is roughly equal to %f years or %f days\n", numberOfMinutes, numberOfYears, numberOfDays);
    return 0;
}