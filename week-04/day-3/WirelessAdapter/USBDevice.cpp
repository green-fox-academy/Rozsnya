//
// Created by peter on 2019. 02. 06..
//

#include "USBDevice.h"

USBDevice::USBDevice(std::string x, USBType usbType) :
Device(x)
{
    _usbType = usbType;
}