#include <stdio.h>

void larger_of(double*, double*);

int main(void)
{
    double x, y;
    printf("Enter two integers: ");
    scanf("%lf %lf", &x, &y);
    larger_of(&x, &y);
    printf("The two integers are now %.2f and %.2f\n", x, y);

    return 0;
}

void larger_of(double* x, double* y)
{
    if (*x > *y)
        *y = *x;
    else
        *x = *y;
}