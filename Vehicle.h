#ifndef VEHICLE_H
#define VEHICLE_H
#include "Drawable.h"
class Vehicle : public Drawable // vehicle inherits from drawable, every vehicle must provide its own drive() function
{
public:
    virtual void drive() = 0; // pure virtual function makes vehicle an abstract class
};
#endif