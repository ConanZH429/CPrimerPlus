#include <stdio.h>
#define MAX_NAME 100


int main(void)
{
    char first_name[MAX_NAME], last_name[MAX_NAME];
    printf("Please enter your name: ");
    scanf("%s %s", first_name, last_name);

    printf("Hello, %s %s!\n", first_name, last_name);

    return 0;
}