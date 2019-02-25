#include <stdio.h>
#include <stdlib.h>

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI
float radiusFunc(float radius){
    float area;
    float PI = 3.14;
    area = radius * radius * PI;


    return area;
}
int main()
{
    printf("%f", radiusFunc(5));
    return 0;
}