#include <stdio.h>
#include <float.h>

int main(void)
{
    float f = 1.0 / 3.0;
    double lf = 1.0 / 3.0;

    printf("%.6f %.6f\n", f, lf);
    printf("%.12f, %.12f\n", f, lf);
    printf("%.16f, %.16f\n", f, lf);
    printf("%.20f, %.20f\n", f, lf);

    printf("%d, %d\n", FLT_DIG, DBL_DIG);

    return 0;
}