//
// Created by peter on 2019. 02. 01..
//

#ifndef PIRATES_SHIP_H
#define PIRATES_SHIP_H

#include <vector>
#include "Pirate.h"

class Ship {
public:
    void fillShip(Pirate &pirate);
    void fillShip();

    int shipPrint();

    bool shipBattle(Ship &ship);

     std::vector<Pirate> &getPirateShip() ;

    void setPirateShip(const std::vector<Pirate> &pirateShip);

private:
    std::vector<Pirate> pirateShip;

};


#endif //PIRATES_SHIP_H
