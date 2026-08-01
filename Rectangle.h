#ifndef RECTANGLE_H
#define RECTANGLE_H


#include "Shape.h"


class Rectangle : public Shape
{

private:

    double length;
    double width;


public:

    // Constructor
    Rectangle(double length, double width);


    // Calculates rectangle area
    double area() override;


    // Draws rectangle
    void draw() override;


};


#endif