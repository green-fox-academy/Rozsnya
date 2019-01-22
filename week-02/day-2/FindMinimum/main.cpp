#include <iostream>

int* Minimum(int array[], int arrayLength){
    int* y = &array[0];
    for(int i = 0; i < arrayLength; i++){
        if (array[i] < *y){
            y = &array[i];
        }
    }



    return y;
}

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int length = (sizeof(numbers)/sizeof(numbers[0]));
    std::cout << "Address :" << Minimum(numbers, length) << " | " << "Value :" << *(Minimum(numbers, length)) << std::endl;


    return 0;
}