#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int *pointer = NULL;
    int limit;
    printf("Give me a number: ");
    scanf("%d", &limit);
    pointer = (int*)malloc(limit * sizeof(int));
    printf("Give me %d numbers\n", limit);
    int* numbers[limit];
    for(int i = 0; i < limit; i++){
        scanf("%d", &pointer[i]);
    }
    int pointerSum = 0;
    for(int i = 0; i < limit; i++){
        pointerSum += pointer[i];
    }
    int *sumPointer = NULL;
    sumPointer = (int*)malloc(pointerSum * sizeof(int));
    for(int i = 0; i < pointerSum; i++){
        sumPointer[i] = i+1;
        printf("%d ", sumPointer[i]);
    }
    free(pointer);
    pointer = NULL;
    free(sumPointer);
    sumPointer = NULL;
    return 0;
}