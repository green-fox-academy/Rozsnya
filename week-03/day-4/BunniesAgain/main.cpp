#include <iostream>

// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).

int bunniesFloppyEars(int n, int m, int k) {
    if (n > 0) {
        if(n % 2 != 0) {
            return m + (bunniesFloppyEars(n - 1, m, k));
        }else{
            return k + (bunniesFloppyEars(n - 1, m, k));
        }
    } else {
        return n;
    }
}

int main() {

    std::cout << bunniesFloppyEars(11, 2, 3) << std::endl;
    return 0;
}