#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5

    int num1;
    int num2;

    std::cout << "give me a number" << std::endl;
    std::cin >> num1;
    std::cout << "give me a bigger number" << std::endl;
    std::cin >> num2;

    std::cout << std::endl;
    std::cout << std::endl;

    if (num1 >= num2)
        std::cout << "the second number should be bigger" << std::endl;
    else
        for(int i = 0; i < ((num2 - num1)+1); i++)
            std::cout << num1 + i << std::endl;


    return 0;
}