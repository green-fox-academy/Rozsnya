#include <iostream>

int main() {


    // - Create an array variable named `ai`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Print the sum of the elements in `ai`


    int ai[]{3, 4, 5, 6, 7};
    int sumai = 0;

    for(int i = 0; i < 5; i++){
        sumai += ai[i];
    }

    std::cout << sumai << std::endl;
    return 0;
}