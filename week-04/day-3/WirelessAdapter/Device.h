//
// Created by peter on 2019. 02. 06..
//

#ifndef WIRELESSADAPTER_DEVICE_H
#define WIRELESSADAPTER_DEVICE_H
#include <iostream>
#include <string>


class Device
{
 public:
  Device(std::string x);
  std::string getID();
 protected:
  std::string _id;
};

#endif //WIRELESSADAPTER_DEVICE_H
