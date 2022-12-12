#include<iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node *prev;
  Node(int data): data(data), next(NULL) {}
};



class LinkedList
{
  private:
  Node *header;
  Node *tail;
  int size;
  
  //default constructor
  public:
  LinkedList()
  {
    header=NULL;
    tail=NULL;
    size=0;
  }

  //calculate the size of list
  int getsize()
  {
    return size;
  }

  void prepend(int data)
  {
   //creating a new node
    Node *n=new Node(data);
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

  void append(int data)
  {
    Node *n=new Node(data);
    
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

  void insertAt(int pos,int data)
  {
    //check if pos is valid
    if(pos>size || pos<1)
    return;

    //case 1 if insertion is at the starting
    else if(pos==1)
    {
      prepend(data);
    }

    //case 2 : if insertion is at the end
    else if(pos==size)
    {
      append(data);
    }

    //case 3 : for all other cases
    else
    {
      Node *n=new Node(data);
      Node *cur=header;
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

  // to ceck if node exists using key value
  Node * nodeExists(int k) {
    Node * temp = NULL;
    Node * ptr = header;

    while (ptr != NULL) {
      if (ptr -> data == k) {
        temp = ptr;
      }
      ptr = ptr -> next;
    }
    return temp;
  }

  //to delete a node at the given index
  void Delete(int k) {
    Node * ptr = nodeExists(k);
    if (ptr == NULL) {
      cout << "No node exists with key value: " << k << endl;
    } else {

      if (header -> data == k) {
        header = header -> next;
        cout << "Node UNLINKED with keys value : " << k << endl;
      } else {
        Node * nextNode = ptr -> next;
        Node * prevNode = ptr -> prev;
        // deleting at the end
        if (nextNode == NULL) {

          prevNode -> next = NULL;
          cout << "Node Deleted at the END" << endl;
        }

        //deleting in between
        else {
          prevNode ->next = nextNode;
          nextNode -> prev = prevNode;
          cout << "Node Deleted in Between" << endl;

        }
      }
    }
  }

  //printing
  void printing()
  {
    //create temp pointer that points to the first node
    Node *temp=header;

    //create a loop that stops when pointer is NULL
    while(temp!=NULL)
    {
      //print data
      cout<<temp->data<<" ";
      //advance pointer to next node
      temp=temp->next;
    }
    cout << endl;
   
  }


};


int main()
{
  LinkedList list;
  list.append(23);
  list.prepend(11);
  list.append(28);
  list.insertAt(2,65);
  list.printing();
  list.Delete(11);
  list.printing();
}





