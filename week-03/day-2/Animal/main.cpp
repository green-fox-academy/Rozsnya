#include <iostream>
#include <string>

class Animal{
    int hunger;
    int thirst;
public:
    Animal()
    {
        hunger = 50;
        thirst = 50;
    }
    void eat()
    {
        hunger -= 1;
    }
    void drink()
    {
        thirst -= 1;
    }
    void play()
    {
        hunger += 1;
        thirst += 1;
    }
};

int main() {

    return 0;
}