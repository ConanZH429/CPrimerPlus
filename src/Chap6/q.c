#include <stdio.h>

int main(void)
{
    double money = 100, rate = 0.08, take = 10.0;
    int year = 0;
    while (money > 0)
    {
        money += money * rate;
        money -= take;
        year++;
        printf("Year %d: %.2f\n", year, money);
    }

    return 0;
}