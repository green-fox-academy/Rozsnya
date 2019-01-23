#include <iostream>
#include <fstream>
#include <string>

int myFunc(std::string x) {
    std::ifstream myFile(x);
    std::string text;
    int a = 0;
    if (myFile.is_open()) {
        while (myFile >> text) {
            a++;
        }
    }else{
        a = 0;
    }
    return a;
}


int main() {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::cout << myFunc("my-file.txt") << std::endl;

    return 0;
}