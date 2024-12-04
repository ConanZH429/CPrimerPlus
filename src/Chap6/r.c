#include <stdio.h>

#define DUNBAR 150

int main(void)
{
    int friends_num = 5, week = 0;
    printf("week | friends\n");
    while (friends_num <= DUNBAR)
    {
        week++;
        friends_num -= week;
        friends_num *= 2;
        printf("%4d | %7d\n", week, friends_num);
    }

    return 0;
}