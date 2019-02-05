//
// Created by peter on 2019. 02. 05..
//

#ifndef INHERITANCE_MENTOR_H
#define INHERITANCE_MENTOR_H


#include "Person.h"
#include <string>
#include <iostream>

enum Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR

};

class Mentor : public Person {
protected:
    Level _level;
public:
    Mentor();
    Mentor(std::string name, int age, Gender gender, Level level);
    void getGoal() override;
    void introduce() override;
    std::string getLevel();
};


#endif //INHERITANCE_MENTOR_H
