#include <stdio.h>

#define WEEK2DAYS 7

int main(void)
{
    int i = 1;
    int days, weeks;

    while (i > 0)
    {
        printf("Please enter days: ");
        scanf("%d", &i);
        if (i > 0)
        {
            days = i % WEEK2DAYS;
            weeks = (i - days) / WEEK2DAYS;
            printf("%d days are %d weeks, %d days.\n", i, weeks, days);
        }
    }

    return 0;
}