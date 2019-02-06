//
// Created by peter on 2019. 02. 06..
//

#ifndef ANIMALSINTHEZOO_ANIMAL_H
#define ANIMALSINTHEZOO_ANIMAL_H
#include <iostream>
#include <string>

enum Gender{
  MALE,
  FEMALE,
  BENJI
};
class Animal
{
 public:
  virtual std::string breed()=0;
  virtual std::string getName()=0;

 protected:
  std::string _name;
 int age;
 Gender _gender;
 std::string favFood;
 bool isBitch;
};

#endif //ANIMALSINTHEZOO_ANIMAL_H
