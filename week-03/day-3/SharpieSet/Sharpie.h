//
// Created by peter on 2019. 01. 30..
//

#ifndef SHARPIESET_SHARPIE_H
#define SHARPIESET_SHARPIE_H

#include <string>

class Sharpie
{
    std::string _color;
    float _width;
    float inkAmount;
public:
    Sharpie(std::string _color, float _width);

    void use();
    float getInkAmount();

};


#endif //SHARPIESET_SHARPIE_H
