//
// Created by peter on 2019. 01. 29..
//

#ifndef DOMINOES_DOMINO_H
#define DOMINOES_DOMINO_H

#include <iostream>
#include <utility>

class Domino
{
public:
    Domino(int valueA, int valueB);

    std::pair<int,int> getValues();
    std::string toString();

private:
    std::pair<int,int> _values;
};


#endif //DOMINOES_DOMINO_H