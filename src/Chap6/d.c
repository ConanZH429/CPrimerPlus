#include <stdio.h>

int main(void)
{
    char ch = 'A';
    for (int i = 0; i < 6; printf("\n"), i++)
        for (int j = 0; j <= i; printf("%c", ch++), j++);

    return 0;
}