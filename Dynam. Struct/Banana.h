#pragma once

#ifndef BANANA_H
#define BANANA_H

template <typename T>

class Banana {
private:
	struct Node {
		T data;
		Node* prev;
		Node* next;

		Node(T val) : data(val), prev(nullptr), next(nullptr){}
	};

	Node* head;
	Node* tail;

public:
	Banana();
	~Banana();
	void AddToHead(T value);
	void AddToTail(T value);
	void DeleteFromHead();
	void DeleteFromTail();
	void DeleteAll();
	void Show () const;


};
#include "Banana.cpp"
#endif // BANANA_H
