// 2024.09.10 예외 처리 추가

#include <iostream>
#include "safeArray.h"

int main()
{
    int i;
    
    int nums1[] = {1, 2, 3, 4, 5};
    SafeArray<int> arr1(nums1, 5);

    try {

        arr1[-1] = 1;

    } catch (const InvalidIndex& e) {
        std::cerr << "invalid Index : " << e.getIndex() << std::endl;
    }

    for (i = 0; i < arr1.size(); ++i) {
        std::cout << arr1[i] << std::endl;
    }

    double nums2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    SafeArray<double> arr2(nums2, 5);

    for (i = 0; i < arr2.size(); ++i) {
        std::cout << arr2[i] << std::endl;
    }
    
    return 0;
}