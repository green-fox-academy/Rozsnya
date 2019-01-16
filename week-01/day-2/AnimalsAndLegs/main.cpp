#include <iostream>

int main() {
    int chicken;
    int pig;
    std::cout << "How many Chickens do you have?" << std::endl;
    std::cin >> chicken;
    std::cout << "How many Pigs do you have?" << std::endl;
    std::cin >> pig;

    std::cout << "Your animals have " <<
    chicken * 2 + pig * 4 << "legs overall." << std::endl;

    return 0;
}