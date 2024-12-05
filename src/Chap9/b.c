#include <stdio.h>

void chline(char, int ,int);

int main(void)
{
    char ch = 'x';
    int i = 5, j = 7;
    chline(ch, i, j);
    return 0;
}

void chline(char ch, int i, int j)
{
    for (int j_=0; j_<j; printf("\n"), j_++)
        for (int i_=0; i_<i; printf("%c", ch), i_++);
}