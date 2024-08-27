#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
friend std::ostream& operator << (std::ostream& out, const Rational& rhs);

private:  
    // implementation

    int num_;     // 'this->'를 생략하기 위해 '_' 붙여서 구분
    int den_;

    // 약분 함수 --> private이므로 같은 class 내에 있는 다른 멤버 함수들만 호출 가능(helper 함수)
    void reduce();

public:     
    // interface

    // 생성자
    Rational(int num = 0, int den = 1); 

    // + 연산 함수 
    const Rational operator + (const Rational& rhs) const;

    const Rational& operator++();           // 전위 연산
    const Rational operator++(int );       // 후위 연산

    // += 연산 함수
    Rational& operator += (const Rational& rhs);

    // ==, != 연산 함수 
    bool operator == (const Rational& rhs) const;
    bool operator != (const Rational& rhs) const;

    int getNum() const;
    int getDen() const;

    void setNum(int num);
    void setDen(int den);

};

#endif