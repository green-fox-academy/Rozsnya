//
// Created by peter on 2019. 02. 06..
//

#ifndef WIRELESSADAPTER_WIRELESSADAPTER_H
#define WIRELESSADAPTER_WIRELESSADAPTER_H

#include "USBDevice.h"
#include "NetworkDevice.h"
 class WirelessAdapter : public USBDevice, public NetworkDevice
{
  public:
WirelessAdapter(std::string x, USBType usbType, int z);
  void info();
};

#endif //WIRELESSADAPTER_WIRELESSADAPTER_H
