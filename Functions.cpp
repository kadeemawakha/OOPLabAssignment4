#include "Functions.h"

// Calls the draw() function of any Drawable object
void draw(Drawable* object)
{
    object->draw();
}

// Calls the drive() function of any Vehicle object
void drive(Vehicle* vehicle)
{
    vehicle->drive();
}

// Adds up the area of all shapes in the array
double getTotalArea(Shape* shapes[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += shapes[i]->area();
    }

    return total;
}
