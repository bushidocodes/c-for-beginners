#include <stdio.h>

int main(void)
{
    // Named struct
    // struct date
    // {
    //     int month;
    //     int day;
    //     int year;
    // };

    // Define named struct and initialize instance at the same time
    // struct date
    // {
    //     int month; // : 1 sets the width to 1 bit
    //     int day;
    //     int year;
    // } today; // multiple instances of the data structure could be declared at once

    // Anonymous struct... Starts to look like a JS Object
    struct
    {
        int month;
        int day;
        int year;
    } birthday = {
        month : 12,
        day : 1,
        year : 1985
    },
      today; // multiple instances of the data structure could be declared at once

    today.month = 2;
    today.day = 25;
    today.year = 2015;

    printf("Today's date is %d/%d/%d\n", today.month, today.day, today.year);
    printf("My birthday is %d/%d/%d\n", birthday.month, birthday.day, birthday.year);

    return 0;
}