#include <iostream>

int main() {
    int a = 123;
    int b = 526;
    int c = 123;
    a = b;
    b = c;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}