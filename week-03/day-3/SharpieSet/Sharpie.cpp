//
// Created by peter on 2019. 01. 30..
//

#include "Sharpie.h"
#include <string>


Sharpie::Sharpie(std::string color, float width)
{
    _color = color;
    _width = width;
    inkAmount = 50;
}
void Sharpie::use()
{
    inkAmount -= 10*_width;
}
float Sharpie::getInkAmount()
{
    return inkAmount;
}