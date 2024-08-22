#ifndef STACK_H
#define STACK_H

 class Stack	// struct -> class
{
private:
	int *pArr;
	int size;
	int tos;

public:
	Stack(int size);		// --> 생성자로 변경 * 생성자 이름은 구조체와 동일하고 반환타입 X
	~Stack();			// --> 소멸자로 변경 * 소멸자 이름은 생성자 이름 앞에 '~'를 붙이고 반환타입 X
	
	void push(int data);
	int pop();
};

// -> 위에 있는 멤버 변수로 이동
// void initStack(Stack *ps, int size);
// void cleanupStack(Stack *ps);
// void push(Stack *ps, int data);
// int pop(Stack *ps);

#endif
