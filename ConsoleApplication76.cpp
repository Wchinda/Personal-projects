// ConsoleApplication76.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Node1.h"
using namespace std;


int main()
{
	Node1 b;
	Node1 *ptr;
	int r, a;
	ptr = 0;
	cout << "How many items you wish to enter?";
	cin >> r;
	cout << "Enter your itenms: " << "\n";
	for (int i = 0; i < r; i++)
	{
		cin >> a;
		b.setItem(a);
		b.setNext(ptr);
		ptr++;
	}
	cout << "Your items are: " << "\n";
	b.getItem();
	return 0;
}
