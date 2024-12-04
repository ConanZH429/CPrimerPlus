#include <stdio.h>

#define RATE1 0.15
#define RATE2 0.28
#define BREAK1 17850
#define BREAK2 23900
#define BREAK3 29750
#define BREAK4 14875
#define TAX1 (BREAK1 * RATE1)
#define TAX2 (BREAK2 * RATE1)
#define TAX3 (BREAK3 * RATE1)
#define TAX4 (BREAK4 * RATE1)

void print_menu(void)
{
    printf("*****************************************************************\n");
    printf("1)single \t\t2)household\n");
    printf("3)married, joint \t4)married, separate\n");
    printf("5)quit\n");
    printf("*****************************************************************\n");
}

int main(void)
{
    char choice;
    double income;
    double tax;

    for (; print_menu(), 1;)
    {
        scanf(" %c", &choice);
        if (choice == '5') break;
        printf("Enter the income: ");
        scanf("%lf", &income);
        switch (choice)
        {
            case '1':
                if (income <= BREAK1) tax = income * RATE1;
                else tax = TAX1 + (income - BREAK1) * RATE2;
                break;
            case '2':
                if (income <= BREAK2) tax = income * RATE1;
                else tax = TAX2 + (income - BREAK2) * RATE2;
                break;
            case '3':
                if (income <= BREAK3) tax = income * RATE1;
                else tax = TAX3 + (income - BREAK3) * RATE2;
                break;
            case '4':
                if (income <= BREAK4) tax = income * RATE1;
                else tax = TAX4 + (income - BREAK4) * RATE2;
                break;
            default:
                printf("Invalid input\n");
                continue;
        }
        printf("The tax is: %.2f\n", tax);
    }

    return  0;
}