#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* appendA(char* string)
{
    strcat(string, "a");

    return string;
}

int main()
{
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string

    char myString[20];
    printf("Give me a word\n");
    scanf("%s", myString);
    printf("%s", appendA(myString));
    return 0;
}