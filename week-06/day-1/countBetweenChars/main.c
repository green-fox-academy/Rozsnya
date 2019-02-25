#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char repeatingChar(char *string)
{
    char myChar = '-';
    for (int i = 0; i < strlen(string); i++) {
        for (int j = strlen(string); j > 0; j--) {
            if (string[i] == string[j]) {
                myChar = string[i];
                break;
            }
        }
    }
    return myChar;
}

int countBetweenChars(char *string)
{
    char repChar = repeatingChar(string);
    int firstApp;
    int secondApp;
    for(int i = 0; i < strlen(string); i++){
        if(string[i] == repChar){
            firstApp = i;
            break;
        }
    }
    for(int j = 0; j < strlen(string); j++){
        if(string[j] == repChar && j != firstApp){
            secondApp = j;
        }
    }
    return secondApp - firstApp - 1;
}

int main()
{
    // Create a function which takes a string as a parameter and
    // returns the number of characters between two repeating characters
    // the repeating char can be a local variable in the function itself or
    // it can be passed to the function as parameter

    char *word = "Programming";

    // the output should be: 6 (in this case the repeating char was 'g')
    printf("%d", countBetweenChars(word));

    return 0;
}