#include <stdio.h>

#define LEN 8

int main(void)
{
    int a[LEN];
    printf("Please enter %d numbers: ", LEN);
    for (int i = 0; i < LEN; i++) scanf("%d", &a[i]);
    for (int i = LEN - 1; i >= 0; i--) printf("%d ", a[i]);

    return 0;
}