#include <iostream>

void Swap(int &x, int &y) {
    int *myPointer = nullptr;
    int c = x;
    myPointer = &x;
    *myPointer = y;
    myPointer = &y;
    *myPointer = c;


}

int main() {
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;
    Swap(a, b);
    std::cout << a << " | " << b << std::endl;

    return 0;
}