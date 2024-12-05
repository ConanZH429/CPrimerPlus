#include <stdio.h>
#include <ctype.h>

int char_pos(char);

int main(void)
{
    char c;
    while ((c = getchar()) != EOF)
    {
        int pos = char_pos(c);
        if (pos == 0)
        {
            printf("\\n is not a letter\n");
        }
        else if (pos == -1)
        {
            printf("%c is not a letter\n", c);
        }
        else
        {
            printf("%c is at position %d\n", c, pos);
        }
    }

    return 0;
}

int char_pos(char c)
{
    if (isalpha(c))
    {
        return tolower(c) - 'a' + 1;
    }
    else if (c == '\n')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}