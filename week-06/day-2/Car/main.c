#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct car {
  enum car_type type;
  double km;
  double gas;
};
void printCar(struct car car1)
{
    printf("%s", car1.type);
    printf("%lf", car1.km);
    if (car1.type != TESLA){
        printf("%lf", car1.gas);
    }
}
int main()
{

    return 0;
}