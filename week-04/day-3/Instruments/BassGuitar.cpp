//
// Created by peter on 2019. 02. 06..
//

#include "BassGuitar.h"

BassGuitar::BassGuitar()
{
    _name = "Bass guitar";
    numberOfStrings = 4;
}
BassGuitar::BassGuitar(int x)
{
    _name = "Bass guitar";
    numberOfStrings = x;
}
std::string BassGuitar::sound()
{
    return "Duum-duum-duum";
}