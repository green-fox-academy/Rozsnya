#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8

int main()
{
    srand(time(NULL));

    int myNum = rand()%100 + 1;
    int guess = 0;
    while(myNum != guess){
        printf("Guess the number\n");
        scanf("%d", &guess);
        if(guess < myNum){
            printf("The stored number is higher\n");
        } else if(guess > myNum) {
            printf("The stored number is lower\n");
        } else {
            printf("You found the number: %d\n", guess);
        }
    }





    return 0;
}