#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex
{
friend std::ostream& operator << (std::ostream& out, const Complex& rhs);      // std::ostream& out --> 레퍼런스로 사용
                                                                        // value는 성능상의 문제, 포인터는 cout앞에 '&' 붙여야 해서 모양이 이상해짐
                                                                        // 원래는 전역 함수였지만 friend:: 함수로 선언해서 class Complex의 friend 함수로 만들어줌
private:  
    // implementation

    double re;  
    double im;  

public:     
    // interface

    // 생성자
    Complex(double re = 0.0, double im = 0.0);      // im = 0.0 --> default argument(디폴트 인자)
                                                    // 디폴트 인자는 뒤쪽부터 써야 함. (double re = 0.0, double im); --> 오류 발생
    // Complex(double re); 
    // Complex();
    // 16에서 0.0으로 설정해줌으로서 17, 18 코드와 같아지기 때문에 필요 없어짐
    Complex(const Complex& rhs);   

    // 소멸자
    ~Complex();

    // 치환 연산 함수
    Complex& operator=(const Complex& rhs);

    // 비교 연산 함수
    bool operator==(const Complex& rhs);
    bool operator!=(const Complex& rhs);

    // +, - 연산 함수
    const Complex operator + (const Complex& rhs);
    const Complex operator - (const Complex& rhs);
};

#endif