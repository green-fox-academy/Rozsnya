#include <stdio.h>

// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    printf("give me a number\n");
    scanf("%lf", &a);
    printf("give me another\n");
    scanf("%lf", &b);
    printf("give me a last one\n");
    scanf("%lf", &c);

    double surf = a*b;
    double vol = a*b*c;
    printf("Surface Area: %2.lf\n", surf);
    printf("Volume: %2.lf\n", vol);

    return 0;
}