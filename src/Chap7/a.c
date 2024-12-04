#include <stdio.h>
#define SPACE ' '
#define NEWLINE '\n'

int main(void)
{
    char ch;
    int space_count = 0, newline_count = 0, other_count = 0;
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case SPACE:
                space_count++;
                break;
            case NEWLINE:
                newline_count++;
                break;
            default:
                other_count++;
        }
    }
    printf("space count: %d, newline count: %d, other count: %d\n", space_count, newline_count, other_count);
}