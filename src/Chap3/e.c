#include <stdio.h>

int main(void)
{
    int age;
    float seconds = 3.156e7f;
    printf("Please enter your age: \n");
    scanf("%d", &age);
    double age_seconds = age * seconds;
    printf("Your age in seconds is: %lld\n", (long long)age_seconds);

    return 0;
}