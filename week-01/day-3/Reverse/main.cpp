#include <iostream>

int main() {

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj[]{3, 4, 5, 6, 7};
    int one = aj[0];
    int two = aj[1];
    for(int i = 0; i < 5; i++){
        std::cout << aj[i];
    }
    std::cout << std::endl;
    for(int j = 0; j < 5;j++){
        aj[j] = aj[4-j];
    }
    aj[4] = one;
    aj[3] = two;
    for(int k = 0; k < 5; k++){
        std::cout << aj[k];
    }
    return 0;
}