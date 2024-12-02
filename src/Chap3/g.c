#include <stdio.h>

int main(void)
{
    float inches2cm = 2.54;

    float height;
    printf("Please enter your height in inches: ");
    scanf("%f", &height);
    float cm = height * inches2cm;
    printf("Your height in cm is: %.4f\n", cm);

    return 0;
}