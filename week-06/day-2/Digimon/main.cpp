#include <stdio.h>

/* Digimon database!
 * You should store the following data in a structure
 *  - the name of the digimon (which is shorter than 128 characters)
 *  - the age of the digimon (in years)
 *  - the health of the digimon (between 0-100)
 *  - the name of the tamer (which is shorter than 256 characters)
 *  - the digivolution level of the digimon (as a custom type, see below)
 *
 * You should store the digivolution level in an enumeration
 * the valid digivolution levels are:
 *  - baby
 *  - in-training
 *  - rookie
 *  - champion
 *  - ultimate
 *  - mega
 *
 * The digimons are stored in an array.
 *
 * Write the following functions:
 * 1) Get minimum health index
 *      - parameters:
 *          - array
 *          - array length
 *      - it returns the index of the minimal health digimon in the "array"
 * 2) Get same digivolution level count
 *      - parameters:
 *          - array
 *          - array length
 *          - digivolution level
 *      - it returns the count of digimons which are at "digivolution level"
 * 3) Get same tamer count
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the count of the digimons which have the same tamer as "tamer name"
 * 4) Get average health of the same tamer
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the average health of the digimons which have the same tamer as "tamer name"
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */
typedef enum
{
  baby,
  in_training,
  rookie,
  champion,
  ultimate,
  mega
} digivolution_level;

typedef struct
{
  char name[128];
  int age;
  int health;
  char tamerName[256];
  digivolution_level digEvo;
} Digimon;

int getMinimalHealth(unsigned int x, Digimon digimons[x])
{
    int minimalIndex = 0;
    for (int i = 0; i < x; i++) {
        if (digimons[i].health < digimons[minimalIndex].health) {
            minimalIndex = i;
        }
    }
    return minimalIndex;
}
int getDigivolutionLevel(unsigned int x, Digimon digimons[x], digivolution_level level)
{
    int quantity = 0;
    for (int i = 0; i < x; i++){
        if(digimons[i].digEvo == level){
            quantity++;
        }
    }
    return quantity;
}
int sameTamerCount(unsigned int x, Digimon digimons[x], char name[256])
{
    int digimonsOfTamer = 0;
    for (int i = 0; i < x; i++){
        if(digimons[i].tamerName == name){
            digimonsOfTamer++;
        }
    }
    return digimonsOfTamer;
}
int digimonHealthSameTamer(unsigned int x, Digimon digimons[x], char name[256])
{
    int digiMons = 0;
    int healthSum = 0;

    for (int i = 0; i < x; i++){
        if(digimons[i].tamerName == name){
            digiMons++;
            healthSum+=digimons[i].health;
        }
    }
    int averageHealth = healthSum/digiMons;

    return averageHealth;
}
int main()
{

    return 0;
}