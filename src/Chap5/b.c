#include <stdio.h>

#define RANGE 10

int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    int left_num = num + RANGE;
    while (num <= left_num)
    {
        printf("%d\n", num);
        num++;
    }

    return 0;
}