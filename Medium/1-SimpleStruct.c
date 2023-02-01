// Making a structure that displays the hours of a clock
#include <stdio.h>

int main()
{
    struct clockTime
    {
        int hours;
        int minutes;
        int seconds;
    };

    struct clockTime now;

    now.hours = 10;
    now.minutes = 20;
    now.seconds = 30;

    printf("%i:%i:%i\n", now.hours, now.minutes, now.seconds);
}