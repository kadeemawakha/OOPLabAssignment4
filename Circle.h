#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
private:
    double radius;

public:
    // constructor

    Circle(double r);

    // calculates the circle's area

    double calculateArea() override;

    // draws the circle

    void draw() override;
};

#endif