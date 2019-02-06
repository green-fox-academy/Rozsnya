cmake_minimum_required(VERSION 3.13)
project(AnimalsInTheZoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(AnimalsInTheZoo main.cpp Animal.cpp Animal.h Mammal.cpp Mammal.h Egglayer.cpp Egglayer.h Bird.cpp Bird.h Reptile.cpp Reptile.h)