#include <stdio.h>

#define SUPER_HOUR 40
#define SUPER_RATE 1.5
#define TAX_BREAK1 300
#define TAX_STEP 150
#define TAX_BREAK2 (TAX_BREAK1 + TAX_STEP)
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25
#define TAX1 (TAX_BREAK1 * TAX_RATE1)
#define TAX2 (TAX1 + TAX_STEP * TAX_RATE2)

void print_menu(void)
{
    for (int i = 0; i < 50; i++) printf("*");
    printf("\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr\t\t2) $9.33/hr\n");
    printf("3) $10.00/hr\t\t4) $11.20/hr\n");
    printf("5) quit\n");
    for (int i = 0; i < 50; i++) printf("*");
    printf("\n");
}


int main()
{
    char choice;
    float DOLLAR_PER_HOUR;
    for (; print_menu(), 1;)
    {
        choice = getchar();
        while (getchar() != '\n') continue;
        switch (choice)
        {
            case '1':
                DOLLAR_PER_HOUR = 8.75;
                break;
            case '2':
                DOLLAR_PER_HOUR = 9.33;
                break;
            case '3':
                DOLLAR_PER_HOUR = 10.00;
                break;
            case '4':
                DOLLAR_PER_HOUR = 11.20;
                break;
            case '5':
                return 0;
            default:
                printf("Invalid choice, please enter again.\n");
                continue;
        }
        break;
    }

    printf("Enter the hours worked this week: ");
    float hours;
    scanf("%f", &hours);

    float gross_pay;
    gross_pay = (hours < SUPER_HOUR ? hours : SUPER_HOUR + (hours - SUPER_HOUR) * SUPER_RATE) * DOLLAR_PER_HOUR;
    float tax = 0;
    if (gross_pay <= TAX_BREAK1)
    {
        tax = gross_pay * TAX_RATE1;
    }
    else if (gross_pay <= TAX_BREAK2)
    {
        tax = TAX1 + (gross_pay - TAX_BREAK1) * TAX_RATE2;
    }
    else {
        tax = TAX2 + (gross_pay - TAX_BREAK2) * TAX_RATE3;
    }
    printf("Gross pay: %.2f\n", gross_pay);
    printf("Tax: %.2f\n", tax);
    printf("Net pay: %.2f\n", gross_pay - tax);

    return 0;
}