//
// Created by peter on 2019. 02. 06..
//

#ifndef WIRELESSADAPTER_NETWORKDEVICE_H
#define WIRELESSADAPTER_NETWORKDEVICE_H

#include "Device.h"
class NetworkDevice : virtual public Device
{
 public:
  NetworkDevice(std::string x, int y);
 protected:
  int _bandwidth;
};

#endif //WIRELESSADAPTER_NETWORKDEVICE_H
