#ifndef SHAPE_H
#define SHAPE_H

#include "Drawable.h"

// not yet added any shape class, but this is the base class for all shapes
class Shape : public Drawable
{
public:
    // pure virtual function to calculate area
    virtual double calculateArea() = 0;

    // pure virtual function to draw the shape
    virtual void draw() = 0;

    // virtual destructor
    virtual ~Shape() {}
};

#endif