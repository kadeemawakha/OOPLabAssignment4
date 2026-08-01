#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    // constructor

    Rectangle(double l, double w);

    // calculates the rectangle's area

    double calculateArea() override;

    // draws the rectangle

    void draw() override;
};

#endif