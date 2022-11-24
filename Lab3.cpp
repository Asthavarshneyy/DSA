#include<iostream>
#include "linearqueue.cpp"
#include "circularqueue.cpp"
#include "priorityqueue.cpp"
using namespace std;

void Lab3()
{
  int ch;
  cout<<"Lab 3 by Astha Varshney"<<endl;
	cout<<"------------"<<endl;
  cout<<"MENU: "<<endl;
  cout<<"-------------------"<<endl; 
  cout<<"1.LINEAR QUEUE\n2.CIRCULAR QUEUE\n3.PRIOIRTY QUEUE\n4.EXIT\n";
  int i=1;
  while(i)
  { 
    cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-4)"<<endl;
    cout<<"-------------------"<<endl; 
    
   
    cin>>ch;
    switch(ch)
    {
      case 1:LQ();
             break;
      case 2: CQ();
              break;
      case 3: PQ();
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
