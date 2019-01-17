#include <iostream>
#include <string>
std::string appendAFunc(std::string x);
int main() {
    std::string typo = "Chinchill";


    std::cout << appendAFunc(typo) << std::endl;
    return 0;
}
std::string appendAFunc(std::string x){
    x += "a";
    return x;
}