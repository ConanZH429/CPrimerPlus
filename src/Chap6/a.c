#include <stdio.h>

#define NUM 26

int main(void)
{
    char ch[NUM];

    for (char i = 'a'; i <= 'z'; i++)
    {
        ch[i - 'a'] = i;
    }

    for (char i = 0; i < NUM; i++)
    {
        printf("%c ", ch[i]);
    }

    return 0;
}