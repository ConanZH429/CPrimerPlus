#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

int main(void)
{
    char word[WORD_LEN];
    printf("Please enter a word: ");
    scanf("%s", word);
    
    for (int i = strlen(word) - 1; i >=0; i--) printf("%c", word[i]);

    return 0;
}