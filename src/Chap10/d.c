#include <stdio.h>

#define SIZE 10

int max_index(double arr[], int n);

int main(void)
{
    double arr[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};

    printf("The maximum value in the array is at index %d\n", max_index(arr, SIZE));

    return 0;
}

int max_index(double arr[], int n)
{
    int index = 0;
    double max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}