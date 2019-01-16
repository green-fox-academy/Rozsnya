#include <iostream>

int main() {
    int num1, num2, num3, num4, num5;
    std::cout << "Tell me 5 numbers, 1 at a time" << std::endl;
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;
    std::cin >> num4;
    std::cin >> num5;
    std::cout << "Sum: " << num1 + num2 + num3 + num4 + num5
              << ", Avarage: "
              << (num1 + num2 + num3 + num4 + num5) / 5 << std::endl;
    return 0;
}