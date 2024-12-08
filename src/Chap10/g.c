#include <stdio.h>

#define SIZE 10

void copy_ptr(double *source, double *target, int n);

int main(void)
{
    double source[SIZE][SIZE] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.1},
        {11.1, 12.2, 13.3, 14.4, 15.5},
        {16.6, 17.7, 18.8, 19.9, 20.1},
        {21.1, 22.2, 23.3, 24.4, 25.5},
        {26.6, 27.7, 28.8, 29.9, 30.1},
        {31.1, 32.2, 33.3, 34.4, 35.5},
        {36.6, 37.7, 38.8, 39.9, 40.1},
        {41.1, 42.2, 43.3, 44.4, 45.5},
        {46.6, 47.7, 48.8, 49.9, 50.1}
    };
    double target[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        copy_ptr(*(source+i), *(target+i), SIZE);
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%.1f ", target[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void copy_ptr(double *source, double *target, int n)
{
    for (int i = 0; i < n; i++)
        *(target+i) = *(source+i);
}