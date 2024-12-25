#include "Banana.h"
#include <iostream>

int main() {
	Banana<int> list;

	list.AddToTail(1);
	list.AddToTail(2);
	list.AddToTail(3);
	list.Show();

	list.AddToHead(0);
	list.Show();

	list.DeleteFromHead();
	list.Show();

	list.DeleteFromTail();
	list.Show();

	list.DeleteAll();
	list.Show();

	return 0;
}