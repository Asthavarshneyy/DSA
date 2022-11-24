#include<iostream>
#include "Singlylinkedlist.cpp"
#include "circularlist.cpp"
#include "DoublyLinkedList.cpp"
using namespace std;

void Lab4()
{
  int ch;
  cout<<"Lab 4 by Astha Varshney"<<endl;
	cout<<"------------"<<endl;
  cout<<"MENU: "<<endl;
  cout<<"-------------------"<<endl; 
  cout<<"1.SINGLY LINKED LIST\n2.DOUBLY LINKED LIST\n3.CIRCULAR LINKED LIST\n4.EXIT\n";
  int i=1;
  while(i)
  { 
    cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-4)"<<endl;
    cout<<"-------------------"<<endl; 
    
   
    cin>>ch;
    switch(ch)
    {
      case 1:SLL();
             break;
      case 2: DLL();
              break;
      case 3: CLL();
              break;
      case 4: i=0;
              break;
      default:cout<<"Wrong Choice!!!!"<<endl;
             break;
    }
  }
  cout<<"------------------"<<endl;
  cout<<"The END"<<endl;
  cout<<"------------------"<<endl;
  return;  
}
