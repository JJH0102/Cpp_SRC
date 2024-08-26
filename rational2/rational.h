#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
private:    
    // implementation

    int num;  // 분자
    int den;  // 분모

public:    
    // interface

    // 생성자
    Rational(int num, int den);
    Rational(int num);                  // 변환 생성자
    Rational();                         // 디폴트 생성자
    Rational(const Rational& rhs);      // 복사 생성자, right-hand-side(rhs)

    // 소멸자
    ~Rational();

    // 치환 연산 함수
    void operator=(const Rational& rhs);

    // 비교 함수
    // bool operator == (Rational r);              // class 타입 객체 넘기기, 동작은 하지만 성능상에 문제가 있는 코드
    // bool operator == (const Rational *pr);      // 포인터 넘기기, 모양이 이상하므로 안씀
    bool operator == (const Rational& rhs);        // 레퍼런스 넘기기, 위의 두 코드보다 레퍼런스도 넘기는 것이 좋음

    // 분모, 분자를 가져오는 함수(get 함수)
    int getNum();
    int getDen();

    // 분모, 분자를 세팅하는 함수(set 함수)
    void setNum(int num);
    void setDen(int den);
    
};

#endif