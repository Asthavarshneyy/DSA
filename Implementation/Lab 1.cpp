#include<bits/stdc++.h>
using namespace std;

void linearsearch()
{
  int N;
	cout<<"Enter the size of array: ";
	cin>>N;
	int a[N];
	cout<<"Enter the numbers:";
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	int M;
	cout<<"Enter the number to search: ";
	cin>>M;
	int pos=-1;
	for(int i=0;i<N;i++)
	{
		if(a[i]==M)
		 pos=i;
	}
	cout<<pos;
}

void bigsmall()
{
	  int N;
		cout<<"Enter the size of array: ";
    cin>>N;
    int arr[N];
		cout<<"Enter the numbers:";
    for(int i=0;i<N;i++)
     cin>>arr[i];
    //to store the maximum and minimum numbers
    int Max=INT_MIN;
    int Min=INT_MAX;
    for(auto x: arr)
    {
        Max=max(Max, x);
        Min=min(Min, x);
    }
    cout<<"Largest: "<<Max<<endl;
    cout<<"Smallest: "<<Min<<endl;
}

void sort(int arr[], int N)
{
    //to sort the array using bubble sort
    for(int i=0;i<N;i++)
    {
        for(int j=i;j<N;j++)
        {
            if(arr[j]>arr[j+1])
              swap(arr[j], arr[j+1]);
        }  
    }
}

void print( int arr[], int N)
{
    //to print the array
    for(int i=0;i<N;i++)
     cout<<arr[i]<<" ";
}

void bubble()
{
	  int N;
		cout<<"Enter the size of array: ";
    cin>>N;
    int arr[N];
		cout<<"Enter the numbers:";
    for(int i=0;i<N;i++)
     cin>>arr[i];
    //function call
    sort(arr, N);
    print(arr, N);

}

void Lab1() {
	cout<<"Lab 1 by Astha Varshney"<<endl;
	cout<<"------------"<<endl;
	cout<<"MENU"<<endl;
	cout<<"1. Linear Search"<<endl;
	cout<<"2. Biggest and Smallest"<<endl;
	cout<<"3. Bubble Sort"<<endl;
	cout<<"4. Exit"<<endl;
	int i=1;
	while(i)
	{
		cout<<"-------------------"<<endl; 
    cout<<"Enter your choice (1-4)"<<endl;
    cout<<"-------------------"<<endl; 
	int a;
	cin>>a;
	switch(a)
	{
		case 1:
		linearsearch();
		break;
		case 2:
		bigsmall();
		break;
		case 3:
		bubble();
		break;
		case 4:
		i=0;
		break;
		default:
		cout<<"Wrong Input";
	}
	}
	 cout<<"------------------"<<endl;
  cout<<"The END"<<endl;
  cout<<"------------------"<<endl;
	return;
}

