#include <iostream>

int main() {
    int a = 3;
    a += 10;
    std::cout << a << std::endl;
    int b = 100;
    b -= 7;
    std::cout << b << std::endl;
    int c = 44;
    c *= 2;
    std::cout << c << std::endl;
    int d = 125;
    d /= 5;
    std::cout << d << std::endl;
    int e = 8;
    e *= e*e;
    std::cout << e << std::endl;
    int f1 = 123;
    int f2 = 345;
    bool f = f1 > f2;
    std::cout << f << std::endl;
    int g1 = 350;
    int g2 = 200;
    bool g = (2 * g2 > g1);
    std::cout << g << std::endl;
    int h = 135798745;
    bool h1 = (h % 11) == 0;
    std::cout << h1 << std::endl;
    int i1 = 10;
    int i2 = 3;
    bool i = (i1 > (i2 * i2) & i1 < (i2 * i2 * i2));
    std::cout << i << std::endl;
    int j = 1521;
    bool j1 = (j % 3) == 0 | (j % 5) == 0;
    std::cout << j1 << std::endl;
    std::string k = "Apple";
    k = k + k + k + k;
    std::cout << k << std::endl;
    return 0;
}