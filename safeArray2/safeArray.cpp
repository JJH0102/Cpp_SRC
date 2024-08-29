#include "safeArray.h"
#include <cassert>

// const int SafeArray::ARRAYSIZE = 100;

SafeArray::SafeArray(const int *pArr, int size)
: Array(pArr, size)
{

}

SafeArray::SafeArray(const SafeArray& rhs)
: Array( (Array)rhs)    // slicing
{

}

SafeArray::SafeArray(int size)
: Array(size)
{
    
}

SafeArray::~SafeArray()
{
    // 부모 쪽에 있는 소멸자가 자동으로 호출됨
}

SafeArray& SafeArray::operator=(const SafeArray& rhs)
{
    this->Array::operator=( (Array)rhs);
    
    return *this;       // 자기 자신이 객체
}

bool SafeArray::operator==(const SafeArray& rhs) const
{
    return this->Array::operator==( (Array)rhs);
}


int& SafeArray::operator[](int index)
{
   assert(index >= 0 && index < this->Array::size_);       // this->Array::size_ --> 부모 쪽에 있는 size_ 변수 호출

   return this->Array::operator[](index);
}

const int& SafeArray::operator[](int index) const
{
    assert(index >= 0 && index < this->Array::size_);

   return this->Array::operator[](index);
}

/*
int SafeArray::size() const
{
    return size_;
}
*/