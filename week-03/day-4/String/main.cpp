#include <iostream>
#include <string>
#include <algorithm>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

std::string xToY(std::string::const_iterator it, std::string::const_iterator end)
{
    std::string myString;
    if (it == end){
        return myString;
    }
    myString += *it == 'x' ? 'y' : *it;
    return myString + xToY(it + 1, end);
}
int main() {

    std::string stringOfXs("asdxxxqwexxx");
    std::string stringOfYs;
    stringOfYs = xToY(stringOfXs.begin(), stringOfXs.end());
    std::cout << stringOfYs << std::endl;

    return 0;
}