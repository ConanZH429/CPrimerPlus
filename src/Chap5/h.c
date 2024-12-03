#include <stdio.h>

int main(void)
{
    int m;
    int n;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &n);
    m = 1;
    while (m > 0)
    {
        printf("Now enter the first operand: ");
        scanf("%d", &m);
        printf("%d %% %d is %d\n", m, n, m % n);
    }

    return 0;
}