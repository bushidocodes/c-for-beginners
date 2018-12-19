#include <stdio.h>

int main(void)
{
    struct date
    {
        int month;
        int day;
        int year;
        char name[10];
    };
    struct date myDates[10] = {
        {12, 1, 1985, "Sean"},
        {2, 1, 1985, "Erica"}}; // Initializing the first two

    for (int i = 0; i < sizeof(myDates) / sizeof(*myDates); i++)
    {
        printf("%s: %2d/%2d/%d\n", myDates[i].name, myDates[i].month, myDates[i].day, myDates[i].year);
    }
    // myDates[0].month = 12;
    return 0;
}