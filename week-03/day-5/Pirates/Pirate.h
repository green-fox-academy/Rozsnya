//
// Created by peter on 2019. 02. 01..
//

#ifndef PIRATES_PIRATE_H
#define PIRATES_PIRATE_H

class Pirate
{
public:
    Pirate(int x);
    Pirate();
    void drinkSomeRum();
    void howItGoingMate();
    int getRumLevel();
    bool isDead();
    void die();
    void brawl(Pirate& pirate1, Pirate& pirate2);
    bool hasParrot();
    void getParrot();
    bool isCaptain();

private:
    int _rumLevel;
    int _life;
    int _parrot;
    bool _captainHat;
};


#endif //PIRATES_PIRATE_H
