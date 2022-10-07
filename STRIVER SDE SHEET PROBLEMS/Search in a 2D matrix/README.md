Given an m*n 2D matrix and an integer, write a program to find if the given integer exists in the matrix.

Given matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row
Example 1:

Input: matrix = 
[[1,3,5,7],
 [10,11,16,20],
 [23,30,34,60]], 

target = 3

Output: true

Explanation: As the given integer(target) exists in the given 2D matrix, the function has returned true.
Example 2:

Input: matrix = 
[[1,3,5,7],
 [10,11,16,20],
 [23,30,34,60]], 

target = 13

Output: false

Explanation: As the given integer(target) does not exist in the given 2D matrix, the function has returned false.

```cpp
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int arow=-1;
    //to find the row in which the element is present
    for(int i=0;i<m;i++)
    {
        if(mat[i][0]>target)
        {
            arow=i-1;
            break;
        }
    }
    //if till now now such row is formed
    if(arow==-1)
        arow=m-1;
    for(int j=0;j<n;j++)
    {
        if(mat[arow][j]==target)
            return true;
    }
    return false;
    
}
```
