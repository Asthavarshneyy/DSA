#include <iostream>
#include <queue>
#include <functional>
using namespace std;

void print(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
		cout<<"The queue is: ";
    while (!g.empty()) {
        cout << g.top()<<" ";
        g.pop();
    }
    cout << '\n';
}

class comparator {
public:
	bool operator()(int a, int b) {
		return a < b;
	}
};

void PQ() {
  cout<<"PRIORITY QUEUE BY ASTHA VARSHNEY"<<endl;
	cout<<"------------"<<endl;
       priority_queue <int> pq;
	int i=1;
	int ch;
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
      case 1: 
              cout<<"Enter the number you want to push: ";
              int num;
              cin>>num;
              pq.push(num);
             break;
      case 2:pq.pop();
             break;
      case 3:print(pq);
             break;
      case 4:cout<<"The front element is: "<<pq.top()<<endl;
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


