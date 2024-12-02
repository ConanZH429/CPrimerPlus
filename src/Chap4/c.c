#include <stdio.h>

int main(void)
{
    double x;
    scanf("%lf", &x);
    printf("%f\n", x);
    printf("%e\n", x);
    printf("The input is %.1f or %.1e.\n", x, x);
    printf("The input is %+.3f or %.3E.\n", x, x);

    return 0;
}