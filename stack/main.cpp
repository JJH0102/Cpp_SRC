// #include <cstdio>		// 네임 스페이스가 적용되는 헤더 파일
#include <iostream>
#include "stack.h"

int main()
{	
	Stack s1(10), s2(100);
	
	// s1.initStack(10);	* 생성자와 소멸자를 만들었기 때문에 생략
	// s1.initStack(100);
	
	s1.push(100);
	s1.push(200);
	s1.push(300);

	// s1.tos = 0;  --> stack.h에서 private로 선언했기 때문에 접근 불가
	
	// printf("s1 1st pop() : %d\n", s1.pop());
	// printf("s1 2nd pop() : %d\n", s1.pop());
	// printf("s1 3rd pop() : %d\n", s1.pop());

	std::cout << "s1 1st pop() : ";		// cout -> 표준 출력 장치
	std::cout << s1.pop();
	std::cout << "\n";

	// 22~24 코드를 27 코드처럼 이어서 작성할 수 있음
	std::cout << "s1 2nd pop() : " << s1.pop() << std::endl;	// \n = std::endl
	std::cout << "s1 3rd pop() : " << s1.pop() << std::endl;
	
	s2.push(700);
	s2.push(800);
	s2.push(900);
	
	// printf("s2 1st pop() : %d\n", s2.pop());
	// printf("s2 2nd pop() : %d\n", s2.pop());
	// printf("s2 3rd pop() : %d\n", s2.pop());

	std::cout << "s2 1st pop() : " << s2.pop() << std::endl;
	std::cout << "s2 2nd pop() : " << s2.pop() << std::endl;
	std::cout << "s2 3rd pop() : " << s2.pop() << std::endl;
	
	// s1.cleanupStack();
	// s2.cleanupStack();
	
	return 0;
}
