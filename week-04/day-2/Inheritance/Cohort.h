//
// Created by peter on 2019. 02. 05..
//

#ifndef INHERITANCE_COHORT_H
#define INHERITANCE_COHORT_H

#include "Person.h"
#include <string>
#include <iostream>
#include <vector>
#include "Student.h"
#include "Mentor.h"

class Cohort : public Person
{
protected:
    std::string _name;
    std::vector<Student*> students;
    std::vector<Mentor*> mentors;
public:
    Cohort(std::string name);

    void addStudent(Student *);

    void addMentor(Mentor *);

    void info();
};


#endif //INHERITANCE_COHORT_H
