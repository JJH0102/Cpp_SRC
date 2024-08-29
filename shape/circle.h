#ifndef Circle_H
#define Circle_H

#include "shape.h"

class Circle : public Shape
{
private:
    int radius_;

public:
    Circle(int x, int y, int r);
   //  virtual Circle() { }

    virtual double area() const;
    double getCircumference() const;
};

#endif