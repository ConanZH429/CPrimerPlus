#include <stdio.h>

#define LEN 8

int main(void)
{
    char c[8];
    for (int i = 0; i < LEN; i++) scanf(" %c", &c[i]);
    for (int i = LEN - 1; i >= 0; i--) printf("%c ", c[i]);

    return 0;
}