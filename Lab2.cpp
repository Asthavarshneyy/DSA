#include<iostream>
using namespace std;

int Stack[100];
int n,i,top,x;
void push();
void pop();
void display();
void Top();
void Lab2()
{ 
  int ch;
  cout<<"Lab 2 by Astha Varshney"<<endl;
	cout<<"------------"<<endl;
  cout<<"Enter the size the Stack: ";
  cin>>n;
  i=1;
  top=-1;
  cout<<"MENU: "<<endl;
  cout<<"-------------------"<<endl; 
  cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.TOP\n5.EXIT\n";
  while(i)
  { 
    cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-5)"<<endl;
    cout<<"-------------------"<<endl; 
    
   
    cin>>ch;
    switch(ch)
    {
      case 1:push();
             break;
      case 2:pop();
             break;
      case 3:display();
             break;
      case 4: Top();
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
void push()
{  
    if(top>=n-1)           
    // OVERFLOW i.e. if Stack top goes beyond the size of the Stack
    {
      cout<<"STACK IS OVERFLOW"<<endl;
    
  }
  else
  {
  
    cout<<"Enter the value to be added :";
  cin>>x;
  top=top+1;
  Stack[top]=x;
    }
}
void pop()
{
  if(top<=-1)                
  // Underflow i.e. Stack is at index -1
  {
    cout<<"STACK IS UNDERFLOW"<<endl;
  }
  else
  {
    cout<<"Value :"<<Stack[top]<<" got deleted."<<endl;
    top--;
  }
}
void display()
{
  if(top>=0)
  {
    cout<<"Elements in the Stack are :";
    for(i=top;i>=0;i--)
       cout<<Stack[i]<<" ";
    cout<<"\n";
  }
  else
   cout<<"STACK IS EMPTY."<<endl;
}
void Top()
{
  if(top>=0)
    cout<<"The top element in the Stack is:"<<Stack[top];
  else
    cout<<"STACK IS EMPTY."<<endl;
}

/*int main()
{
  Lab2();
  return 0;
}*/
