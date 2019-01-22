#include <iostream>

int ValueFinder(int array[], int arrayLength, int x);


int main() {
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

    int myArray[9]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int value = 9;
    int length = (sizeof(myArray) / sizeof(myArray[0]));

    std::cout << ValueFinder(myArray, length, value) << std::endl;

    return 0;
}

int ValueFinder(int array[], int arrayLength, int x) {
    int y;
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] == x) {
            y = i;
        } else {
            y = 0;
        }
    }
    return y;
}