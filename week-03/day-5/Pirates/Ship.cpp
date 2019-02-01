//
// Created by peter on 2019. 02. 01..
//
#include "Pirate.h"
#include "Ship.h"
#include <vector>
#include <iostream>
void Ship::fillShip(){
    for(int i = 0; i < rand() % 25; i++){
        pirateShip.push_back(Pirate(rand() % 2));
    }
        pirateShip.push_back(Pirate());
};
void Ship::fillShip(Pirate &pirate) {
    pirateShip.push_back(pirate);
};

int Ship::shipPrint() {
    int x = 0;
    for (int i = 0; i < pirateShip.size(); i++) {
        if (pirateShip[i].isDead() == false && pirateShip[i].isCaptain() == false) {
            x++;
        }
        if (pirateShip[i].isCaptain() == true && pirateShip[i].isDead() == true) {
            std::cout << "The captain is dead" << std::endl;
        }
        if (pirateShip[i].isCaptain() == true && pirateShip[i].isDead() == false) {
            if (pirateShip[i].getRumLevel() < 5) {
                std::cout << "The captain's rum level is: " << pirateShip[i].getRumLevel()
                          << " shots and is still with us" << std::endl;
            } else {
                std::cout << "The captain's rum level is too high and passed out";
            }
        }
    }
    std::cout << "The ship has " << x << " crew members alive" << std::endl;
    return x;
}

bool Ship::shipBattle(Ship &ship) {
    int crew = 0;
    int capRumLev = 0;
    for (int i = 0; i < pirateShip.size(); i++) {
        if (pirateShip[i].isDead() == false && pirateShip[i].isCaptain() == false) {
            crew++;
        } else if (pirateShip[i].isDead() == false && pirateShip[i].isCaptain() == true) {
            capRumLev += pirateShip[i].getRumLevel();
        }
    }
    int otherCrew = 0;
    int otherCapRumLev = 0;
    for (int i = 0; i < ship.pirateShip.size(); i++) {
        if (ship.pirateShip[i].isDead() == false && ship.pirateShip[i].isCaptain() == false) {
            otherCrew++;
        } else if (ship.pirateShip[i].isDead() == false && ship.pirateShip[i].isCaptain() == true) {
            otherCapRumLev += ship.pirateShip[i].getRumLevel();
        }
    }
    if((crew - capRumLev) < (otherCrew - otherCapRumLev)){
        for(int i = 0; i < pirateShip.size(); i++){
            pirateShip[i].die();
        }
    } else{
        for(int i = 0; i < ship.pirateShip.size(); i++){
            ship.getPirateShip()[i].die();
        }
    }
    return (crew - capRumLev) > (otherCrew - otherCapRumLev) ? true : false;
};

 std::vector<Pirate> &Ship::getPirateShip()  {
    return pirateShip;
}
