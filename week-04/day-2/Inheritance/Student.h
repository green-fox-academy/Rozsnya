//
// Created by peter on 2019. 02. 05..
//

#ifndef INHERITANCE_STUDENT_H
#define INHERITANCE_STUDENT_H

#include <string>
#include "Person.h"

class Student : public Person {
protected:
    std::string _previousOrganization;
    int _skippedDays = 0;
public:
    Student();

    Student(std::string name, int age, Gender gender, std::string previousOrganization);

    void getGoal() override;

    void introduce() override;

    void skipDays(int numberOfDays);
};


#endif //INHERITANCE_STUDENT_H
