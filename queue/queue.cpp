#include <cstdlib>
#include <cassert>
#include "queue.h"

Queue::Queue(int size)
{
	this->pArr = new int[size];

	assert(this->pArr != NULL);
	
	this->size = size;
	this->front = this->rear = 0;
}

Queue::~Queue()
{
	delete [] this->pArr;
}

void Queue::push(int data)
{
	assert(this->rear != this->size);

	this->pArr[this->rear] = data;
	++this->rear;
}

int Queue::pop()
{
	assert(this->front != this->rear);

	int i = this->front;
	++this->front;
	
	return this->pArr[i];
}

