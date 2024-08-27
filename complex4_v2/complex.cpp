#include "complex.h"
#include <iostream>

std::ostream& operator << (std::ostream& out, const Complex& rhs)
{
    return out << "(" << rhs.re_ << ", " << rhs.im_ << "i)";
}

Complex::Complex(double re, double im)
: re_(re), im_(im)  // 10 코드와 12, 13 코드는 동일 // 이렇게 초기화 하는 것을 '생성자 초기화 리스트'라고 함
{
    // re_ = re;    // 'this->' 생략 가능 
    // im_ = im;    // re_, im_ 변수는 앞에 this->가 생략되어 있음
}

const Complex Complex::operator + (const Complex& rhs) const
{
    Complex result(re_ + rhs.re_, im_ + rhs.im_);

    return result;
}

const Complex& Complex::operator++()
{
    re_ = re_ +1;

    return *this;
}

const Complex Complex::operator++(int )
{
    Complex tmp = *this;

    re_ = re_ + 1;

    return tmp;
}

Complex& Complex::operator += (const Complex& rhs)
{
    re_ += rhs.re_;
    im_ += rhs.im_;

    return *this;
}

bool Complex::operator == (const Complex& rhs) const
{
    return re_ == rhs.re_ && im_ == rhs.im_;
}

bool Complex::operator != (const Complex& rhs) const
{
    return !this->operator==(rhs);
}

double Complex::real() const
{
    return re_;
}
double Complex::imag() const
{
    return im_;
}

void Complex::real(double re)
{
    re_ = re;
}

void Complex::imag(double im)
{
    im_ = im;
}