#include <stdio.h>

int main(void)
{
    float height;
    char name[100];

    printf("Please enter your height in cm: \n");
    scanf("%f", &height);
    printf("Please enter your name: \n");
    scanf("%s", name);

    float height_m = height / 100;

    printf("%s, you are %fm tall.\n", name, height_m);

    return 0;
}