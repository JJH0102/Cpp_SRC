#include <iostream>
#include "rational.h"

int main()
{  
    Rational r1(3, 4);        
    Rational r2(3);     // 3 / 1
    Rational r3;        // 0 / 1


    r3.numerator(r1.numerator());
    r3.denominator(r1.denominator());

    if(r1.numerator() == r3.numerator() && r1.denominator() == r3.denominator()) {
        std::cout << "r1 and r3 are equal" << std::endl;
    }
    else {
        std::cout << "r1 and r3 are not equal" << std::endl;
    }

    std::cout << "r1 : " << r1.numerator() << " / " << r1.denominator() << std::endl;
    std::cout << "r2 : " << r2.numerator() << " / " << r2.denominator() << std::endl;
    std::cout << "r3 : " << r3.numerator() << " / " << r3.denominator() << std::endl;
}