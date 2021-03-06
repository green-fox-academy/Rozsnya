#include <stdio.h>

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/
typedef struct
{
  char address[30];
  float eurPrice;
  int rooms;
  float area;
} House;
typedef enum
{
  TRUE = 1,
  FALSE = 0
} bool;
bool isWorthy(House *house)
{
    if (house->eurPrice < (house->area * 400)){
        return TRUE;
    } else {
        return FALSE;
    }
}
int worthyHouses(House houses[20]){
    int quantity = 0;
    for(int i = 0; i < 20; i++){
        if(isWorthy(&houses[i])){
            quantity++;
        }
    }
    return quantity;
}
int main()
{

    return 0;
}