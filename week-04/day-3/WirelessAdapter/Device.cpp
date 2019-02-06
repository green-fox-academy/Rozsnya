//
// Created by peter on 2019. 02. 06..
//

#include "Device.h"
Device::Device(std::string x)
{
    _id = x;
}
std::string Device::getID()
{
    return _id;
}