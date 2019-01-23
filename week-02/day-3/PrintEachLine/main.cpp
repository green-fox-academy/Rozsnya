#include <iostream>
#include <fstream>
#include <string>

int main () {
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory
    std::ifstream myFile("my-file.txt");
    std::string text;
    while(myFile >> text){
    std::cout << text << std::endl;
    }


    return 0;
}