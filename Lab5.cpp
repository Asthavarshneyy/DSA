#include<bits/stdc++.h>
#include "BT.cpp"
#include "BST.cpp"
using namespace std;

void Lab5()
{
  int ch;
  cout<<"Lab 5 by Astha Varshney"<<endl;
	cout<<"------------"<<endl;
  cout<<"MENU: "<<endl;
  cout<<"-------------------"<<endl; 
  cout<<"1.BINARY TREE\n2.BINARY SEARCH TREE\n3.EXIT\n";
  int i=1;
  while(i)
  { 
    cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-3)"<<endl;
    cout<<"-------------------"<<endl; 
    
   
    cin>>ch;
    switch(ch)
    {
      case 1:BinaryT();
             break;
      case 2: BinaryST();
              break;
      case 3: i=0;
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
