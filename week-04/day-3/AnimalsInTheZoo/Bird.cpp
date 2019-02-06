//
// Created by peter on 2019. 02. 06..
//

#include "Bird.h"
Bird::Bird(std::string name)
{
    _name = name;
}
std::string Bird::getName()
{
    return _name;
}