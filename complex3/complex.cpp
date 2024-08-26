#include "complex.h"
#include <iostream>
#include <ostream>


std::ostream& operator << (std::ostream& out, const Complex& rhs)
{
    out << "(" << rhs.re << ", " << rhs.im << "i)";

    return out;
}

Complex::Complex(double re, double im)
{
    this->re = re;
    this->im = im;
}

Complex::Complex(const Complex& rhs)
{
    this->re = rhs.re;
    this->im = rhs.im;
}

Complex::~Complex()
{

}

Complex& Complex::operator=(const Complex& rhs)
{
    this->re = rhs.re;
    this->im = rhs.im;

    return *this;
    // main.cpp -> c1 = c2 = c3 코드에서 c2 = 3는 c2.operator = (c3)라고 할 수 있음.
    // c2.operator = (c3)에서 결과값은 c2이고 this가 가르키는 것이기 때문에 '*this'라고 작성
}

bool Complex::operator==(const Complex& rhs)
{
    return this->re == rhs.re && this->im == rhs.im;
}

bool Complex::operator!=(const Complex& rhs)
{
    // 아래 세 코드 모두 같은 코드
    // = return this->re != rhs.re || this->im != rhs.im;
    // = return !(*this == rhs);
    return !this->operator==(rhs);
}

const Complex Complex::operator + (const Complex& rhs)
{
    Complex result(this->re + rhs.re, this->im + rhs.im);
    // 실수부는 실수부끼리 허수부는 허수부끼리 더하기

    return result;
    // result는 지역 변수이므로 사라짐. 그러므로 value 넘겨야 함.
}

const Complex Complex::operator - (const Complex& rhs)
{
    Complex result(this->re - rhs.re, this->im - rhs.im);

    return result;
}