#include <iostream>
#include "Circle.h"


using namespace std;



Circle::Circle(double radius)
{

    this->radius = radius;

}



double Circle::calculateArea()
{

    return 3.14159 * radius * radius;

}



void Circle::draw()
{

    cout << "Drawing Circle:" << endl;


    cout << "   ***   " << endl;
    cout << " *     * " << endl;
    cout << "*       *" << endl;
    cout << " *     * " << endl;
    cout << "   ***   " << endl;


}