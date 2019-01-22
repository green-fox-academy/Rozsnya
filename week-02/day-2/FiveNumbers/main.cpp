#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again

    int userInput[5];
    int* myPointer = userInput;

    for(int i = 0; i < 5; i++){
        std::cout << "Give me a number" << std::endl;
        std::cin >> userInput[i];
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << *(myPointer + i) << std::endl;
    }

    return 0;
}