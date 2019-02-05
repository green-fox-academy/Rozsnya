//
// Created by peter on 2019. 02. 05..
//

#ifndef INHERITANCE_SPONSOR_H
#define INHERITANCE_SPONSOR_H

#include "Person.h"
#include <string>
#include <iostream>

class Sponsor : public Person
{
protected:
    std::string _company;
    int _hiredStudents;
public:
    Sponsor();
    Sponsor(std::string name, int age, Gender gender, std::string company);
    void introduce() override;
    void hire();
    void getGoal() override;
};


#endif //INHERITANCE_SPONSOR_H
