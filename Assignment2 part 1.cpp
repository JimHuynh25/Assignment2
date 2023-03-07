#include "Header.h"

int main() {
	SingleLinkedList List;
	Item_Type item;
	// linked list
	for (int i = 5; i > 0; i--)
	{
		item.size = i;
		List.push_back(item);
	}
	cout << "List contents: " << endl;
	List.printSingleLinkedList();

	cout << "Testing pop_front(): " << endl;
	List.pop_front();
	List.printSingleLinkedList();

	cout << "Testing pop_back(): " << endl;
	List.pop_back();
	List.printSingleLinkedList();

	cout << "Testing push_front(): " << endl;
	item.size = 20;
	List.push_front(item);
	List.printSingleLinkedList();

	cout << "Testing push_back(): " << endl;
	item.size = 25;
	List.push_back(item);
	List.printSingleLinkedList();

	cout << "Testing insert():  " << endl;
	item.size = 55;
	List.insert(4, item);
	List.printSingleLinkedList();

	cout << "Testing remove(): " << endl;
	List.remove(3);
	List.printSingleLinkedList();

	cout << "Find value 4" << endl;
	item.size = 4;
	cout << "Found at index: " << List.find(item) << endl << endl;

	cout << "Front: " << List.front()->item.size << endl;
	cout << "Back: " << List.back()->item.size << endl;
	cout << "Size: " << List.getNumItems() << endl;
}
