#include <stdio.h>

#define INCHES2CM 2.54
#define FEET2INCHES 12

int main(void)
{
    float height, inches;
    int feet;
    height = 1;
    while (height > 0)
    {
        printf("Enter a height in centimeters: ");
        scanf("%f", &height);

        if (height > 0)
        {
            inches = height / INCHES2CM;
            feet = (int)inches / FEET2INCHES;
            inches = inches - feet * FEET2INCHES;
            printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inches);
        }
    }

    return 0;
}