//
// Created by peter on 2019. 02. 06..
//

#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H
#include "Instrument.h"


class StringedInstrument : public Instrument
{
 protected:
  int numberOfStrings;
 public:
  virtual std::string sound() = 0;
  void play();
};

#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
