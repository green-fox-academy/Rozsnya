//
// Created by peter on 2019. 02. 06..
//

#include "WirelessAdapter.h"
WirelessAdapter::WirelessAdapter(std::string x, USBType usbType, int z) :
    USBDevice(x, usbType), NetworkDevice(x, z), Device(x){}
void WirelessAdapter::info()
{
    std::cout << "ID: " << _id
              << "\nUSB Type: " << _usbType
              << "\nBandwidth: " << _bandwidth << " Mbit/s" << std::endl;
}
