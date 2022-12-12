#include <iostream>
#include <string>
using namespace std;
int main()
{
  for(int i=0;i<=9;i++)
  {
    for(int j=i;j>=0;j--)
     cout<<j<<" ";
    for(int j=1;j<=i;j++)
     cout<<j<<" ";
    cout<<endl;
  }
}
