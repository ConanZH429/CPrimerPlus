#include <stdio.h>

int main()
{
    printf("Type char has a size of \t %zd bytes\n", sizeof(char));
    printf("Type int has a size of \t %zd bytes\n", sizeof(int));
    printf("Type long has a size of \t %zd bytes\n", sizeof(long));
    printf("Type long long has a size of \t %zd bytes\n", sizeof(long long));

    printf("Type float has a size of \t %zd bytes\n", sizeof(float));
    printf("Type double has a size of \t %zd bytes\n", sizeof(double));
    printf("Type long double has a size of \t %zd bytes\n", sizeof(long double));

    return 0;
}