#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was

    int input;
    std::cout << "give me a number" << std::endl;
    std::cin >> input;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < input; i++){
        for (int j = 0; j <= input * 2; j++){
            if(j < input - i || j > input + i){
                std::cout << " ";
            }else{
                std::cout << "*";
                }
            }
        std::cout << std::endl;
    }
    system("PAUSE");
    return 0;
}