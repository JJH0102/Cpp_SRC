#ifndef SAFEARRAY_H
#define SAFEARRAY_H

#include "array.h"

class SafeArray : public Array  // Array class로 부터 상속받아서 SafeArray를 정의하겠다는 의미
{
private:
    // static const int ARRAYSIZE; --> Array에 이미 있으므로 주석 처리
    
    // int *pArr_;
    // int size_;

public:
    SafeArray(const int *pArr, int size);
    SafeArray(const SafeArray& rhs);
    // explicit SafeArray(int size = Array::getArraySize()); // --> 형변환이 일어나지 않도록 제한
    explicit SafeArray(int size = ARRAYSIZE); 

    virtual ~SafeArray();

    SafeArray& operator=(const SafeArray& rhs);

    bool operator==(const SafeArray& rhs) const;

    virtual int& operator[](int index);
    virtual const int& operator[](int index) const;

    // int size() const;
};

#endif