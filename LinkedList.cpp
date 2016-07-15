#include "LinkedList.h"
//Node* myNodePointer = new Node();
Node::Node(){
	data = 0;
	prevLink = NULL;
	nextLink = NULL;
}
//Node* myNodePointer = new Node(5, previousNode, nextNode);
Node::Node(int theData, Node* previous, Node* next) {
	data = theData;
	prevLink = previous;
	nextLink = next;
}
//cout << Node.getData() << ptrToNode->getData();
int Node::getData() const
{
	return data;
}

Node* Node::getPrevLink() const{
	return prevLink;
}
Node* Node::getNextLink() const{
	return nextLink;
}
//TO THE SETTER FUNCTION
void Node::setData(int theData){
	data = theData;
}
void Node::setPrevLink(Node* prev){

	prevLink = prev;
}
void Node::setNextLink(Node* next){

	nextLink = next;
}
Node::~Node()
{
	int data = 0;
	prevLink = NULL;
	nextLink = NULL;
}
//Linked List
void LinkedList::insertFront(int theData)
{
	if (numberOfElements == 0)
	{
		first = new Node(theData, NULL, NULL);
		last = first;
		++numberOfElements;
	}
	else if (numberOfElements == 1)
	{
		last = first;
		first = new Node(theData, NULL, last);
		last->setPrevLink(first);
		++numberOfElements;
	}
	else
	{
		Node* current = first;
		first = new Node(theData, NULL, current);
		current->setPrevLink(first);
		++numberOfElements;
	}
}
void LinkedList::insertLast(int theData){
	if (numberOfElements == 0)
	{
		first = new Node(theData, NULL, NULL);
		last = first;
		++numberOfElements;
	}
	else if (numberOfElements == 1)
	{

		last = new Node(theData, first, NULL);
		first->setNextLink(last);
		++numberOfElements;
	}
	else
	{
		Node* current = last;
		last = new Node(theData, current, NULL);
		current->setNextLink(last);
		++numberOfElements;
	}
}
//Print
void LinkedList::print() const{
	Node* current = first;
	while (current != NULL)
	{
		cout << current->getData() << " ";
		current = current->getNextLink();
	}
	cout << endl;
}
void LinkedList::destroyList() {
	Node* current = first;
	while (first != NULL)
	{
		first = first->getNextLink(); //First is = second
		delete current;
		current = first; // second guy...
		--numberOfElements;
	}
}


//Destructor

LinkedList::~LinkedList() { 
	destroyList(); 
}
