#ifndef STRING_H
#define STRING_H

#include <ostream>

class String
{
friend std::ostream& operator << (std::ostream& out, const String& rhs);
private:
    char *str_;
    int len_;

public:
    String(const char *s);
    String();
    String(const String& rhs);

    ~String();

    String& operator=(const String& rhs);

    // 비교 함수
    bool operator==(const String& rhs) const;

    // + 연산 함수
    const String operator+(const String& rhs) const;

    // get 함수
    // str을 return하는 함수
    const char *c_str() const;
    // length를 return하는 함수
    int length() const;
};


#endif