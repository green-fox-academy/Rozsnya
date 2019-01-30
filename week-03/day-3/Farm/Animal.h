//
// Created by peter on 2019. 01. 30..
//

#ifndef FARM_ANIMAL_H
#define FARM_ANIMAL_H


class Animal{
    int hunger;
    int thirst;
public:
    Animal();
    void eat();
    void drink();
    void play();
    int getHunger();
};


#endif //FARM_ANIMAL_H
