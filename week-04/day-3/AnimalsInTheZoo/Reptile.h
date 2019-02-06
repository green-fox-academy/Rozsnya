//
// Created by peter on 2019. 02. 06..
//

#ifndef ANIMALSINTHEZOO_REPTILE_H
#define ANIMALSINTHEZOO_REPTILE_H

#include "Egglayer.h"
class Reptile : public Egglayer
{
 public:
  Reptile(std::string name);
  std::string getName();
};

#endif //ANIMALSINTHEZOO_REPTILE_H
