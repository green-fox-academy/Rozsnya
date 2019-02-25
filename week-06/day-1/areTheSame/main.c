#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringFunction(char* string1, char* string2)
{
    if (strcasecmp(string1, string2) == 0){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char word1[20];
    char word2[20];

    printf("Give me a word\n");
    scanf("%s", word1);
    printf("Give me a another\n");
    scanf("%s", word2);

    printf("%d", stringFunction(word1, word2));

    return 0;
}