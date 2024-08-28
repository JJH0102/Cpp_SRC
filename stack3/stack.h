#ifndef STACK_H
#define STACK_H

#include "array.h"

// #define STACKSIZE 100
// extern int STACKSIZE;

 class Stack
{
private:
	static const int STACKSIZE;

	// int *pArr_;
	// int size_;
	Array arr_;
	int tos_;

	Stack(const Stack&);
	Stack& operator=(const Stack&);

public:
	explicit Stack(int size = STACKSIZE);
	
	void push(int data);
	int pop();

	bool isFull() const;
	bool isEmpty() const;
};

#endif
