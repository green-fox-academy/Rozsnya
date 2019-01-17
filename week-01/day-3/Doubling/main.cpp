#include <iostream>
#include <string>

int doubling(int x);

int main(int argc, char* args[]) {
   int baseNum = 123;

   doubling(baseNum);

    return 0;
}
int doubling(int x) {
    std::cout << x*2 << std::endl;
    return 0;
}