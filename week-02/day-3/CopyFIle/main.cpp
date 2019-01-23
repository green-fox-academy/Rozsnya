#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

bool myFunc(std::string fileOne, std::string fileTwo){
    std::string text;
    std::ifstream myFile1(fileOne);
    std::ofstream myFile2(fileTwo);


    while(std::getline(myFile1, text)){
        myFile2 << text << std::endl;
    }
    return true;
}

int main() {

    std::cout << myFunc("original.txt", "copy.txt") << std::endl;

    return 0;
}