#ifndef SAFEARRAY_H
#define SAFEARRAY_H

// extern const int STACKSIZE;

class SafeArray
{
private:
    static const int ARRAYSIZE;
    
    int *pArr_;
    int size_;

public:
    SafeArray(const int *pArr, int size);
    SafeArray(const SafeArray& rhs);
    explicit SafeArray(int size = ARRAYSIZE); // --> 형변환이 일어나지 않도록 제한

    ~SafeArray();

    SafeArray& operator=(const SafeArray& rhs);

    bool operator==(const SafeArray& rhs) const;

    int& operator[](int index);
    const int& operator[](int index) const;

    int size() const;
};

#endif