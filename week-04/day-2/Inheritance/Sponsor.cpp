//
// Created by peter on 2019. 02. 05..
//

#include "Sponsor.h"
#include "Person.h"
#include <string>
#include <iostream>

Sponsor::Sponsor() :
Person()
{
_company = "Google";
_hiredStudents = 0;
};
Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) :
Person(name, age, gender)
{
    _company = company;
    _hiredStudents = 0;
};
void Sponsor::introduce()
{
    std::cout << "Hi, I'm "
              << _name << ", a "
              << _age << " years old "
              << getGender() << " who represents "
              << _company << " and hired "
              << _hiredStudents << " students so far."
              << std::endl;
};
void Sponsor::hire()
{
_hiredStudents += 1;
};
void Sponsor::getGoal()
{
std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
};
