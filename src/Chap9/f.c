#include <stdio.h>

void sort_3(double*, double*, double*);

int main(void)
{
    double a, b, c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    sort_3(&a, &b, &c);
    printf("The sorted numbers are: %.2lf %.2lf %.2lf\n", a, b, c);

    return 0;
}

void sort_3(double* a, double* b, double* c)
{
    double temp;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}