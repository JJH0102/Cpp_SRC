// 

#include "safeArray.h"

#include <iostream>

int main()
{
    SafeArray arr1; 
    SafeArray arr2(20); 
    
    int nums[] = {1, 2, 3, 4, 5};
    SafeArray arr3(nums, 5);
    const SafeArray arr4 = arr3;

    arr1 = arr3;

    if(arr1 == arr3) {
        std::cout << "arr1 and arr3 are equal" << std::endl;
    }
    else {
        std::cout << "arr1 and arr3 are not equal" << std::endl;
    }

    for (int i = 0; i < arr1.size(); ++i) {
        std::cout << arr1[i] << " ";            // arr1.operator[](i)
    }
    std::cout << std::endl;

    for (int i = 0; i < arr4.size(); ++i) {
        std::cout << arr4[i] << " ";            // arr4.operator[](i)
    }
    std::cout << std::endl;

    // arr1[-1] = 1;                            // boundary error

    Array *pArr = new SafeArray;            // 함수 인자에서 사용
    pArr->operator[](-1) = 1;

    delete pArr;

    return 0;
}