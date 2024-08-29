#include "rectangle.h"
#include <cmath>

Rectangle::Rectangle(int x, int y, int w, int h)
: Shape(x, y), width_(w), height_(h)
{

}

double Rectangle::area() const
{
    return width_ * height_;
}

double Rectangle::getDiagonal() const
{
    return sqrt(width_ * width_ + height_ * height_);   // c^2 = a^2 + b^2 --> c = √ 
}