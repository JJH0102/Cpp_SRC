#include <cassert>
#include "rational.h"

Rational::Rational(int q, int p)
{
    assert(p != 0);
    
    this->q = q;
    this->p = p;
}

Rational::Rational(int q)
{
    this->q = q;
    this->p = 1;
}

Rational::Rational()
{
    this->q = 0;
    this->p = 1;
}

Rational::~Rational()
{

}

int Rational::numerator()
{
    return this->q;
}

int Rational::denominator()
{
    return this->p;
}

void Rational::numerator(int q)
{
    this->q = q;
}

void Rational::denominator(int p)
{
    assert(p != 0);
    
    this->p = p;
}

