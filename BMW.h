#ifndef BMW_H
#define BMW_H
#include <iostream>
#include "Vehicle.h"
using namespace std;
class BMW : public Vehicle // // BMW inherits from Vehicle, this means BMW must have draw() and drive().
{
public:
    void draw() // this function draws a simple BMW using cout
    {
        cout << "drawing a BMW" << endl;
        cout << "     ______" << endl;
        cout << " ___/ BMW  \\___" << endl;
        cout << "|  _      _   |" << endl;
        cout << "'-(_)----(_)--'" << endl;
    }
    void drive() //  // this function drives the BMW.
    {
        cout << "driving a BMW" << endl;
    }
};

#endif