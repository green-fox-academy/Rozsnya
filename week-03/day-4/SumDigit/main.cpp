#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int sumDigit(int n) {
    if (n < 10) {
        return n;
    } else {
        return sumDigit(n / 10) + sumDigit(n % 10);
    }
}
int main() {
    int n = 8;
    int m = 15;
    int o = 153;
    int p = 9999;
    int q = 21314;

    std::cout << sumDigit(n) << std::endl;
    std::cout << sumDigit(m) << std::endl;
    std::cout << sumDigit(o) << std::endl;
    std::cout << sumDigit(p) << std::endl;
    std::cout << sumDigit(q) << std::endl;

    return 0;
}