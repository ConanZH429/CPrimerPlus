#include <stdio.h>

int main(void)
{
    float Mbs, MB;
    printf("Please enter your download speed in Mbs: ");
    scanf("%f", &Mbs);
    printf("Please enter the size of the file in Mb: ");
    scanf("%f", &MB);

    float Mb = MB * 8;
    float time = Mb / Mbs;

    printf("At %.2f megabits per second, a file of %.2f megabytes \ndownloads in %.2f seconds.\n", Mbs, MB, time);

    return 0;
}