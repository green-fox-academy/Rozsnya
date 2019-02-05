//
// Created by peter on 2019. 02. 05..
//

#include "Person.h"
#include <string>
#include <iostream>

Person::Person()
{
_name = "Jane Doe";
_age = 30;
_gender = Gender::FEMALE;
};

Person::Person(std::string name, int age, Gender gender)
{
_name = name;
_age = age;
_gender = gender;
};

void Person::introduce()
{
    std::cout << "Hi, I'm" << _name << ", a " << _age << " years old " << getGender() << "." << std::endl;
};

void Person::getGoal()
{
    std::cout << "My goal is: Live for the moment!" << std::endl;
};
std::string Person::getGender()
{
    if(_gender == Gender::MALE){
        return "male";
    }else if(_gender == Gender::FEMALE){
        return "female";
    }else{
        return "transgendered";
    }
}