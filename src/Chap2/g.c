#include <stdio.h>

void Smile(void);

void Smile(void)
{
    printf("Smile!");
}

int main(void)
{
    Smile(); Smile(); Smile(); printf("\n");
    Smile(); Smile(); printf("\n");
    Smile(); printf("\n");

    return 0;
}