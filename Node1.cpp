#include "pch.h"
#include "Node1.h"


Node1::Node1() : next(nullptr)
{
} // end default constructor


Node1::Node1(const int& anItem) : item(anItem), next(nullptr)
{
} // end constructor

Node1::Node1(const int& anItem, Node1 * nextNodePtr) :
	item(anItem), next(nextNodePtr)
{
} // end constructor

void Node1::setItem(const int& anItem)
{
	item = anItem;
} // end setItem

void Node1::setNext(Node1* nextNodePtr)
{
	next = nextNodePtr;
} // end setNext

int Node1::getItem() const
{
	return item;
} // end getItem

Node1* Node1::getNext() const
{
	return next;
}