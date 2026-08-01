#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;
class Drawable // drawable is an abstract class, anything that can be drawn should inherit from this class
{
public:
    virtual void draw() = 0; // // pure virtual function this makes drawable an abstract class
};
class Vehicle : public Drawable // // vehicle is also an abstract class a vehicle can be drawn and driven
{
public:
    virtual void drive() = 0; // // pure virtual function, each vehicle will have its own version of drive()
};
#endif