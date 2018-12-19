#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    struct date
    {
        int month;
        int day;
        int year;
    } today, *datePtr;

    datePtr = &today;

    // Using the struct pointer operator to assign values
    datePtr->month = 12;
    datePtr->day = 18;
    datePtr->year = 2018;

    // Using the struct pointer operator to retrieve values
    printf("Today's date is %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year);
}