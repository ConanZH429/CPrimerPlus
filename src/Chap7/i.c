#include <stdio.h>


_Bool is_prime(int num)
{
    if (num == 1) return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) return 0;
    }
    return 1;
}

void get_prime(int num)
{
    for (int i = 2; i <= num; i++)
    {
        if (is_prime(i)) printf("%d ", i);
    }
    printf("\n");
}

int main(void)
{
    int n;
    int flag = 0;
    while (flag != 1)
    {
        printf("Enter a positive number: ");
        flag = scanf("%d", &n);
        if (getchar() != '\n')
        {
            while (getchar() != '\n');
            flag = 0;
            continue;
        }
        get_prime(n);
    }

    return 0;
}