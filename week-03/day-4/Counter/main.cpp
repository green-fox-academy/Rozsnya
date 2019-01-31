#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.

void counter(int n)
{
    if(n >= 0) {
        std::cout << n << std::endl;
        counter(n - 1);
    }
}

int main() {

    counter(5);
    return 0;
}