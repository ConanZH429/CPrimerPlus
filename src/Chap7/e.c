#include <stdio.h>

#define STOP '#'

int main(void)
{
    char ch;
    while ((ch = getchar()) != STOP)
    {
        switch (ch)
        {
            case '.':
                putchar('!');
                break;
            case '!':
                putchar('!');
                putchar('!');
                break;
            default:
                putchar(ch);
                break;
        }
    }

    return 0;
}