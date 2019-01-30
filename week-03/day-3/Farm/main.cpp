#include <iostream>
#include <vector>
#include "Animal.h"

class Farm {
    std::vector<Animal> animals;
    int slots = 4;

public:
    void breed() {
        Animal baby;
        if (animals.size() < slots) {
            animals.push_back(baby);
            std::cout << "New annimal arrived on the farm" << std::endl;
        } else {
            std::cout << "Farm is full. Kill an animal first" << std::endl;
        }
    }

    void slaughter() {
        std::vector<Animal> fatOne;
        for (int i = 1; i < animals.size(); i++) {
            if (animals[i].getHunger() > animals[0].getHunger()) {
                fatOne[0] = animals[0];
            } else if (animals[i].getHunger() < animals[0].getHunger()) {
                fatOne[0] = animals[i];
            } else {
                fatOne.push_back(animals[i]);
            }
        }
        for(int i = 0; i < animals.size(); i++){
            for(int j = 0; j < fatOne.size(); j++)
                if(animals[i].getHunger() == fatOne[j].getHunger()){
                    animals.erase(animals.begin() + i);
                }
        }
    }
    void animalToFarm(Animal& animal) {
        animals.push_back(animal);
    }
};

int main() {
    /*
     * Reuse your Animal class
     * Create a Farm class
     * it has list of Animals
     * it has slots which defines the number of free places for animals
     * breed() -> creates a new animal if there's place for it
     * slaughter() -> removes the least hungry animal
     */
    Farm Tanya;
    Animal ani1;
    Tanya.animalToFarm(ani1);
    Animal ani2;
    Tanya.animalToFarm(ani2);
    Animal ani3;
    Tanya.animalToFarm(ani3);
    for (int i = 0; i < 40; i++){
        ani2.eat();
    }
    Tanya.breed();
    Tanya.breed();
    Tanya.slaughter();
    Tanya.breed();
    Tanya.breed();
    Tanya.breed();
    Tanya.breed();


    return 0;
}