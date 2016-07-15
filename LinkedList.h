#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
#include<stdio.h>

using namespace std;

class Node {

public:
	//Constructor
	Node();
	//Overloaded Constructor
	Node(int theData, Node*previous, Node*next);

	//Need get stuff.
	int getData() const;
	Node* getPrevLink() const;
	Node* getNextLink() const;

	//Setter data
	void setData(int theData);
	void setPrevLink(Node* prev);
	void setNextLink(Node* next);
	~Node();
private:
	int data;
	Node* prevLink;
	Node* nextLink;

};


class LinkedList{
	//Const
public:
	int getNumberOfElements();
	Node* getFirst();
	Node* getLast();
	void insertFront(int theData);
	void insertLast(int theData);
	void destroyList();
	void print() const;
	~LinkedList();
private:
	Node* first;
	Node* last;
	int numberOfElements;

};


#endif
