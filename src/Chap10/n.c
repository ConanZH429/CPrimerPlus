#include <stdio.h>

void read_size(int *m, int *n);
void read_arr(int m, int n, double arr[m][n]);
void mean_row(int n, double arr[n]);
void mean(int m, int n, double arr[m][n]);
void get_max(int m, int n, double arr[m][n]);

int main(void)
{
    int m, n;
    read_size(&m, &n);
    double arr[m][n];

    read_arr(m, n, arr);
    mean_row(n, arr[0]);
    mean_row(n, arr[1]);
    mean_row(n, arr[2]);
    mean(m, n, arr);
    get_max(m, n, arr);

    return 0;
}

void read_size(int *m, int *n)
{
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", m, n);
}

void read_arr(int m, int n, double arr[m][n])
{
    printf("Enter the elements of the array: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%lf", &arr[i][j]);
}

void mean_row(int n, double arr[n])
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    printf("Mean: %f\n", sum / n);
}

void mean(int m, int n, double arr[m][n])
{
    double sum = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            sum += arr[i][j];
    printf("Mean: %f\n", sum / (m * n));
}

void get_max(int m, int n, double arr[m][n])
{
    double max = arr[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (arr[i][j] > max)
                max = arr[i][j];
    printf("Max: %f\n", max);
}