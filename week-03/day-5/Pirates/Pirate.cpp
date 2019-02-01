//
// Created by peter on 2019. 02. 01..
//
#include "Ship.h"
#include "Pirate.h"
#include <iostream>

Pirate::Pirate(int x) {
    _rumLevel = 0;
    _life = 1;
    _parrot = x;
    _captainHat = false;

}
Pirate::Pirate(){ //captain
    _rumLevel = 0;
    _life = 1;
    _parrot = 1;
    _captainHat = true;
}
void Pirate::drinkSomeRum() {
    if (isDead()) {
        std::cout << "he's dead" << std::endl;
    } else {
        _rumLevel += 1;
    }
}

int Pirate::getRumLevel() {
    return _rumLevel;
}

void Pirate::howItGoingMate() {
    if (isDead()) {
        std::cout << "he's dead" << std::endl;
    } else {
        if (getRumLevel() < 5) {
            std::cout << "Pour me anudder!" << std::endl;
        } else {
            std::cout << "Arghh, I'ma Pirate. How d'ya d'ink its goin?" << std::endl;
            std::cout << "...The pirate passed out..." << std::endl;
        }
    }
}

bool Pirate::isDead() {
   return  _life == 0;
}
void Pirate::die() {
    _life = 0;
}
void Pirate::brawl(Pirate& pirate1, Pirate& pirate2){
    if(pirate1.isDead() && pirate2.isDead()){
        std::cout << "Both pirates are dead already" << std::endl;
    } else if(pirate1.isDead()) {
        std::cout << "First pirate is dead already" << std::endl;
    } else if(pirate2.isDead()) {
        std::cout << "Second pirate is dead already" << std::endl;
    } else {
        int x = rand() % 3;
        std::cout << "Brawl starts in: 3..." << std::endl;
        std::cout << "Brawl starts in: 2..." << std::endl;
        std::cout << "Brawl starts in: 1..." << std::endl;
        std::cout << "!!!BRAWL!!!" << std::endl;
        if(x == 0){
            pirate1.die();
            pirate2.die();
            std::cout << "Both pirate died in the brawl" << std::endl;
        } else if(x == 1){
            pirate2.die();
            std::cout << "The first pirate cruely killed the second" << std::endl;
        } else if(x == 2){
            pirate1.die();
            std::cout << "The second pirate ripped the first pirate's head off" << std::endl;
        }
    }
}
bool Pirate::hasParrot()
{
    return _parrot == 1;
}
void Pirate::getParrot()
{
    hasParrot() ? std::cout << "Pirate has a parrot" << std::endl : std::cout << "Pirate doesn't have a parrot" << std::endl;
}
bool Pirate::isCaptain()
{
     return _captainHat ? true : false;
}
