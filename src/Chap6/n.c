#include <stdio.h>

#define LEN 8

int main(void)
{
    double a1[LEN], a2[LEN];
    double sum = 0.0;
    for (int i = 0; i < LEN; i++)
    {
        printf("Please enter a number for the %d in list: ", i);
        scanf("%lf", &a1[i]);
        sum += a1[i];
        a2[i] = sum;
    }
    for (int i = 0; i < LEN; i++) printf("%8.2f", a1[i]);
    printf("\n");
    for (int i = 0; i < LEN; i++) printf("%8.2f", a2[i]);

    return 0;
}