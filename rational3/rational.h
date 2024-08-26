#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
friend std::ostream& operator << (std::ostream& out, const Rational& rhs);
private:  
    // implementation

    int num;
    int den;

public:     
    // interface

    // 생성자
    Rational(int num = 0, int den = 0);
    Rational(const Rational& rhs);

    // 소멸자
    ~Rational();

    // 치환 연산 함수
    Rational& operator=(const Rational& rhs);

    // 비교 연산 함수
    bool operator==(const Rational& rhs);
    bool operator!=(const Rational& rhs);

    // +, - 연산 함수
    const Rational operator + (const Rational& rhs);
    const Rational operator - (const Rational& rhs);
    const Rational operator * (const Rational& rhs);
    const Rational operator / (const Rational& rhs);
};

#endif