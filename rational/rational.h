#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
private:    
    // implementation

    int q;  // 분자
    int p;  // 분모

public:    
    // interface

    // 생성자
    Rational(int q, int p);
    Rational(int q);   
    Rational();

    // 소멸자
    ~Rational();

    // 분모, 분자를 가져오는 함수(get 함수)
    int numerator();
    int denominator();

    // 분모, 분자를 세팅하는 함수(set 함수)
    void numerator(int q);
    void denominator(int p);
};

#endif