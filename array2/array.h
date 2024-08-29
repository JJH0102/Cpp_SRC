#ifndef ARRAY_H
#define ARRAY_H

template <typename T>   // 'T'라는 타입을 받아서 C++ 코드로 만들기 위해 작성한 코드
class Array
{
private:    
    T *pArr_;

protected:                          // 자식 쪽에 멤버 함수가 접근 가능
    static const int ARRAYSIZE;
    int size_;

public:
    static int getArraySize();

    Array(const T *pArr, int size);
    Array(const Array<T>& rhs);             // <T> --> class 이름, 생성자, 소멸자를 제외하고 Array 뒤에 '<T>' 붙이기
    explicit Array(int size = ARRAYSIZE); // --> 형변환이 일어나지 않도록 제한

    virtual ~Array();   // 버추얼 멤버 함수를 가지면 소멸자는 무조건 버추얼이 되어야 함

    Array<T>& operator=(const Array<T>& rhs);

    bool operator==(const Array<T>& rhs) const;

    virtual T& operator[](int index);
    virtual const T& operator[](int index) const;

    int size() const;
};

#include <cassert>

template <typename T>
const int Array<T>::ARRAYSIZE = 100;

template <typename T>
int Array<T>::getArraySize()
{
    return Array<T>::ARRAYSIZE;
}

template <typename T>
Array<T>::Array(const T *pArr, int size)
: pArr_(new T[size]), size_(size)
{
    assert(pArr_ );

    for (int i = 0; i < size; ++i) {
        pArr_[i] = pArr[i];
    }
}

template <typename T>
Array<T>::Array(const Array<T>& rhs)
: pArr_(new T[rhs.size_]), size_(rhs.size_)
{
    assert(pArr_ );

    for (int i = 0; i < rhs.size_; ++i) {
        pArr_[i] = rhs.pArr_[i];
    }
}

template <typename T>
Array<T>::Array(int size)
: pArr_(new T[size]), size_(size)
{
    assert(pArr_ );
}

template <typename T>
Array<T>::~Array()
{
    delete [] pArr_;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
    if (this != &rhs) {
        delete [] pArr_;
        pArr_ = new T[rhs.size_];

        assert(pArr_);

        size_ = rhs.size_;

        for (int i = 0; i < rhs.size_; ++i) {
            pArr_[i] = rhs.pArr_[i];
        }
    }
    
    return *this;       // 자기 자신이 객체
}

template <typename T>
bool Array<T>::operator==(const Array<T>& rhs) const
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

template <typename T>
T& Array<T>::operator[](int index)
{
    return pArr_[index];
}

template <typename T>
const T& Array<T>::operator[](int index) const
{
    return pArr_[index];
}

template <typename T>
int Array<T>::size() const
{
    return size_;
}

#endif