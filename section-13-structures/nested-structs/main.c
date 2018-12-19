#include <stdio.h>

int main(void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };
    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };
    struct dateTime
    {
        struct date date;
        struct time time;
    };
    struct dateTime meeting;
    meeting.date.month = 12;
    return 0;
}