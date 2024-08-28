#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "string.h"

class Employee
{
friend std::ostream& operator << (std::ostream& out, const Employee& rhs);
private:
    int id_;
    String name_;
    const Employee *pManager_;

    // 컴파일러가 자동으로 생성해주는 6개의 멤버 함수 중에서 사용하고 싶지 않은 함수는 private에 선언
    Employee(const Employee& rhs);              // is not use
    Employee& operator=(const Employee& rhs);    // is not use

public:
    Employee(int id, String name, const Employee *p);

    int getId() const;
    String getName() const;
    const Employee *getPManager() const;

};

#endif