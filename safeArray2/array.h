#ifndef ARRAY_H
#define ARRAY_H

// #define ARRAYSIZE 100

// extern const int STACKSIZE;

class Array
{
private:    
    int *pArr_;

protected:                          // 자식 쪽에 멤버 함수가 접근 가능
    static const int ARRAYSIZE;
    int size_;

public:
    static int getArraySize();

    Array(const int *pArr, int size);
    Array(const Array& rhs);
    explicit Array(int size = ARRAYSIZE); // --> 형변환이 일어나지 않도록 제한

    virtual ~Array();   // 버추얼 멤버 함수를 가지면 소멸자는 무조건 버추얼이 되어야 함

    Array& operator=(const Array& rhs);

    bool operator==(const Array& rhs) const;

    virtual int& operator[](int index);
    virtual const int& operator[](int index) const;

    int size() const;
};

#endif