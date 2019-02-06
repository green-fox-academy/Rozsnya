//
// Created by peter on 2019. 02. 06..
//

#ifndef ANIMALSINTHEZOO_BIRD_H
#define ANIMALSINTHEZOO_BIRD_H

#include "Egglayer.h"
class Bird : public Egglayer
{
 public:
  Bird(std::string name);
  std::string getName();
};

#endif //ANIMALSINTHEZOO_BIRD_H
