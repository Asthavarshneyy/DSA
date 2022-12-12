#include<bits/stdc++.h>
#include "linkedlist.cpp"
#include "doublelinked.cpp"
#include "circularlist.cpp"
using namespace std;

int main() {
	cout<<"Lab 1 by Astha Varshney"<<endl;
	cout<<"------------"<<endl;
	cout<<"Menu"<<endl;
	cout<<"1. Singly Linked list"<<endl;
	cout<<"2. Doubly Linked List"<<endl;
	cout<<"3. Circular Linked List"<<endl;
	cout<<"------------"<<endl;
	cout<<"Enter your choice: ";
	int a;
	cin>>a;
	switch(a)
	{
		case 1:
		LinkedList();
		break;
		case 2:
		LinkedList();
		break;
    case 3:
    CircularList();
    break;
		default:
		cout<<"Wrong Input";
	}
	return 0;
}

