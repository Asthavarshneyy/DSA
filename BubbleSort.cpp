#include <iostream>
using namespace std;
void BubbleSort(int *a, int n, int i, int j) {
// base case
if (i == n - 1) {
return;
}
// recursive case
if (j < n - 1 - i) {
if (a[j] > a[j + 1]) {
swap(a[j], a[j + 1]);
}
BubbleSort(a, n, i, j + 1);
}
else {
BubbleSort(a, n, i + 1, 0);
}
}
void BS() {
cout<<"BUBBLE SORT BY ASTHA VARSHNEY"<<endl;
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
}
cout << '\n';
BubbleSort(a, n, 0, 0);
cout<<"Sorted Array: ";
for (int i = 0; i < n; ++i)
{
cout << a[i] << " ";
}
cout << '\n';
cout<<"-----------------"<<endl;

return;
}