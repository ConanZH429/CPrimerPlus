#include <stdio.h>

void Temperatures(double F)
{
    const double a = 5.0 / 9.0, b = 32.0, c = 273.16;
    double C = a * (F - b);
    double K = C + c;
    printf("%.2f F = %.2f C = %.2f K\n", F, C, K);
}

int main(void)
{
    double F;
    while (scanf("%lf", &F) == 1)
    {
        Temperatures(F);
    }

    return 0;
}