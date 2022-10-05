Given an array consisting of only 0s, 1s and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Input: nums = [2,0,1]
Output: [0,1,2]

Input: nums = [0]
Input: nums = [0]

```cpp
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    map <int, int> mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    int k=0;
    for(auto x: mp)
    {
        for(int i=1;i<=x.second;i++)
            arr[k++]=x.first;
    }
}
```
