//
// Created by peter on 2019. 02. 06..
//

#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H
#include "StringedInstrument.h"

class Violin : public StringedInstrument
{
 public:
  Violin();
  Violin(int x);

  std::string sound();
};

#endif //INSTRUMENTS_VIOLIN_H
