#ifndef QUEUE_H
#define QUEUE_H

class Queue {
private:
	int *pArr;
	int size;
	int front;
	int rear;

public:
	Queue(int size);
	~Queue();

	void push(int data);
	int pop();

};

// void initQueue(Queue *pq, int size);
// void cleanupQueue(Queue *pq);

// void push(Queue *pq, int data);
// int pop(Queue *pq);

#endif
