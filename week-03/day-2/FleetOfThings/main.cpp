#include <iostream>

#include "fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch
    Thing one ("Get milk");
    Thing two ("Remove the obstacles");
    Thing three ("Stand up");
    Thing four ("Eat lunch");
    three.complete();
    four.complete();
    fleet.add(one);
    fleet.add(two);
    fleet.add(three);
    fleet.add(four);
    std::cout << fleet.toString() << std::endl;
    return 0;
}