#include <iostream>
#include "stack.h"

int main()
{	
	Stack s1;
	Stack s2(20);

	// s1 = s3;
	
	// s1 = s2;
	
	s1.push(100);
	s1.push(200);
	s1.push(300);

	std::cout << "s1 1st pop() : " << s1.pop() << std::endl;
	std::cout << "s1 1st pop() : " << s1.pop() << std::endl;
	std::cout << "s1 1st pop() : " << s1.pop() << std::endl;

	for (int i = 1; i <= 10; ++i) {
		if (!s2.isFull()) {
			s2.push(i);
		}
	}

	while (!s2.isEmpty()) {
		std::cout << s2.pop() << std::endl;
	}
	
	return 0;
}
