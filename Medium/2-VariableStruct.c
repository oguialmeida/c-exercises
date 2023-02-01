// Passing variables from a structure
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

    struct clockTime after;

    after.hours = now.hours + 1;
    after.minutes = now.minutes;
    after.seconds = 31 + 12;

    printf("Antes: %i:%i:%i\n", now.hours, now.minutes, now.seconds);
    printf("Depois: %i:%i:%i\n", after.hours, after.minutes, after.seconds);
}