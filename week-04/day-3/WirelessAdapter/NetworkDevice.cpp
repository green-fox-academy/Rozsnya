//
// Created by peter on 2019. 02. 06..
//

#include "NetworkDevice.h"
NetworkDevice::NetworkDevice(std::string x, int y) :
Device(x)
{
    _bandwidth = y;
}