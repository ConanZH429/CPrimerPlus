#include <stdio.h>

double sub(double num1, double num2)
{
    return num1 - num2;
}

double mul(double num1, double num2)
{
    return num1 * num2;
}

int main(void)
{
    double num1, num2;
    for (;printf("Please enter two floating-point numbers: "), scanf("%lf %lf", &num1, &num2) == 2;)
    {
        printf("The difference between the two numbers is: %lf\n", sub(num1, num2));
        printf("The product of the two numbers is: %lf\n", mul(num1, num2));
    }

    return 0;
}