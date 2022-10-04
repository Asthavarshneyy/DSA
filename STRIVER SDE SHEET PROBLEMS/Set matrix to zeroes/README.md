Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

Examples:

Examples 1:

Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.
 
Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0

```cpp
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    vector<vector<int>> ans{0};
      int n = matrix.size();
    int m = matrix[0].size();
    
    vector<int>arr1(n,-1),arr2(m,-1);
        for(int i = 0;i<n;i++){
               for(int j = 0; j<m; j++){
                   if(matrix[i][j]==0){
                       arr1[i] = 0;
                       arr2[j] = 0;
                   }
               }
            }
        for(int i =0; i<n; i++){
            for(int j =0; j<m; j++){
                if(arr1[i] ==0 ||arr2[j] ==0)
                    matrix[i][j] =0;
            }
     }
}
```
