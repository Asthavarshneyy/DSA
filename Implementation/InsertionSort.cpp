#include <iostream>
using namespace std;

void IS() {
cout<<"INSERTION SORT BY ASTHA VARSHNEY"<<endl;
cout<<"enter the size of the array: ";
int n;
cin>>n;
int a[n];
cout<<"Enter the numbers: ";
for(int i=0;i<n;i++)
  cin>>a[i];
cout<<"-----------------"<<endl;
cout<<"Original array: ";
int j;
for (int i = 0; i < n; ++i)
{
cout << a[i] << " ";
} cout << endl;
// Insertion Sort
for (int i = 1; i < n; ++i)
{
int hpc = a[i];
for (j = i - 1; j >= 0 ; --j)
{
if (a[j] > hpc) {
a[j + 1] = a[j];
}
else {
break;
}
}
a[j + 1] = hpc;
}
cout<<"Sorted Array: ";
for (int i = 0; i < n; ++i)
{
cout << a[i] << " ";
} 
cout << endl;
cout<<"-----------------"<<endl;

return;
}
