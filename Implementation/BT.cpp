#include<bits/stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node *left;
	node *right;
	//constructor
	node(int data)
	{
		this->data=data;
		left=NULL;
		right=NULL;
	}
};

void buildtree(node *&root)
{
	int d;
	string left;
	string right;
	cin>>d;
	root=new node(d);
	cin>>left;
	if(left=="true")
	 buildtree(root->left);
    cin>>right;
	if(right=="true")
	 buildtree(root->right);
}

void takeinput(node* &root)
{
	buildtree(root);
	return;
}

void BTpreorder(node *root)
{
  if(root==NULL)
   return;
  cout<<root->data<<" ";
  BTpreorder(root->left);
  BTpreorder(root->right);
}

void BTinorder(node *root)
{
  if(root==NULL)
   return;
  BTinorder(root->left);
  cout<<root->data<<" ";
  BTinorder(root->right);
}

void BTpostorder(node *root)
{
  if(root==NULL)
   return;
  BTpostorder(root->left);
  BTpostorder(root->right);
  cout<<root->data<<" ";
}

void BinaryT() {
  cout<<"Enter the input array: ";
	node *root;
  takeinput(root);
	int ch;
  cout<<"BINARY TREES by Astha Varshney"<<endl;
	cout<<"------------"<<endl;
  cout<<"MENU: "<<endl;
  cout<<"-------------------"<<endl; 
  cout<<"1.PREORDER \n2.INORDER \n3.POSTORDER \n4.EXIT\n";
  int i=1;
  while(i)
  { 
    cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-4)"<<endl;
    cout<<"-------------------"<<endl; 
    cin>>ch;
    switch(ch)
    {
      case 1:BTpreorder(root);
            cout<<endl;
             break;
      case 2:BTinorder(root);
            cout<<endl;
             break;
      case 3:BTpostorder(root);
            cout<<endl;
             break;
      case 4:i=0;
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