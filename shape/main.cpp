// 2024.09.10 dynamic_cast 추가

#include <iostream>
#include <typeinfo>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"

void printShape(const Shape *ps)
{
    if (typeid(*ps) == typeid(Rectangle)) {                 // RTTI (Runtime Type Identification)
        std::cout << "rectangle area : " << ps->area() << ", ";
        // Rectangle *pr = (Rectangle *)ps;
        const Rectangle *pr = dynamic_cast<const Rectangle *>(ps);
        std::cout << "diagonal : "ps->getDiagonal() << std::endl;
    }
    else if (typeid(*ps) == typeid(Circle)) {
        std::cout << "circle area : " << ps->area() << ", ";
        // Circle *pc = (Circle *)ps;
        const Circle *pc = dynamic_cast<const Circle *>(ps);
        std::cout << "circumference : " << ps->getCircumference() << std::endl;
    }
}

int main()
{
    // Shape s(100, 100); -->  X

    Shape *pShapes[5];
    
    pShapes[0] = new Rectangle(100, 100, 10, 5);
    pShapes[1] = new Circle(10, 10, 10);
    pShapes[2] = new Rectangle(50, 50, 50, 50);
    pShapes[3] = new Rectangle(200, 200, 50, 10);
    pShapes[4] = new Circle(20, 20, 5);

    for (int i = 0; i < 5; ++i) {
        printShape(pShapes[i]);
    }

    for (int i = 0; i < 5; ++i) {
        delete pShapes[i];
    }

    return 0;
}