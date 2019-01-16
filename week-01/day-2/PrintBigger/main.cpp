#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Tell me two numbers." << std::endl;
    std::cin >> num1;
    std::cin >> num2;
    if (num1 > num2) {
        std::cout << num1 << " is bigger" << std::endl;
    }else{
        std::cout << num2 << " is bigger" << std::endl;
    }
    return 0;
}