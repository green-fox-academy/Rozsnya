#include <iostream>
#include <string>

int main() {
    std::string user;
    std::cout << "What's your name?" << std::endl;
    std::cin >> user;

    std::cout << "Hello" << user << std::endl;
    return 0;
}