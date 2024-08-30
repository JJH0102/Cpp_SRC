#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex
{
friend std::ostream& operator << (std::ostream& out, const Complex& rhs);

private:  
    // implementation

    double re_;     // 'this->'를 생략하기 위해 '_' 붙여서 구분
    double im_;  

public:     
    // interface

    // 생성자
    Complex(double re = 0.0, double im = 0.0); 
    // Complex(double re);
    // Complex();

    // +=, -=, *=, /= 연산 함수 --> += 연산만 구현
    Complex& operator += (const Complex& rhs);
    // Complex& operator -= (const Complex& rhs);
    // Complex& operator *= (const Complex& rhs);
    // Complex& operator /= (const Complex& rhs);

    // +, -, *, / 연산 함수 --> + 연산만 구현
    const Complex operator + (const Complex& rhs) const; // read only로 동작하는 함수는 뒤에 const를 붙임
    // const Complex operator - (const Complex& rhs) const;
    // const Complex operator * (const Complex& rhs) const;
    // const Complex operator / (const Complex& rhs) const;

    const Complex& operator++();           // 전위 연산
    const Complex operator++(int );       // 후위 연산

    // ==, !=, >, <, >=, <= 연산 함수 --> ==, != 연산만 구현
    bool operator == (const Complex& rhs) const;
    bool operator != (const Complex& rhs) const;
    // bool operator > (const Complex& rhs) const;
    // bool operator < (const Complex& rhs) const;
    // bool operator >= (const Complex& rhs) const;
    // bool operator <= (const Complex& rhs) const;

    double real() const;
    double imag() const;

    void real(double re);
    void imag(double im);

};

#endif