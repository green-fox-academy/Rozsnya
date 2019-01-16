#include <iostream>

int main() {
    std::cout << true << std::endl;
    std::cout << false << std::endl;
    std::cout << !false << std::endl;
    std::cout << !true << std::endl;
    std::cout << (true && true) << std::endl;
    std::cout << (true && false) << std::endl;
    std::cout << (false && true) << std::endl;
    std::cout << (false && false) << std::endl;
    std::cout << (true || true) << std::endl;
    std::cout << (true || false) << std::endl;
    std::cout << (false || true) << std::endl;
    std::cout << (false || false) << std::endl;
    return 0;
}