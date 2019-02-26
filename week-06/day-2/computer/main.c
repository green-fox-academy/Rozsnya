#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer
{
  float cpu_speed_GHz;
  int ram_size_GB;
  int bits;
};

typedef struct
{
  float cpu_speed_GHz;
  int ram_size_GB;
  int bits;
} Notebook;

int main()
{
    struct Computer PC;
    PC.ram_size_GB = 4;
    Notebook Laptop;
    Laptop.ram_size_GB = 8;

    printf("%d\n", PC.ram_size_GB);
    printf("%d\n", Laptop.ram_size_GB);

    return 0;
}