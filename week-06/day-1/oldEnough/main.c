#include <stdio.h>
#include <stdlib.h>

char* oldEnough(int age){
    if (age >= 18){
        return "You can buy alcohol";
    } else {
        return "Grow up dude";
    }
}

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int userAge;
    printf("How old are you?\n");
    scanf("%d", &userAge);
    printf(oldEnough(userAge));

    return 0;
}