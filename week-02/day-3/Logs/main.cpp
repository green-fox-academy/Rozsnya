#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

std::vector<std::string> unique(std::vector<std::string> x) {
    std::vector<std::string> myVec = x;
//  for(int i = 0; i < x.size(); i++){
//      if(i == 0){
//          myVec.push_back(x[i]);
//      }else if(x[i] != myVec[i]){
//          myVec.push_back(x[i]);
//      }
//  }
    std::sort(myVec.begin(), myVec.end());
    myVec.erase(std::unique(myVec.begin(), myVec.end()), myVec.end());
    return myVec;
}

double ratio(double a, double b) {
    return b / a;
}

int main() {
    double p = 0;
    double g = 0;

    std::ifstream myFile("log.txt");
    std::string day;
    std::string month;
    int number;
    std::string time;
    int year;
    std::string IP;
    std::string op;
    std::string slash;
    std::vector<std::string> mainVec;

    while (myFile >> day >> month >> number >> time >> year >> IP >> op >> slash) {
        std::cout << day << ", " << month << ", " << number << ", " << time << ", " << year << ", " << IP << ", " << op
                  << ", " << slash << std::endl;
        mainVec.push_back(IP);
        if (op == "POST") {
            p++;
        } else {
            g++;
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "GET / POST Ratio is: " << ratio(p, g) << std::endl;
    std::cout << "Unique IP adresses: " << std::endl;
    std::vector<std::string> resultVec = unique(mainVec);

    for (int i = 0; i < resultVec.size(); i++) {
        std::cout << resultVec[i] << std::endl;
    }

    return 0;
}