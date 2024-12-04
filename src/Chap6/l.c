#include <stdio.h>

int main(void)
{
    double sum1 = 1, sum2 = 1;
    printf("Please enter a number: ");
    int num;
    scanf("%d", &num);

    for (int i = 2; i <= num; i++) sum1 += 1.0 / i;
    for (int i = 2; i <= num; i += 2) sum2 -= 1.0 / i;
    for (int i = 3; i <= num; i += 2) sum2 += 1.0 / i;

    printf("sum1 = %f\nsum2 = %f\n", sum1, sum2);

    return 0;
}