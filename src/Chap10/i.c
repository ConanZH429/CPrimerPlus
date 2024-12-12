#include <stdio.h>

#define ROW 3
#define COL 5

void copy_arr(int m, int n, double target[m][n], double source[m][n]);
void copy_ptr(int m, int n, double *target, double *source);
void show_arr(int m, int n, double arr[m][n]);

int main(void)
{
    double source[ROW][COL] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.1},
        {11.1, 12.2, 13.3, 14.4, 15.5}
    };
    double target1[ROW][COL], target2[ROW][COL];

    copy_arr(ROW, COL, target1, source);
    copy_ptr(ROW, COL, &target2[0][0], &source[0][0]);

    printf("source:\n");
    show_arr(ROW, COL, source);
    printf("target1:\n");
    show_arr(ROW, COL, target1);
    printf("target2:\n");
    show_arr(ROW, COL, target2);

    return 0;
}

void copy_arr(int m, int n, double target[m][n], double source[m][n])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            target[i][j] = source[i][j];
}

void copy_ptr(int m, int n, double *target, double *source)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            *(target + i * n + j) = *(source + i * n + j);
}

void show_arr(int m, int n, double target[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%.1f ", target[i][j]);
        printf("\n");
    }
}