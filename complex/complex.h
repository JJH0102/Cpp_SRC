#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:    // 대개 멤버 변수 선언
    // implementation

    double re;  // 실수부(real part)
    double im;  // 허수부(imaginary part)

public:     // 대개 멤버 함수 선언
    // interface

    // 생성자
    Complex(double re, double im);     // (3.0, 4.0) 일 때
    Complex(double re);                // (3.0, 0.0i) 일 때
    Complex();                         // (0, 0.0i) 일 때
    // --> one-interface multi-method을 위해 함수 중복 기능 제공

    // 소멸자
    ~Complex();

    // 실수부, 허수부를 가져오는 함수(get 함수)
    double real();
    double imag();

    // 실수부, 허수부를 세팅하는 함수(set 함수)
    void real( double re);
    void imag( double im);
};

#endif