#pragma once
#include "Node.h"
#include <iostream>
using namespace std;
template <typename T>
class LinkedList
{
protected:
	Node<T>* head;
public:
	LinkedList();
	virtual void insertAtTail(T) = 0;
	virtual void display() = 0;
	virtual void insertAtHead(T) = 0;
	virtual T deleteFromTail() = 0;
	virtual T deleteFromHead() = 0;
	virtual bool isEmpty() = 0;
	virtual void insertSorted(T) = 0;
	virtual bool deleteValue(T) = 0;
	virtual void deleteDuplicate()=0;
	virtual bool searchValue(T) = 0;
	
};
template <typename T>
LinkedList<T>::LinkedList()
{
	head = nullptr;
}