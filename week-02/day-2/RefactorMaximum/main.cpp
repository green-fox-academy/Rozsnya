#include <iostream>
#include <string>

int* Minimum(int array[], int arrayLength){
    int* y = &array[0];
    for(int i = 0; i < arrayLength; i++){
        if (array[i] < *y){
            y = &array[i];
        }
    }
    return y;
}
int* Maximum(int array[], int arrayLength){
    int* y = &array[0];
    for(int i = 0; i < arrayLength; i++){
        if (array[i] > *y){
            y = &array[i];
        }
    }
    return y;
}
int main()
{
    // Refactor time!
    // use your 'refactor_maximum.cpp', solve the same exercise by creating a separate function
    // for each functionality

    std::string decide = "";
    int myArraySize = 0;
    std::cout << "Give me the array size" << std::endl;
    std::cin >> myArraySize;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    int myArray[myArraySize];
    for(int i = 0; i < myArraySize; i++){
        std::cout << "Give me the numbers of array" << std::endl;
        std::cin >> myArray[i];
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    for(int i = 0; i < myArraySize; i++){
        std::cout << myArray[i] << std::endl;
    }
    std::cout << "max or min? (lowercase)" << std::endl;
    std::cin >> decide;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;


    if(decide == "max" ){
        std::cout << *(Maximum(myArray, myArraySize)) << std::endl;
    }else if(decide == "min"){
        std::cout << *(Minimum(myArray, myArraySize)) <<std::endl;
    }else{
        std::cout << "Wrong input" << std::endl;
    }
    return 0;
}