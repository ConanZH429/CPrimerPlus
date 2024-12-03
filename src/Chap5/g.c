#include <stdio.h>

double square(double x)
{
    return x * x;
}

int main(void)
{
    double i;

    printf("Please enter a number: ");
    scanf("%lf", &i);
    printf("The square of %.2f is %.2f.\n", i, square(i));
    
    return 0;
}