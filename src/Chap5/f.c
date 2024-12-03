#include <stdio.h>

int main(void)
{
    int days = 1;

    while (days > 0)
    {
        printf("Please enter a number of days: ");
        scanf("%d", &days);

        if (days > 0)
        {
            int i = 0, sum = 0;
            for (; i <= days; i++)
            {
                sum += i * i;
            }
            printf("The sum of the first %d days is %d.\n", days, sum);
        }
    }

    return 0;
}