#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Drawable.h"
#include "Vehicle.h"
#include "Shape.h"

// Draws any object that inherits from Drawable
void draw(Drawable* object);

// Drives any object that inherits from Vehicle
void drive(Vehicle* vehicle);

// Returns the total area of all shapes in the array
double getTotalArea(Shape* shapes[], int size);

#endif
