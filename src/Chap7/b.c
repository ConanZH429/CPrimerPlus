#include <stdio.h>

#define STOP '#'
#define EIGHT 8

int main(void)
{
    int i = 0;
    char ch;
    while ((ch = getchar()) != STOP)
    {
        i++;
        printf("%c-%d ", ch, ch);
        if (i % EIGHT == 0)
        {
            printf("\n");
        }
    }

    return 0;
}