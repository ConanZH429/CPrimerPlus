#include <stdio.h>

int main(void)
{
    int lower, upper;

    for(;printf("Enter lower an upper integer limits: "), scanf("%d %d", &lower, &upper), lower < upper;)
    {
        int sum = 0;
        for (int i = lower; i <= upper; i++) sum += i * i;
        printf("The sum of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum);
    }

    return 0;
}