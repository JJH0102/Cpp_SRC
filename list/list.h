#ifndef LIST_H
#define LIST_H

typedef struct node {
	int data;
	struct node *next;
} Node;

class List {
	Node *ptr;

	List();
	~List();

	void printList();

	void insertFirstNode(int data);
	void insertNode(int prevData, int data);

	void deleteNode(int data);
};

// void initList(List *pList);
// void cleanupList(List *pList);

// void printList(const List *pList);

// void insertFirstNode(List *pList, int data);
// void insertNode(List *pList, int prevData, int data);

// void deleteNode(List *pList, int data);

#endif
