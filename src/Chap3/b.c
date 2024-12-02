#include <stdio.h>

int main(void)
{
    printf("Please enter a ASCII code: \n");
    char ASCII_code;
    scanf("%d", &ASCII_code);

    printf("The ASCII code %d presents the character %c.\n", ASCII_code, ASCII_code);

    return 0;
}