//
// Created by peter on 2019. 02. 06..
//

#ifndef ANIMALSINTHEZOO_MAMMAL_H
#define ANIMALSINTHEZOO_MAMMAL_H

#include "Animal.h"
class Mammal : public Animal
{
 public:
  Mammal(std::string name);
std::string breed();
std::string getName();
};

#endif //ANIMALSINTHEZOO_MAMMAL_H
