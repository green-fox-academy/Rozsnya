#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringLength(char* name)
{
    int length = 0;
    for(int i = 0; i < 20; i++){
        if(name[i] == 0) {
            break;
        } else {
            length++;
        }
    }
    return length;
}
int strLength(char* name)
{
    return strlen(name);
}

int main()
{
    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercise with and without using string.h functions
    char userName[20] = "";
    puts("Whats your name?");
    gets(userName);
    printf("%d\n", stringLength(userName));
    printf("%d", strLength(userName));
    return 0;
}