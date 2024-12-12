#include <stdio.h>

#define SIZE 6

void add(int n, double A[n], double B[n], double C[n]);

int main(void)
{
    double A[SIZE] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    double B[SIZE] = {5.0, 4.0, 3.0, 2.0, 1.0, 0.0};
    double C[SIZE];

    add(SIZE, A, B, C);

    for (int i = 0; i < SIZE; i++)
        printf("%f ", C[i]);

    return 0;
}

void add(int n, double A[n], double B[n], double C[n])
{
    for (int i = 0; i < n; i++)
        C[i] = A[i] + B[i];
}