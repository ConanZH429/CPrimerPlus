#include <stdio.h>

#define SIZE 10

double sub_max_min(double arr[], int n);

int main(void)
{
    double arr[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 9.9, 8.8, 7.7, 10.1};

    printf("The difference between the largest and smallest elements of the array is: %.2f\n", sub_max_min(arr, SIZE));

    return 0;
}

double sub_max_min(double arr[], int n)
{
    double max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    return max - min;
}