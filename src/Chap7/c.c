#include <stdio.h>

int main(void)
{
    int even_num = 0, odd_num = 0, even_sum = 0, odd_sum = 0;
    int num;
    while (1)
    {
        printf("Please enter a number: ");
        scanf("%d", &num);
        if (num == 0) break;
        switch (num % 2)
        {
            case 0:
                even_num++;
                even_sum += num;
                break;
            case 1:
                odd_num++;
                odd_sum += num;
                break;
            default:
                break;
        }
    }
    printf("Even number: %d, Odd number: %d\n", even_num, odd_num);
    printf("Even sum: %d, Odd sum: %d\n", even_sum, odd_sum);
    printf("Even average: %f, Odd average: %f\n", (float)even_sum / even_num, (float)odd_sum / odd_num);

    return 0;
}