//
// Created by peter on 2019. 02. 05..
//

#include "Student.h"
#include "Person.h"
#include <string>
#include <iostream>

Student::Student() :
Person()
{
_previousOrganization = "The school of lie";
_skippedDays = 0;
}

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization) :
        Person(name, age, gender)
{
    _previousOrganization = previousOrganization;
};

void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
};

void Student::introduce()
{
    std::cout << "Hi, I'm "
              << _name << ", a "
              << _age << " years old "
              << getGender() << " from "
              << _previousOrganization << " who skipped "
              << _skippedDays << " days from the course already." << std::endl;
};

void Student::skipDays(int numberOfDays)
{
    _skippedDays += numberOfDays;
};