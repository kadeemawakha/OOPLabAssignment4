#ifndef MAZDA_H
#define MAZDA_H
#include <iostream>
#include "Vehicle.h"
using namespace std;
class Mazda : public Vehicle // // mazda inherits from Vehicle, mazda must have draw() and drive().
{
public:

    // function declarations, the actual code is written in Mazda.cpp.
    void draw();
    void drive();
};
#endif