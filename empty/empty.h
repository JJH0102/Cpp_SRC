#ifndef EMPTY_H
#define EMPTY_H

class Empty
{
public:
    
    // 컴파일러가 자동으로 생성해주는 멤버 함수 6개

    // 1. Empty() {} // default 생성자 자동 생성
    // 2. Empty(const Empty& rhs) // 복사 생성자가 없으면 각각의 멤버 치환해주는 복사 생성자 생성
    // 3. ~Empty() {}
    // 4. Empty& operator = (const Empty& rhs)

    // 함수 이름, 인자 타입, 인자 개수, const의 여부에 따라 함수 중복을 사용할 수 있음
    // 5. Empty& operator&() { return this; }
    // 6. const Empty& operator&() const { return this; }
};

#endif