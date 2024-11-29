#include <stdio.h>


void br(void);
void ic(void);

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}

int main(void)
{
    // the first line
    br();
    printf(", ");
    ic();
    printf("\n");

    // the second line
    ic();
    printf("\n");

    // the third line
    br();

    return 0;
}