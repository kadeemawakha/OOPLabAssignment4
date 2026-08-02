#include <iostream>
using namespace std;

#include "BMW.h"
#include "Mazda.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Functions.h"

int main()
{
    // Create vehicles
    BMW bmw;
    Mazda mazda;

    cout << "=== Vehicles ===" << endl;

    draw(&bmw);
    drive(&bmw);

    cout << endl;

    draw(&mazda);
    drive(&mazda);

    cout << endl;

    // Create shapes
    Rectangle rect1(4.0, 5.0);
    Rectangle rect2(6.0, 2.0);

    Circle circle1(3.0);
    Circle circle2(5.0);

    cout << "=== Shapes ===" << endl;

    draw(&rect1);
    draw(&rect2);
    draw(&circle1);
    draw(&circle2);

    cout << endl;

    // Store shapes in an array
    Shape* shapes[4];

    shapes[0] = &rect1;
    shapes[1] = &rect2;
    shapes[2] = &circle1;
    shapes[3] = &circle2;

    cout << "Total Area = " << getTotalArea(shapes, 4) << endl;

    return 0;
}
