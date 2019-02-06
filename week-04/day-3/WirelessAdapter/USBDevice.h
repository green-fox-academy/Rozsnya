//
// Created by peter on 2019. 02. 06..
//

#ifndef WIRELESSADAPTER_USBDEVICE_H
#define WIRELESSADAPTER_USBDEVICE_H

#include "Device.h"

enum USBType{
  USB_TYPE_2,
  USB_TYPE_3
};

class USBDevice : virtual public Device
{
 public:
  USBDevice(std::string x, USBType usbType);
 protected:
  USBType _usbType;
};

#endif //WIRELESSADAPTER_USBDEVICE_H
