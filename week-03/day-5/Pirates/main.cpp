#include <iostream>
#include "Pirate.h"
#include "Ship.h"
#include <vector>
#include <ctime>
int main() {
    srand(time(NULL));
/*
Create a Ship class.
The Ship stores Pirate-s instances in a vector as the crew and has one captain who is also a Pirate.
When a ship is created it doesn't have a crew or a captain.
The ship can be filled with pirates and a captain via fillShip() method.
Filling the ship with a captain and random number of pirates.
Ships should be represented in a nice way on command line including information about
captains consumed rum, state (passed out / died)
number of alive pirates in the crew
Ships should have a method to battle other ships: ship.battle(otherShip)
should return true if the actual ship wins
the ship should win if its calculated score is higher
calculate score: Number of Alive pirates in the crew - Number of consumed rum by the captain
The loser crew has a random number of losses (deaths).
The winner captain and crew has a party, including a random number of rum :)
 */
Ship Ship1;
Ship1.fillShip();
Ship Ship2;
Ship2.fillShip();
Ship1.shipPrint();
Ship2.shipPrint();
if(Ship1.shipBattle(Ship2)){
    std::cout << "Ship1 win" << std::endl;
} else {
    std::cout << "Ship2 win" << std::endl;
}
    Ship1.shipPrint();
    Ship2.shipPrint();
    return 0;
}