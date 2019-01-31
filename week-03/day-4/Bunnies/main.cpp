#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int bunniesFloppyEars(int n, int m) {
    if (n > 0) {
        return m + (bunniesFloppyEars(n-1, m)) ;
    } else {
        return n;
    }
}

int main() {
    int bunny = 20;
    int earsOfBunny = 2;

    std::cout << bunniesFloppyEars(bunny,earsOfBunny) << std::endl;
    return 0;
}