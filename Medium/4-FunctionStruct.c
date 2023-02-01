// Shows a timetable using concepts of functions and structures
#include <stdio.h>

struct clock
{
    int hours;
    int minutes;
    int seconds;
};

void receiveTimes(struct clock arr[]);
void printTimes(struct clock arr[]);

int main()
{
    struct clock arr[3];

    receiveTimes(arr);
    printTimes(arr);

    return 0;
}

void receiveTimes(struct clock arr[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %i horário(hh:mm:ss): ", i + 1);
        scanf("%i:%i:%i", &arr[i].hours, &arr[i].minutes, &arr[i].seconds);
    }
}

void printTimes(struct clock arr[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("%i:%i:%i\n", arr[i].hours, arr[i].minutes, arr[i].seconds);
    }
}