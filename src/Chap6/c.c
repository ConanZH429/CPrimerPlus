#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 6; printf("\n"), i++)
        for (char j = 'F'; j >= 'F' - i; printf("%c", j--));

    return 0;
}