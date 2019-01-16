#include <iostream>

int main() {
    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    int seconds = ((currentHours *60 * 60)
            + (currentMinutes * 60)
            + currentSeconds);
    int day = (24 * 60 * 60);
    std::cout << day - seconds << std::endl;
    return 0;
}