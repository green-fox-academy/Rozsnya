#include <iostream>



class Car {
    int gasAmount;
    int capacity;
public:
    Car(int carGas, int carCap) {
        gasAmount = carGas;
        capacity = carCap;
    }

    bool isFull()
    {
        return (gasAmount == capacity);
    }

    int fill()
    {
        int x = 0;
        while (gasAmount != capacity) {
            gasAmount++;
            std::cout << "Filling car!" << std::endl;
            x++;
        }
            return x;
    }

    int getCarGas()
    {
        return gasAmount;
    }

    int getCarCap()
    {
        return capacity;
    }
};
class Station {
    int gasAmount;
public:
    Station() {
        gasAmount = 300;
    }
    void fill(Car& car)
    {
        while (car.getCarGas() != car.getCarCap() || gasAmount == 0) {
            gasAmount -= car.fill();


            if (car.getCarGas() == car.getCarCap()) {
                std::cout << "Finised" << std::endl;
                std::cout << "Remaining gasoline: " << gasAmount << " liter" << std::endl;
            }
        }
    }
};

int main() {
    Station RozsnyaGas;
    Car car1(10, 63);
    Car car2(5, 40);
    Car car3(20, 50);
    Car car4(40, 45);
    Car car5(1, 70);

    RozsnyaGas.fill(car1);
    std::cout << car1.isFull() << std::endl;
    RozsnyaGas.fill(car2);
    std::cout << car2.isFull() << std::endl;
    RozsnyaGas.fill(car3);
    std::cout << car3.isFull() << std::endl;
    RozsnyaGas.fill(car4);
    std::cout << car4.isFull() << std::endl;
    RozsnyaGas.fill(car5);
    std::cout << car5.isFull() << std::endl;


    return 0;
}