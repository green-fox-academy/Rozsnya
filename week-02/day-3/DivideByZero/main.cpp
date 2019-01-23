#include <iostream>
#include <fstream>
#include <string>
#include <exception>


int Divide(int x) {
    try {
        if (x == 0) {
            throw 1;
        }
        std::cout << 10 / x << std::endl;
    } catch (int) {
        std::cout << "Can't divide by 0" << std::endl;
    }
    return 0;
}

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0
    int userInput;
    std::cout << "Give me a number" << std::endl;
    std::cin >> userInput;

    Divide(userInput);

    return 0;
}