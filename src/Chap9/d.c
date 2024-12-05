#include <stdio.h>

double h_mean(double, double);

int main(void)
{
    double x, y;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    printf("The harmonic mean of %.2f and %.2f is %.2f\n", x, y, h_mean(x, y));

    return 0;
}

double h_mean(double x, double y)
{
    return 1 / ((1 / x + 1 / y) / 2);
}