#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.
int numberAdder(int n) {
    if (n < 1) {
        return 0;
    } else {
        return n + numberAdder(n - 1);
    }
}

int main() {
    int n = 6;

    std::cout << numberAdder(n) << std::endl;
    return 0;
}