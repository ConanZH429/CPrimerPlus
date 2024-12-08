#include <stdio.h>

#define SIZE 10

void swap(double *a, double *b);
void sort_reverse(double arr[], int n);

int main(void)
{
    double arr[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};

    sort_reverse(arr, SIZE);

    for (int i = 0; i < SIZE; i++)
        printf("%.1f ", arr[i]);
    printf("\n");

    return 0;
}

void swap(double *a, double *b)
{
    double tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_reverse(double arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] > arr[j-1])
                swap(&arr[j], &arr[j-1]);
        }
    }
}