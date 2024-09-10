#ifndef LIST_H
#define LIST_H

struct Node {
friend class List;

private:
	int data;
	Node *next;

	Node(int data, Node *next);
	~Node();

	Node(const Node& rhs);				// is not used
	Node& operator=(const Node& rhs);
};

class List {
private:
	Node *ptr;

public:
	List();
	~List();

	void insertFirstNode(int data);
	void insertNode(int prevData, int data);

	void deleteNode(int data);

	void print();
};

#endif
