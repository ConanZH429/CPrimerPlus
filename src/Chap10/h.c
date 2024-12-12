#include <stdio.h>

#define SIZE7 7
#define SIZE3 3

void copy_arr(double target[], double source[], int n);
void copy_ptr(double *target, double *source, int n);

int main(void)
{
    double target1[SIZE3], target2[SIZE3];
    double source[SIZE7] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};

    copy_arr(target1, &source[2], SIZE3);
    printf("target1: ");
    for (int i = 0; i < SIZE3; i++)
        printf("%.1f ", target1[i]);
    printf("\n");

    copy_ptr(target2, &source[2], SIZE3);
    printf("target2: ");
    for (int i = 0; i < SIZE3; i++)
        printf("%.1f ", target2[i]);
    printf("\n");

    return 0;
}

void copy_arr(double target[], double source[], int n)
{
    for (int i = 0; i < n; i++)
        target[i] = source[i];
}

void copy_ptr(double *target, double *source, int n)
{
    for (int i = 0; i < n; i++)
        *(target + i) = *(source + i);
}