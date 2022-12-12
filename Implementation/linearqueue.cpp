#include <bits/stdc++.h> 
using namespace std;

class Lqueue
{
  int f, r, size;
  int *arr;
  public:
  //constructor
  Lqueue(int msize)
  {
    size=msize;
    f=r=0;
    arr=new int(size);
  }
  //to check if queue is full
  bool full()
  {
    return r==size;
  }
  //to check if queue is empty
  bool empty()
  {
    return (f==r);
  }
  //to push an element
  void enqueue()
  {
    if(full())
    {
      cout<<"Queue is full"<<endl;
      cout<<"------------------------------\n\n\n";
      return;
    }
    cout<<"Enter the number you want to push into the queue: ";
    int num;
    cin>>num;
    arr[r]=num;
    r++;
  }
  //to pop an element
  void dequeue()
  {
    if(empty())
    {
      cout<<"Queue is empty"<<endl;
      cout<<"------------------------------\n\n\n";
      return;
    }
    cout<<"Element deleted from the queue is "<<arr[f]<<endl;
    f++;
  }
  //to display the front element
  void front()
  {
    if(empty())
    {
      cout<<"Queue is empty"<<endl;
      cout<<"------------------------------\n\n\n";
      return;
    }
    cout<<"The front element is :"<<arr[f]<<endl;
    return;
  }
  void print()
  {
    if(empty())
    {
      cout<<"Queue is empty"<<endl;
      cout<<"------------------------------\n\n\n";
      return;
    }
    cout<<"The queue is: ";
    for(int i=f;i<r;i++)
     cout<<arr[i]<<" ";
    cout<<endl;
  }
};

void LQ()
{
  int ch;
  cout<<"LINEAR QUEUE BY ASTHA VARSHNEY"<<endl;
	cout<<"------------"<<endl;
  cout<<"Enter the size the Queue: ";
  int n, i;
  cin>>n;
  i=1;
  Lqueue lq(n);
  cout<<"MENU: "<<endl;
  cout<<"-------------------"<<endl; 
  cout<<"1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.FRONT\n5.EXIT\n";
  while(i)
  { 
    cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-5)"<<endl;
    cout<<"-------------------"<<endl; 
    
    cin>>ch;
    switch(ch)
    {
      case 1:lq.enqueue();
             break;
      case 2:lq.dequeue();
             break;
      case 3:lq.print();
             break;
      case 4:lq.front();
             break;
      case 5:i=0;
             break;
      default:cout<<"Wrong Choice!!!!"<<endl;
             break;
    }
  }
  cout<<"------------------"<<endl;
  cout<<"The END"<<endl;
  cout<<"------------------"<<endl; 
}