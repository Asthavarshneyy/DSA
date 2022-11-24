#include<iostream>
using namespace std;

struct DNode
{
  int data;
  DNode *next;
  DNode *prev;
  DNode(int data): data(data), next(NULL) {}
};
class DoublyLinkedList
{
  private:
  DNode *header;
  DNode *tail;
  int size;

  //default constructor
  public:
  DoublyLinkedList()
  {
    header=NULL;
    tail=NULL;
    size=0;
  }
  
  void prepend()
  {
    cout<<"Enter any number you want to prepend: ";
    int data;
    cin>>data;
    //creating a new Dnode
    DNode *n=new DNode(data);
    //case 1 if the list is empty
    if(header==NULL)
    {
      header=n;
      tail=n;
    }
    //case 2 if list is not empty
    else
    {
      header->prev=n;
      n->next=header;
      header=n;
    }
    //increment size counter
    size++;
  }

  void append()
  {
    cout<<"Enter any number you want to append: ";
    int data;
    cin>>data;
    DNode *n=new DNode(data);
    //case 1 if list is empty
    if(header==NULL)
    {
      header=n;
      tail=n;
      }
    //case 2 if list is non empty
    else
    {
      tail->next=n;
      n->prev=tail;
      tail=n;
    }
    //increment the size counter
    size++;
  }

  void insertAt()
  {
    cout<<"Enter the position at which you want to insert an element: ";
    int pos;
    cin>>pos;
    //check if pos is valid
    if(pos>size || pos<1)
      return;
    //case 1 if insertion is at the starting
    else if(pos==1)
    {
      prepend();
    }
    //case 2 : if insertion is at the end
    else if(pos==size)
    {
    append();
    }
    //case 3 : for all other cases
    else
    {
      cout<<"Enter the number which you want to insert: ";
      int data;
      cin>>data;
      DNode *n=new DNode(data);
      DNode *cur=header;
      for(int i=1;i<pos;i++)
      {
        cur=cur->next;
      }
      cur->prev->next=n;
      n->prev=cur->prev;
      n->next=cur;
      cur->prev=n;
      //increment the size counter
      size++;
    }
  }

  // to check if Dnode exists using key value
  DNode* DnodeExists(int k) 
  {
    
    DNode* temp = NULL;
    DNode * ptr = header;
    while (ptr != NULL) 
    {
      if (ptr -> data == k) 
      {
        temp = ptr;
      }
      ptr = ptr -> next;
    }
    return temp;
  }

  void search()
  {
    /*cout<<"Enter the number which you want to search: ";
    int k;
    cin>>k;
    DNode* temp=DnodeExists(k);
    if(temp==NULL)
     cout<<k<<" is not present in the list"<<endl;
    else
      cout<<*/
    cout<<"Enter the item you want to search: ";
    int item;
    cin>>item;
    DNode *ans=header;
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

  //to delete a Dnode 
  void Delete() 
  {
    cout<<"Enter the number that you want to delete: ";
    int k;
    cin>>k;
    DNode * ptr = DnodeExists(k);
    if (ptr == NULL) 
    {
      cout << "No Dnode exists with key value: " << k << endl;
    } 
    else {
      if (header -> data == k) 
      {
        header = header -> next;
        cout << "DNode UNLINKED with keys value : " << k << endl;
      } 
      else 
      {
        DNode * nextDNode = ptr -> next;
        DNode * prevDNode = ptr -> prev;
        // deleting at the end
        if (nextDNode == NULL) 
        {
          prevDNode -> next = NULL;
          cout << "DNode Deleted at the END" << endl;
        }
        //deleting in between
        else 
        {
          prevDNode ->next = nextDNode;
          nextDNode -> prev = prevDNode;
          cout << "DNode Deleted in Between" << endl;
        }
      }
    }
  }

  //printing
  void printing()
  {
    //create temp pointer that points to the first Dnode
    DNode *temp=header;
    //create a loop that stops when pointer is NULL
    while(temp!=NULL)
    {
      //print data
      cout<<temp->data<<" ";
      //advance pointer to next Dnode
      temp=temp->next;
    }
    cout << endl;
  }
};

void DLL()
{
  DoublyLinkedList dll;
  int ch;
  cout<<"DOUBLY LINKED LIST BY ASTHA VARSHNEY"<<endl;
	cout<<"------------"<<endl;
  int i=1;
  cout<<"MENU: "<<endl;
  cout<<"-------------------"<<endl; 
  cout<<"1.APPEND\n2.PREPEND\n3.DISPLAY\n4.SEARCH\n5.DELETE\n6.INSERT AT\n7.EXIT\n";
  
  while(i)
  { 
    cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-7)"<<endl;
    cout<<"-------------------"<<endl; 
   cin>>ch;
    switch(ch)
    {
      case 1:dll.append();
             break;
      case 2:dll.prepend();
             break;
      case 3:dll.printing();
             break;
      case 4:dll.search();
             break;
      case 5:dll.Delete();
             break;
      case 6:dll.insertAt();
             break;
      case 7:i=0;
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

