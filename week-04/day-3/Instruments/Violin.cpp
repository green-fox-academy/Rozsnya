//
// Created by peter on 2019. 02. 06..
//

#include "Violin.h"

Violin::Violin(){
    _name = "Violin";
    numberOfStrings = 4;
}
Violin::Violin(int x){
    _name = "Violin";
    numberOfStrings = x;
}
std::string Violin::sound()
{
    return "Screech";
}