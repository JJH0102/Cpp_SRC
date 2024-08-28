#ifndef ARRAY_H
#define ARRAY_H

// #define ARRAYSIZE 100

extern const int STACKSIZE;

class Array
{
private:
    static const int ARRAYSIZE;
    
    int *pArr_;
    int size_;

public:
    Array(const int *pArr, int size);
    Array(const Array& rhs);
    explicit Array(int size = ARRAYSIZE); // --> 형변환이 일어나지 않도록 제한

    ~Array();

    Array& operator=(const Array& rhs);

    bool operator==(const Array& rhs) const;

    int& operator[](int index);
    const int& operator[](int index) const;

    int size() const;
};

#endif