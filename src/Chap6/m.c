#include <stdio.h>

int main(void)
{
    int a[8], i;

    a[0] = 1;
    for (i = 1; i < 8; i++) a[i] = a[i-1] * 2;
    do
    {
        i--;
        printf("%d\n", a[i]);
    } while (i > 0);

    return 0;
}