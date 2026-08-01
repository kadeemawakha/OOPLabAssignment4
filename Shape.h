#ifndef SHAPE_H
#define SHAPE_H


#include "Drawable.h"


class Shape : public Drawable
{

public:

    // Pure virtual function
    // Every shape must calculate its own area
    virtual double area() = 0;


    // Virtual destructor
    virtual ~Shape()
    {

    }

};


#endif