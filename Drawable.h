#ifndef DRAWABLE_H
#define DRAWABLE_H


class Drawable
{

public:

    // Pure virtual function
    // Any class that inherits Drawable must implement draw()
    virtual void draw() = 0;


    // Virtual destructor
    virtual ~Drawable()
    {

    }

};


#endif