#include <stdio.h>
#include <stdlib.h>
#include "area.h"
#include "circumference.h"

/*
 Continue working on the pi.c project

Organise the function from the previous excercise to separate .c and .h files
Create another function which calculates the circumference of a circle
the radius of the circle should be passed as a parameter
the function should return the calculated circumference
circumference = 2 * radius * PI
this function should be in the same .c and .h files as the one which calculates the area
 */


int main()
{
    printf("%.2f\n", radiusFunc(5));
    printf("%.2f\n", circumferenceFunc(5));
    return 0;
}