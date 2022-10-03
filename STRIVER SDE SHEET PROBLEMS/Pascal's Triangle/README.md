Problem Statement: Given an integer N, return the first N rows of Pascal’s triangle.

In Pascal’s triangle, each number is the sum of the two numbers directly above it as shown in the figure below:


Example 1:

Input Format: N = 5

Result:
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

Explanation: There are 5 rows in the output matrix. Each row corresponds to each one of the rows in the image shown above.
Example 2:

Input Format: N = 1

Result: 
    1
    
```cpp
#include <bits/stdc++.h> 
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector <vector<long long int>> ans;
    for(int i=0;i<n;i++)
    {
        vector <long long int> v(i+1,1);
        for(int j=1;j<i;j++)
        {
          v[j]=ans[i-1][j-1]+ ans[i-1][j];
        }
        ans.push_back(v);
    }
    return ans;
}
``` 
