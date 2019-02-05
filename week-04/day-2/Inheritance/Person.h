//
// Created by peter on 2019. 02. 05..
//

#ifndef INHERITANCE_PERSON_H
#define INHERITANCE_PERSON_H
#include <string>

enum Gender{
    MALE,
    FEMALE,
    TRANS
};

class Person {
protected:
   std::string _name;
   int _age;
   Gender _gender;
public:
    Person();
    Person(std::string name, int age, Gender gender);
    virtual void introduce();
    virtual void getGoal();
    std::string getGender();


};


#endif //INHERITANCE_PERSON_H
