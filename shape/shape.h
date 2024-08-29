#ifndef SHAPE_H
#define SHAPE_H

class Shape     // ABC(Abstract Base Class)
{
//private:
protected:
    int x_;
    int y_;

public:
    Shape(int x, int y);
    // Shape(const Shape& rhs);
    virtual ~Shape() { }                        // --> .cpp에서 구현하지 않고 .h에서 구현해도 됨. 보통 많이 이렇게 구현

    // Shape& operator=(const Shape& rhs);
    // Shape *operator&();
    // const Shape *operator&() const;

    void move(int offsetX, int offsetY);
    virtual double area() const = 0;            // pure virtual fuction
};

#endif