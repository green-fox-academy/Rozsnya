//
// Created by peter on 2019. 02. 06..
//

#include "StringedInstrument.h"


void StringedInstrument::play()
{
     std::cout << _name << ", a " << numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;
}