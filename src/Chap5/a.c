#include <stdio.h>

#define HOUR2MIN 60

int main(void)
{
    int m = 1;
    int hours, minutes;

    while (m>0)
    {
        printf("Please enter the time in minutes: ");
        scanf("%d", &m);

        if (m>0)
        {
            minutes = m % HOUR2MIN;
            hours = (m - minutes) / HOUR2MIN;
            printf("The time is %d hours and %d minutes.\n", hours, minutes);
        }
    }

    return 0;
}