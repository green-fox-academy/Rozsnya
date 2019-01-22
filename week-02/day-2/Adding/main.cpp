#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;
    int sum;
    int* myPointer = &sum;
    *myPointer = a + b;

    std::cout << sum << std::endl;

    return 0;
}