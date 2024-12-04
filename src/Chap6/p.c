#include <stdio.h>

int main(void)
{
    double Daphne = 100.0, Deirdre = 100.0;
    int year = 0;
    do
    {
        year++;
        Daphne += 10.0;
        Deirdre *= 1.05;
    } while (Daphne >= Deirdre);
    printf("After %d years, Deirdre's investment exceeds Daphne's investment.\n", year);

    return 0;
}