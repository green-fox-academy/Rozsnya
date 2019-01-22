#include <iostream>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it


    int arraySize;
    std::cout << "Give me the array size" << std::endl;
    std::cin >> arraySize;
    int myArray[arraySize];
    int* p_large = &myArray[0];

    for(int i = 0; i < arraySize; i++){
        std::cout << "Give me numbers" << std::endl;
        std::cin >> myArray[i];
    }
    for(int i = 0; i < arraySize; i++){
        if (myArray[i] > *p_large){
            p_large = &myArray[i];
        }
    }

    std::cout << "The biggest number is: " << *p_large << " " << "and it's adress is: " << p_large << std::endl;


    return 0;
}