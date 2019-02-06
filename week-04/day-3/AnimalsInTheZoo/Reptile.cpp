//
// Created by peter on 2019. 02. 06..
//

#include "Reptile.h"
Reptile::Reptile(std::string name)
{
    _name = name;
}
std::string Reptile::getName()
{
    return _name;
}