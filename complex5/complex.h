#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex
{
friend std::istream& operator >> (std::istream& in, Complex& rhs);    
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

inline Complex::Complex(double re, double im)
: re_(re), im_(im)  // 10 코드와 12, 13 코드는 동일 // 이렇게 초기화 하는 것을 '생성자 초기화 리스트'라고 함
{

}

inline double Complex::real() const
{
    return re_;
}
inline double Complex::imag() const
{
    return im_;
}

inline void Complex::real(double re)
{
    re_ = re;
}

inline void Complex::imag(double im)
{
    im_ = im;
}

#endif