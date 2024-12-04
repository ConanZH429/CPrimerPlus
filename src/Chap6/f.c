#include <stdio.h>

int main(void)
{
    printf("Please enter the lower and upper limits of the table: ");
    int lower, upper;
    scanf("%d %d", &lower, &upper);

    printf("%-8s %-8s %-8s\n", "number", "square", "cube");
    for (; lower <= upper; lower++) printf("%-8d %-8d %-8d\n", lower, lower * lower, lower * lower * lower);

    return 0;
}