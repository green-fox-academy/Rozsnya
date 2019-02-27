#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int* pointerEven = NULL;
    int* pointerOdd = NULL;
    pointerEven = (int*)malloc(10 * sizeof(int));
    for(int i = 0; i < 10; i++){
        pointerEven[i] = i*2;
    }
    pointerOdd = (int*)malloc(10 * sizeof(int));
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0) {
            pointerOdd[i] = i+1;
        } else {
            pointerOdd[i] = i + 10;
        }
    }
    pointerEven = (int*)realloc(pointerEven, 20 * sizeof(int));
    for(int i = 0; i < 10; i++){
        pointerEven[10+i] = pointerOdd[i];
    }
    for(int i = 19; i >= 0; i--){
        printf("%d ", pointerEven[i]);
    }
    free(pointerEven);
    pointerEven = NULL;
    free(pointerOdd);
    pointerOdd = NULL;
    return 0;
}