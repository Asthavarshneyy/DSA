#include <bits/stdc++.h>
using namespace std;

class CQueue {
	int *a, n, cs, f, e;
public:
	CQueue(int s = 5) {
		n = s;
		a = new int[s];
		cs = 0;
		f = 0;
		e = n - 1;
	}

	void push() {
    cout<<"Enter the number you want to push into the queue: ";
    int d;
    cin>>d;
		if (cs < n) {
			e = (e + 1) % n;
			a[e] = d;
			cs++;
		}
		else {
			cout<<"Queue is full"<<endl;
      cout<<"------------------------------\n\n\n";
		}
	}

	void pop() {
		if (cs > 0) {
			f = (f + 1) % n;
			cs--;
      cout<<"Element deleted from the queue is "<<a[f]<<endl;
		}
		else {
			cout<<"Queue is empty"<<endl;
      cout<<"------------------------------\n\n\n";
		}
	}

  void front() {
     if(empty())
    {
      cout<<"Queue is empty"<<endl;
      cout<<"------------------------------\n\n\n";
      return;
    }
    cout<<"The front element is :"<<a[f]<<endl;
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
    int i=cs;
    int j=f;
    while(i>0)
    {
      cout<<a[j]<<" ";
      j=(j+1)%n;
      i--;
    }
    cout<<endl;
  } 

	bool empty() {
		return cs == 0;
	}

};

void CQ() {
  // your code goes here
  //function call
  int ch;
  cout<<"CIRCULAR QUEUE BY ASTHA VARSHNEY"<<endl;
	cout<<"------------"<<endl;
  cout<<"Enter the size the Queue: ";
  int n, i;
  cin>>n;
  CQueue cq(n);
  i=1;
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
      case 1:cq.push();
             break;
      case 2:cq.pop();
             break;
      case 3:cq.print();
             break;
      case 4:cq.front();
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
  return;
}