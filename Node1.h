#pragma once
class Node1
{
private:
	int item; // A data item
	Node1 *next; // Pointer to next node

public:
	Node1();
	Node1(const int& anItem);
	Node1(const int& anItem, Node1 * nextNodePtr);
	void setItem(const int& anItem);
	void setNext(Node1 * nextNodePtr);
	int getItem() const;
	Node1 * getNext() const;
}; // end Node
