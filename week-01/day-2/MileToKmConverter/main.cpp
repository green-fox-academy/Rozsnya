#include <iostream>

int main() {
    int distance;
    std::cout << "How far is Budapest from London in KM.?" << std::endl,
    std::cin >> distance;
    std::cout << "It's " << distance * 1.6 << " in miles." << std::endl;
    return 0;
}