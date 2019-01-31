#include <iostream>
#include <string>

// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a '*'.

std::string charAdder(std::string text, int n)
{
    std::string resultString;
    const char *p;
    p = &text[28 - n];

    if(n == 0){
        return resultString;
    }
    if(n % 2 == 0){
        resultString += *p;
        return resultString + charAdder(text, (n - 1));
    } else {
        resultString += "*";
        resultString += *p;
        resultString += "*";
        return resultString + charAdder(text, (n - 1));
    }
}

int main() {
    std::string text = "Recursion is fcking bullshit";
    int n = text.size();//(28)

    std::cout << charAdder(text, n) << std::endl;
    return 0;
}