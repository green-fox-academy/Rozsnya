#include <iostream>
#include "Pirate.h"
#include "Ship.h"
#include <vector>

int main() {
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

    Ship myShip;
    Pirate Captain;
    Pirate pirate1(0);
    Pirate pirate2(1);
    myShip.fillShip(Captain);
    myShip.fillShip(pirate1);
    myShip.fillShip(pirate2);
    myShip.shipPrint();
    myShip.getPirateShip()[0].drinkSomeRum();
    myShip.getPirateShip()[0].drinkSomeRum();
    myShip.shipPrint();
    //
    Ship otherShip;
    Pirate otherCaptain;
    Pirate otherPirate1(0);
    Pirate otherPirate2(0);
    otherShip.fillShip(otherCaptain);
    otherShip.fillShip(otherPirate1);
    otherShip.fillShip(otherPirate2);
    otherShip.getPirateShip()[0].drinkSomeRum();
    otherShip.getPirateShip()[0].drinkSomeRum();
    otherShip.getPirateShip()[0].drinkSomeRum();
    otherShip.getPirateShip()[0].drinkSomeRum();

    if(myShip.shipBattle(otherShip)){
        std::cout << "myShip won" << std::endl;
    } else {
        std::cout << "otherShip won" << std::endl;
    }
    myShip.shipPrint();
    otherShip.shipPrint();


    return 0;
}