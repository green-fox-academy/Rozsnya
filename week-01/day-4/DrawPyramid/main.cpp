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
    std::string asd;
    std::cout << "give me a number" << std::endl;
    std::cin >> input;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < input * 2; i++){
        for (int j = input*2; j*2 > i; j--){
            if(j % 2 == 0 && i != input * 2 && j != input * 2){
                std::cout << " ";
            }else if(i == 0 && j == input * 2){
                std::cout << "          ";
            }
        }
        asd += "*";
        if(i % 2 == 0){
            std::cout << asd << std::endl;
        }else{
            asd = asd;
        }
    }
    return 0;
}