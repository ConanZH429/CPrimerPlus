#include <stdio.h>

int main(void)
{
    printf("Please enter a character: ");
    char first_ch;
    scanf("%c", &first_ch);

    for (int row = 0; row < 5; printf("\n"), row++)
    {
        char ch;
        for (int space = 0; space < 4 - row; space++) printf(" ");
        for (ch = first_ch; ch <= first_ch + row; ch++) printf("%c", ch);
        for (--ch; --ch >= first_ch;) printf("%c", ch);
    }

    return 0;
}