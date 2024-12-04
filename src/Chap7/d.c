#include <stdio.h>

#define STOP '#'

int main(void)
{
    char ch;
    while ((ch = getchar()) != STOP)
    {
        if (ch == '.')
            putchar('!');
        else if (ch == '!')
        {
            putchar('!');
            putchar('!');
        }
        else
            putchar(ch);
    }

    return 0;
}