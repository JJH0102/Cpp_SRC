#include "safeArray.h"
#include <cassert>

const int SafeArray::ARRAYSIZE = 100;

SafeArray::SafeArray(const int *pArr, int size)
: pArr_(new int[size]), size_(size)
{
    assert(pArr_ );

    for (int i = 0; i < size; ++i) {
        pArr_[i] = pArr[i];
    }
}

SafeArray::SafeArray(const SafeArray& rhs)
: pArr_(new int[rhs.size_]), size_(rhs.size_)
{
    assert(pArr_ );

    for (int i = 0; i < rhs.size_; ++i) {
        pArr_[i] = rhs.pArr_[i];
    }
}

SafeArray::SafeArray(int size)
: pArr_(new int[size]), size_(size)
{
    assert(pArr_ );
}

SafeArray::~SafeArray()
{
    delete [] pArr_;
}

SafeArray& SafeArray::operator=(const SafeArray& rhs)
{
    if (this != &rhs) {
        delete [] pArr_;                // 원본 날리기
        pArr_ = new int[rhs.size_];     // 공간 새로 할당

        assert(pArr_);

        size_ = rhs.size_;              // size로 치환

        for (int i = 0; i < rhs.size_; ++i) {
            pArr_[i] = rhs.pArr_[i];           
        }
    }
    
    return *this;       // 자기 자신이 객체
}

bool SafeArray::operator==(const SafeArray& rhs) const
{
    int i;
    
    if (size_ != rhs.size_)
        return false;

    for (i = 0; i < rhs.size_; ++i) {
        if (pArr_[i] != rhs.pArr_[i])
            break;
    }

    return (i == rhs.size_);
}


int& SafeArray::operator[](int index)
{
   assert(index >= 0 && index < size_);

   return pArr_[index];
}

const int& SafeArray::operator[](int index) const
{
    return pArr_[index];
}

int SafeArray::size() const
{
    return size_;
}