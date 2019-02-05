//
// Created by peter on 2019. 02. 05..
//

#include "Mentor.h"
#include "Person.h"
#include <string>
#include <iostream>

Mentor::Mentor() :
Person()
{
_level = Level::INTERMEDIATE;
};
Mentor::Mentor(std::string name, int age, Gender gender, Level level) :
Person(name, age, gender)
{
    _level = level;
};
void Mentor::getGoal()
{
std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
};
void Mentor::introduce()
{
    std::cout << "Hi, I'm "
              << _name << ", a "
              << _age << " years old "
              << getGender() << " "
              << getLevel() << " level mentor "
              << std::endl;
};
std::string Mentor::getLevel()
{
    if(_level == Level::INTERMEDIATE){
        return "intermediate";
    }else if(_level == Level::JUNIOR){
        return "junior";
    }else{
        return "senior";
    }
}
