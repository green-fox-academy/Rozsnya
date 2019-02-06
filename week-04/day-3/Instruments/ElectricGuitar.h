//
// Created by peter on 2019. 02. 06..
//

#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"
class ElectricGuitar : public StringedInstrument
{
 public:
ElectricGuitar();
ElectricGuitar(int x);

  std::string sound();

};

#endif //INSTRUMENTS_ELECTRICGUITAR_H
