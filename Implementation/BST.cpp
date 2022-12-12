#include <bits/stdc++.h>
using namespace std;

class BSTnode {

public:
	int data;
	BSTnode* left, *right;
	BSTnode(int d) {
		data = d;
		left = right = NULL;
	}
};

void insertInBST(BSTnode* &root, int d) {
	// base case
	if (!root) {
		root = new BSTnode(d);
		return;
	}

	// recursive case
	if (root->data >= d) {
		insertInBST(root->left, d);
	}
	else {
		insertInBST(root->right, d);
	}
	return;
}

void createinBST(BSTnode* &root) {
  cout<<"Enter a list of number you want to add in the Binary Search Tree. Enter -1 to Stop!!";
	int data;
	cin >> data;

	while (data != -1) {
		insertInBST(root, data);

		cin >> data;
	}
	return;
}

void preorder(BSTnode* root) {
	if (!root) return;
	cout << root-> data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(BSTnode* root) {
	if (!root) return;
	inorder(root->left);
	cout << root -> data << " ";
	inorder(root->right);
}

void postorder(BSTnode* root) {
	if (!root) return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

void searchBST(BSTnode* root, int key) {
	// base case
	if (!root) 
  {
    cout<<"Key not found"<<endl;
    return;
  }

	// recursive case
	if (root->data == key) {
		cout<<"Key found"<<endl;
    return;
	}
	else if (root->data >= key) {
		return searchBST(root->left, key);
	}
	else {
		return searchBST(root->right, key);
	}
}

void printRange(BSTnode* root, int k1, int k2) {
	// base case
	if (!root) return;
	// recursive case
	printRange(root->left, k1, k2);
	if (root->data >= k1 and root->data <= k2) {
		cout << root->data << " ";
	}
	printRange(root->right, k1, k2);
}

int height(BSTnode* root) {
	if (!root) return 0;

	return max(height(root->left), height(root->right)) + 1;
}

bool isBalanced(BSTnode* root) {
	// base case
	if (!root) return true;

	// recursive case
	int left_height = height(root->left);
	int right_height = height(root->right);

	if (abs(left_height - right_height) <= 1
	        and isBalanced(root->left) == true
	        and isBalanced(root->right) == true) {
		return true;
	}
	else {
		return false;
	}
}

void BinaryST() {
  cout<<"BINARY SEARCH TREES by Astha Varshney"<<endl;
	BSTnode *root=NULL;
	createinBST(root);
	cout<<"------------"<<endl;
  cout<<"MENU: "<<endl;
  cout<<"-------------------"<<endl; 
  cout<<"1.PREORDER \n2.INORDER \n3.POSTORDER \n4.SEARCH\n5.BALANCED ?\n6.PRINT A RANGE\n7.EXIT\n";
  int i=1;
  while(i)
  { 
    cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-7)"<<endl;
    cout<<"-------------------"<<endl; 
    int ch;
    cin>>ch;
    switch(ch)
    {
      case 1:preorder(root);
            cout<<endl;
             break;
      case 2:inorder(root);
            cout<<endl;
             break;
      case 3:postorder(root);
            cout<<endl;
             break;
      case 4: int num;
              cout<<"Enter the number you want to search: ";
              cin>>num;
              searchBST(root, num);
              break;
      case 5:if (isBalanced(root)) 
              cout << "Balanced\n";
             else 
              cout << "Not Balanced\n";
              break;
      case 6:int a,b;
              cout<<"Enter the range in which you want to print the BST: ";
              cin>>a>>b;
              printRange(root,a, b);
	            cout << endl;
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