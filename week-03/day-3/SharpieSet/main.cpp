#include <iostream>
#include "Sharpie.h"
#include <vector>

class SharpieSet {
    std::vector<Sharpie> SharpieVec;
    std::vector<Sharpie> usableSharpies;
    std::vector<Sharpie> unusableSharpies;
public:
    void vecFiller(Sharpie sharpie) {
        SharpieVec.push_back(sharpie);
    };

    void sortSharpies(Sharpie sharpie) {
        for (int i = 0; i < SharpieVec.size(); i++) {
            if (SharpieVec[i].getInkAmount() > 0) {
                usableSharpies.push_back(sharpie);
            } else {
                unusableSharpies.push_back(sharpie);
            }
        }

    }

    int countUsable() {
        return usableSharpies.size();
    }

    int removeTrash() {
        SharpieVec = usableSharpies;
        return unusableSharpies.size();
    }

    std::vector<Sharpie> getSharpies() {
        return SharpieVec;
    }

    std::vector<Sharpie> getUsable() {
        return usableSharpies;
    }

    std::vector<Sharpie> getUnusable() {
        return unusableSharpies;
    }
};

int main() {
    /*
     * Sharpie Set
Reuse your Sharpie class

Create SharpieSet class

it contains a list of Sharpie
countUsable() -> sharpie is usable if it has ink in it
removeTrash() -> removes all unusable sharpies
Test your methods by making some sharpies and call them.
Make sure they print something meaningful to the console.
     */
    SharpieSet sharpieSet;
    Sharpie sharpie1("green", 2);
    sharpieSet.vecFiller(sharpie1);
    Sharpie sharpie2("blue", 3);
    sharpieSet.vecFiller(sharpie2);
    Sharpie sharpie3("black", 1);
    for (int i = 0; i < 5; i++) {
        sharpie3.use();
    }
    sharpieSet.vecFiller(sharpie3);
    Sharpie sharpie4("red", 1.5);
    sharpieSet.vecFiller(sharpie4);
    sharpieSet.sortSharpies(sharpie1);
    sharpieSet.removeTrash();
    std::cout << "Usable sharpies: " << sharpieSet.countUsable() << std::endl;
    std::cout << "Removed sharpies: " << sharpieSet.removeTrash() << std::endl;

    return 0;
}