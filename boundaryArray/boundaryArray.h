#ifndef BOUNDARY_ARRAY_H
#define BOUNDARY_ARRAY_H

#include "safeArray.h"

template <typename T>
class BoundaryArray : public SafeArray<T>
{
private:
    int low_;

public:
    explicit BoundaryArray(int size = Array<T>::ARRAYSIZE);
    BoundaryArray(int low, int high);
    BoundaryArray(const T* pArr, int size, int low);

    bool operator==(const BoundaryArray<T>& rhs) const;

    // [] 연산
    T& operator[](int index);
    const T& operator[](int index) const;

    int lower() const;
    int upper() const;
};

template <typename T>
BoundaryArray<T>::BoundaryArray(int size)
: SafeArray<T>(size)
{
    low_ = 0;
}

template <typename T>
BoundaryArray<T>::BoundaryArray(int low, int high)
: SafeArray<T>(high - low + 1)
{
    low_ = low;
}

template <typename T>
BoundaryArray<T>::BoundaryArray(const T* pArr, int size, int low)
: SafeArray<T>(pArr, size)
{
    low_ = low;
}

template <typename T>
bool BoundaryArray<T>::operator==(const BoundaryArray<T>& rhs) const
{
    return this->SafeArray<T>::operator==( (SafeArray<T>)rhs);
}

template <typename T>
T& BoundaryArray<T>::operator[](int index)
{
    return this->SafeArray<T>::operator[](index - low_);
}

template <typename T>
const T& BoundaryArray<T>::operator[](int index) const
{
    return this->SafeArray<T>::operator[](index - low_);
}

template <typename T>
int BoundaryArray<T>::lower() const
{
    return low_;
}

template <typename T>
int BoundaryArray<T>::upper() const
{
    return low_ + this->Array<T>::size_ - 1;
}

#endif