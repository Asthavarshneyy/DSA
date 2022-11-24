#include<iostream>
using namespace std;

// FIRST way of writing the node CLASS
class Node 
{
  public:
  int data;
  Node *next;

// this is the constructor of class node. this is required to make new objects like node *n=new node(data)
  Node(int data)
  {
    this->data=data;
    next=NULL;
  }
}; 

class SinglyLinkedList
{
 // private: this can be omitted as well. No issues there
  Node *header;
  Node *tail;
  int size;
  
  //default constructor
  public:
  SinglyLinkedList()
  {
    header=NULL;
    tail=NULL;
    size=0;
  }

  void append()
  {
    int data;
    cout<<"Enter the number you want to append: ";
    cin>>data;
    //create new node
    Node *n=new Node(data);
    
    //Case 1 : Empty list
    if(header==NULL)
    {
      header=n;
      tail=n;
    }

    //Case 2: list is not empty
    else
    {
      tail->next=n;
      tail=n;
    }
    
    //increment size counter
    size++;
  }

  void prepend()
  {
    int data;
    cout<<"Enter the number you want to prepend: ";
    cin>>data;
    //create new node
    Node *n=new Node(data);

    //Case 1:list is empty
    if(header==NULL)
    {
      header=n;
      tail=n;
    }

    // Case 2: list is not empty
    else
    {
      Node *temp=header;
      header=n;
      n->next=temp;
    }

    //increment size counter
    size++;
  } 

  void printing()
  {
    //create temp pointer that points to the first node
    Node *temp=header;

    cout<<"The current List is: ";
    //create a loop that stops when pointer is NULL
    while(temp!=NULL)
    {
      //print data
      cout<<temp->data<<" ";
      //advance pointer to next node
      temp=temp->next;
    }
    cout <<"\n"<< endl;
   
  }

  void removefirst()
  {
     //Case 1: empty list
     //nothing to do

     //Case 2: non empty list
     if(header!=NULL)
     {
       Node *temp=header;
       header=header->next;
       delete temp;
       
       //decrement the size
       size--;
     }
  }

  void removelast()
  {
    //Case 1: Empty list
    // Nothing to do
    //Case 2: only 1 Node
    if(header->next==NULL)
    {
     removefirst();
    }

    //Case 3: More than 1 Node
    else if(header!=NULL)
    {
      Node *curr=header;
      Node *prev;
      while(curr ->next !=NULL)
      {
        prev=curr;
        curr=curr->next;
      }
      tail=prev;
      prev->next=NULL;          // remember it is important
      delete curr;

      //decrement the size
      size--;
    }
  }

  void removeAt()
  {
    cout<<"Enter the position of the node you want to remove: ";
    int pos;
    cin>>pos;
    //Case 1: check if pos is valid
    if(pos>size || pos<1)
    return;          //but this is a void function

    //Case 2: if pos is the first node
    else if(pos==1)
    removefirst();

    //Case 3: if pos is the last node
    else if(pos==size)
    removelast();

    //Case 4: all other cases
    else if(header !=NULL)
    {
      Node *curr=header;
      Node *prev;
      for(int i=1;i<pos;i++)    // rememeber it is not equal to
      {
        prev=curr;
        curr=curr->next;
      }
      prev->next=curr->next;
      delete curr;

      //decrement the size counter
      size--;
    }
  }

  void InsertAt()
  {
    int pos;
    int data;
    cout<<"Enter the position where you want to add a node: ";
    cin>>pos;
    //Case 1: check if pos is valid
    if(pos>size+1 || pos<1)    
    return;       // again the return thingy

    //Case 2: check if insertion is at the beginning
    else if(pos==1)
    prepend();

    //Case 3: check if insertion is at the end of the list
    else if(pos==size+1)
    append();

    //Case 4: for all other cases
    else if(header!=NULL)
    {
      cout<<"Enter the number you want to add: ";
      cin>>data;
      Node *n=new Node(data);
      Node *prev;
      Node *curr=header;
      for(int i=1;i<pos;i++)
      {
        prev=curr;
        curr=curr->next;
      }
      prev->next=n;
      n->next=curr;

      //increment the size counter
      size++;
    }
  }
  
  // to search an item in the list
  void search()
  {
    cout<<"Enter the item you want to search: ";
    int item;
    cin>>item;
    Node *ans=header;
    int flag=-1;
    for(int i=1;i<=size;i++)
    {
      if(ans->data==item)
      {
        cout<<"The position of the item is "<< i << endl;
        flag=0;
        break;
      }
      ans=ans->next;
    }
    if(flag==-1)
    {
      cout<<"the item is not a part of the list"<<endl;
    }
  }

  //Sorting in ascending order the elements of the list
  void sort()
  {
    cout<<"The sorted list is: ";
    int i=size;
    while(i>1)
    {
      Node *curr=header->next;
      Node *prev=header;
      while(curr!=NULL)
      {
        if(curr->data<prev->data)
        swap(curr->data,prev->data);
        curr=curr->next;
        prev=prev->next;
      }
      i--;
    }
    printing();
  }
};


void SLL()
{
  SinglyLinkedList sll;
  int ch;
  cout<<"SINGLY LINKED LIST BY ASTHA VARSHNEY"<<endl;
	cout<<"------------"<<endl;
  int i=1;
  cout<<"MENU: "<<endl;
  cout<<"-------------------"<<endl; 
  cout<<"1.APPEND\n2.PREPEND\n3.DISPLAY\n4.REMOVE FIRST\n5.REMOVE LAST\n6.REMOVE AT\n7.INSERT AT\n8.SEARCH\n9.SORT\n10.EXIT\n";
  
  while(i)
  { 
    cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-10)"<<endl;
    cout<<"-------------------"<<endl; 
   cin>>ch;
    switch(ch)
    {
      case 1:sll.append();
             break;
      case 2:sll.prepend();
             break;
      case 3:sll.printing();
             break;
      case 4:sll.removefirst();
             break;
      case 5:sll.removelast();
             break;
      case 6:sll.removeAt();
             break;
      case 7:sll.InsertAt();
             break;
      case 8:sll.search();
             break;
      case 9:sll.sort();
             break;
      case 10:i=0;
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













































































































































































































































































