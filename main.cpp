#include "LinkedList.h"

int main(){
	LinkedList DCFans;
	DCFans.insertFront(0);
	DCFans.insertFront(1);
	DCFans.insertFront(5);

	DCFans.print();
	
	LinkedList MarvelFans;
	MarvelFans.insertLast(2);
	MarvelFans.insertLast(4);
	MarvelFans.insertLast(6);
	MarvelFans.print();
	cout << "Thanks for nothing DC." << endl;
	system("pause");

	return 0;
}
