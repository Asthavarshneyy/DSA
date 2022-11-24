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
    return r==0;
  }
  //to push an element
  void enqueue(int num)
  {
    if(full())
    {
      cout<<"Queue is full"<<endl;
      return;
    }
    arr[r]=num;
    r++;
  }
  //to pop an element
  void dequeue()
  {
    if(empty())
    {
      cout<<"Queue is empty"<<endl;
      return;
    }
    for (int i = 0; i < r - 1; i++) 
    {
      arr[i] = arr[i + 1];
    }
    r--;
  }
  //to display the front element
  int front()
  {
    if(empty())
    {
      cout<<"Queue is empty"<<endl;
      return -1;
    }
    return arr[f];
  }
  void print()
  {
    if(empty())
    {
      cout<<"Queue is empty"<<endl;
      return;
    }
    for(int i=f;i<r;i++)
     cout<<arr[i]<<" ";
    cout<<endl;
  }
};

//
//
//
//

class CQueue{
    int *arr;
    int f, r, msize, n;
    public:
    //construtor
    CQueue(int d=100)
    {
        arr=new int[d];
        n=d;
        f=0;
        msize=0;
        r=n-1; 
    }
    //to check if the queue is empty
    bool empty()
    {
        return msize==0;
    }
    //to check if the queue is full
    bool full()
    {
        return n==msize;
    }
    //to push an element
    void enqueue(int data)
    {
        if(!full())
        {
            r=(r+1)%n;
            arr[r]=data;
            msize++;
        }
    }
    //to pop the front element
    void dequeue()
    {
        if(!empty())
        {
            f=(f+1)%n;
            msize--;
        }
    }
    //to show the front element
    int front()
    {
        return arr[f];
    }
    //to print the size of the queue
    int size()
    {
        return msize;
    }
};

//
//
//
//

class comparator {
public:
	bool operator()(int a, int b) {
		return a < b;
	}
};

class Pqueue
{
  // priority_queue<int> h; // Max Heap
	// priority_queue<int, vector<int>, comparator> h; // Min Heap
	Pqueue<int, vector<int>, greater<int> > h; // Min Heap
	Pqueue<int, vector<int>, less<int> > h; // Max Heap
	h.push(10);
	h.push(12);
	h.push(13);
	h.push(7);
	h.push(2);

};
	



	while (!h.empty()) {
		cout << h.top() << endl;
		h.pop();
	}



int main() {
    // your code goes here
    //function call
    
    return 0;
}


