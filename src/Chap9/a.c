#include <stdio.h>

double min(double, double);


int main(void)
{
    printf("Please enter two numbers: ");
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("The smaller number is: %lf\n", min(x, y));

    return 0;
}

double min(double x, double y)
{
    return x < y ? x : y;
}