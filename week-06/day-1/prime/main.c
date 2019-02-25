#include <stdio.h>
#include <stdlib.h>

int isPrime(int x)
{
    int prime = 1;
    for(int i = 2; i < (x / 2); i++){
        if(x % i == 0){
            prime = 0;
            break;
        }
    }
    return prime;
}

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)
    int number;
    printf("Give me a number: ");
    scanf("%d", &number);
    printf("%d", isPrime(number));

    return 0;
}