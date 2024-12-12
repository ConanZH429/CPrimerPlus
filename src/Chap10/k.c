#include <stdio.h>

#define ROW 3
#define COL 5

void print_arr(int m, int n, double arr[m][n]);
void mul2_arr(int m, int n, double arr[m][n]);
void mul2_ptr(int m, int n, double *arr);

int main(void)
{
    double arr[ROW][COL] = {
        {1.0, 2.0, 3.0, 4.0, 5.0},
        {6.0, 7.0, 8.0, 9.0, 10.0},
        {11.0, 12.0, 13.0, 14.0, 15.0}
    };
    print_arr(ROW, COL, arr);
    mul2_arr(ROW, COL, arr);
    print_arr(ROW, COL, arr);
    mul2_ptr(ROW, COL, &arr[0][0]);
    print_arr(ROW, COL, arr);

    return 0;
}

void print_arr(int m, int n, double arr[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%f ", arr[i][j]);
        printf("\n");
    }
}

void mul2_arr(int m, int n, double arr[m][n])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] *= 2;
}

void mul2_ptr(int m, int n, double *arr)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            *(arr + i * n + j) *= 2;
}