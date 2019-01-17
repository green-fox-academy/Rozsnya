#include <iostream>
#include <string>
int swap(int& a, int& b);

int main() {
    int a = 15;
    int b = 23;
    std::cout << a << " " << b << std::endl;
    swap(a, b);
    std::cout << a << " " << b << std::endl;
    return 0;
}

int swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;

    return 0;
}