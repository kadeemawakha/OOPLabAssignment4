#include <iostream>
#include "Rectangle.h"


using namespace std;



Rectangle::Rectangle(double length, double width)
{

    this->length = length;
    this->width = width;

}



double Rectangle::area()
{

    return length * width;

}



void Rectangle::draw()
{

    cout << "Drawing Rectangle:" << endl;


    cout << "********" << endl;
    cout << "*      *" << endl;
    cout << "*      *" << endl;
    cout << "********" << endl;


}