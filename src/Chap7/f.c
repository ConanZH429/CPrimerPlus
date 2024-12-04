#include <stdio.h>

#define STOP '#'

int main()
{
    char prev_c, curr_c;
    int count = 0;
    prev_c = 'a';
    while ((curr_c = getchar()) != STOP)
    {
        if (prev_c == 'e' && curr_c == 'i') count++;
        prev_c = curr_c;
    }
    printf("The number of 'ei' is %d\n", count);

    return 0;
}