#include<iostream>
#include "Lab 1.cpp"
#include "Lab2.cpp"
#include "Lab3.cpp"
#include "Lab4.cpp"
#include "Lab5.cpp"
#include "Lab6.cpp"
using namespace std;

int main()
{
   int ch;
  cout<<"Data Structures by Astha Varshney"<<endl;
	cout<<"------------"<<endl;
  cout<<"MENU: "<<endl;
  cout<<"-------------------"<<endl; 
  cout<<"1.OPERATIONS ON ARRAYS\n2.STACK IMPLEMENTATION\n3.QUEUE IMPLEMENTATION\n4.LINKED LIST IMPLEMENTATION\n5.TREE IMPLEMENTATION\n6.SORTING TECHNIQUES\n7.EXIT\n";
  int i=1;
  while(i)
  { 
    cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-7)"<<endl;
    cout<<"-------------------"<<endl; 
    
   
    cin>>ch;
    switch(ch)
    {
      case 1:Lab1();
             break;
      case 2: Lab2();
              break;
      case 3: Lab3();
              break;
      case 4: Lab4();
              break;
      case 5: Lab5();
              break;     
      case 6: lab6();
              break;         
      case 7: i=0;
              break;
      default:cout<<"Wrong Choice!!!!"<<endl;
             break;
    }
  }
  cout<<"------------------"<<endl;
  cout<<"The END"<<endl;
  cout<<"------------------"<<endl;
  return 0;  
}
