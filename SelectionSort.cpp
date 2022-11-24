#include<iostream>
using namespace std;

void SS() {
cout<<"SELECTION SORT BY ASTHA VARSHNEY"<<endl;
cout<<"enter the size of the array: ";
int n;
cin>>n;
int a[n];
cout<<"Enter the numbers: ";
for(int i=0;i<n;i++)
  cin>>a[i];
cout<<"-----------------"<<endl;
cout<<"Original array: ";
for (int i = 0; i < n; ++i)
{
cout << a[i] << " ";
} cout << '\n';
for (int i = 0; i < n - 1; ++i)
{
// work
int mi = i;
for (int j = i + 1; j < n; ++j)
{
if (a[j] < a[mi]) {
mi = j;
}
}
swap(a[i], a[mi]);
}
cout<<"Sorted Array: ";
for (int i = 0; i < n; ++i)
{
cout << a[i] << " ";
} cout << '\n';
cout<<"-----------------"<<endl;
return;
}