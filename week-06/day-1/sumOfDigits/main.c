#include <stdio.h>
#include <stdlib.h>

int sumOddEven(int x, int y)
{
    if((x + y) % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0

    int num1;
    int num2;
    printf("Give me a number: ");
    scanf("%d", &num1);
    printf("Give me a another: ");
    scanf("%d", &num2);
    printf("%d", sumOddEven(num1, num2));


    return 0;
}