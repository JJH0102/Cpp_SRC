#include <iostream>

int main()
{
    // std::cout << "hello, world";
    operator << (std::cout, "hello, world");
    // std::cout.operator << ("hello, world");

    // std::cout << std::endl;
    std::cout.operator << (std::endl);

    // std::cout << "hello, world" << std::endl;
    operator << (std::cout, "hello, world").operator << (std::endl);    // 12 코드를 13 코드로 컴파일러 변환

    return 0;
}