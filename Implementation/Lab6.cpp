#include<iostream>
#include "BubbleSort.cpp"
#include "MergeSort.cpp"
#include "InsertionSort.cpp"
#include "SelectionSort.cpp"
using namespace std;

void lab6()
{
  int ch;
  cout<<"Lab 6 by Astha Varshney"<<endl;
	cout<<"------------"<<endl;
  cout<<"MENU: "<<endl;
  cout<<"-------------------"<<endl; 
  cout<<"1.BUBBLE SORT\n2.MERGE SORT\n3.INSERTION SORT\n4.SELECTION SORT\n5.EXIT\n";
  int i=1;
  while(i)
  { 
    cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-5)"<<endl;
    cout<<"-------------------"<<endl; 
    
   
    cin>>ch;
    switch(ch)
    {
      case 1:BS();
             break;
      case 2: MS();
              break;
      case 3: IS();
              break;
      case 4: SS();
              break;
      case 5: i=0;
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
