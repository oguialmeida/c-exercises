// Making structures in different ways
#include <stdio.h>

int main()
{
    // Assignment by order
    struct firstClock
    {
        int hours;
        int minutes;
        int seconds;
    };

    struct firstClock now = {10, 20, 30};

    // Assignment in the struct
    struct secondClock
    {
        int hours;
        int minutes;
        int seconds;
    } after = {12, 22, 32};

    // Assigment with a array
    struct lastClock
    {
        int hours;
        int minutes;
        int seconds;
    };

    struct lastClock last[3];

    last[0].hours = 14;
    last[0].minutes = 24;
    last[0].seconds = 30;

    printf("Antes: %i:%i:%i\n", now.hours, now.minutes, now.seconds);
    printf("Depois: %i:%i:%i\n", after.hours, after.minutes, after.seconds);
    printf("Final: %i:%i:%i\n", last[0].hours, last[0].minutes, last[0].seconds);
}
