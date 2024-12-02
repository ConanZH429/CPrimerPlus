#include <stdio.h>
#include <string.h>
#define MAX_NAME 100

int main(void)
{
    char name[MAX_NAME];
    printf("Please enter your name: ");
    scanf("%s", name);

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    int name_len = strlen(name);
    printf("%*s\n", name_len+3, name);

    return 0;
}