#include <stdio.h>

#define SIZE 5

void copy_arr(double target[], double source[], int n);
void copy_ptr(double *target, double *source, int n);
void copy_ptrs(double *target, double *begin_ptr, double *end_ptr);

int main(void)
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE], target2[SIZE], target3[SIZE];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    printf("source: ");
    for (int i = 0; i < SIZE; i++)
        printf("%.1f ", target1[i]);

    printf("\ntarget1: ");
    for (int i = 0; i < SIZE; i++)
        printf("%.1f ", target1[i]);

    printf("\ntarget2: ");
    for (int i = 0; i < SIZE; i++)
        printf("%.1f ", target2[i]);

    printf("\ntarget3: ");
    for (int i = 0; i < SIZE; i++)
        printf("%.1f ", target3[i]);

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

void copy_ptrs(double *target, double *begin_ptr, double *end_ptr)
{
    while (begin_ptr < end_ptr)
        *target++ = *begin_ptr++;
}