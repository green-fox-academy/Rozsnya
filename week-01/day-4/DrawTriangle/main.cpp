#include <iostream>
#include <string>
int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was
    int input;
    std::string asd;
    std::cout << "give me a number" << std::endl;
    std::cin >> input;

    for (int i = 0; i < input; i++){
             asd += "*";
                std::cout << asd << std::endl;
    }

    return 0;
}