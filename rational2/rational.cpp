#include <cassert>
#include "rational.h"

Rational::Rational(int num, int den)
{
    assert(den != 0);
    
    this->num = num;
    this->den = den;
}

Rational::Rational(int num)
{
    this->num = num;
    this->den = 1;
}

Rational::Rational()
{
    this->num = 0;
    this->den = 1;
}

Rational::Rational(const Rational& rhs)
{
    this->num = rhs.num;
    this->den = rhs.den;
}


Rational::~Rational()
{
    
}

void Rational::operator=(const Rational& rhs)
{
    this->num = rhs.num; 
    this->den = rhs.den;
}

bool Rational::operator==(const Rational& rhs)
{
    // if (this->num == rhs.num && this->den == rhs.den) {
    //     return true;
    // }
    // else {
    //     return false;
    // }
    // (this->num == rhs.num && this->den == rhs.den) --> 이 식의 반환값이 이미 true or false이므로 밑에 처럼 변환 가능
    
    return (this->num == rhs.num && this->den == rhs.den);
}


// get, set 함수

int Rational::getNum()
{
    return this->num;
}

int Rational::getDen()
{
    return this->den;
}

void Rational::setNum(int num)
{
   this->num = num;
}

void Rational::setDen(int den)
{
    assert(den != 0);

    this->den = den;
}

