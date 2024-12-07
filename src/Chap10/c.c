#include <stdio.h>

#define SIZE 10

int max_arr(int arr[], int n);

int main(void)
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("The maximum value in the array is %d\n", max_arr(arr, SIZE));

    return 0;
}

int max_arr(int arr[], int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    
    return max;
}