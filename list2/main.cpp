#include "list.h"

int main()
{
	List list;

	list.insertFirstNode(4);		// [4]
	list.print();
	
	list.insertFirstNode(3);		// [3, 4]
	list.print();
	
	list.insertFirstNode(1);		// [1, 3, 4]
	list.print();
	
	list.insertNode(1, 2);		// [1, 2, 3, 4]
	list.print();

	list.deleteNode(3);			// [1, 2, 4]
	list.print();
	
	return 0;
}
