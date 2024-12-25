#include "Banana.h"
#include <iostream>

template <typename T>
Banana<T>::Banana() : head(nullptr), tail(nullptr) {}

template <typename T>
Banana<T>::~Banana() {
	DeleteAll();
}

// + Голова  
template <typename T>
void Banana<T>::AddToHead(T value) {
	Node* newNode = new Node(value);
	if (!head){
		head = tail = newNode;
	}
	else {
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
}

// + Хвіст 
template <typename T>
void Banana<T>::AddToTail(T value) {
	Node* newNode = new Node(value);
	if (!tail) {
		head = tail = newNode;
	}
	else {
		newNode->prev = tail;
		tail->next = newNode;
		tail = newNode;
	}
}

// - Голова
template <typename T>
void Banana<T>::DeleteFromHead() {
	if (!head) return;
	Node* temp = head;
	head = head->next;
	if (head) head->prev = nullptr;
	else tail = nullptr;
	delete temp;
}

// - Хвіст
template <typename T>
void Banana<T>::DeleteFromTail() {
	if (!tail) return;
	Node* temp = tail;
	tail = tail->prev;
	if (tail) tail->next = nullptr;
	else head = nullptr;
	delete temp;
}

// - Всі елементи 

template <typename T>
void Banana<T>::DeleteAll() {
	while (head){
		DeleteFromHead();
	}
}

//- Всі елементи списку 
template <typename T>
void Banana<T>::Show() const {
	Node* current = head;
	while (current){
		std::cout << current->data << " ";
		current = current->next;
	}
	sstd::cout << std::endl;
}
