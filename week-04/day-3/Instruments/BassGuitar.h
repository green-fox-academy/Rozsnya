//
// Created by peter on 2019. 02. 06..
//

#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H
#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument
{
 public:
  BassGuitar();
  BassGuitar(int x);

  std::string sound();
};

#endif //INSTRUMENTS_BASSGUITAR_H
