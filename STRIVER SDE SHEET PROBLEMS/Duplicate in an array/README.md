Given an array of N size, where each element is between 1 and N. Assuming there is only one duplicate number, your task is to find the duplicate number. The duplicate number cabn be repeated more than one time as well.

Examples:

Example 1: 

Input: arr=[1,3,4,2,2]

Output: 2

Explanation: Since 2 is the duplicate number the answer will be 2.

Example 2:

Input: [3,1,3,4,2]

Output:3

Explanation: Since 3 is the duplicate number the answer will be 3.

```cpp
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    map <int, int> mp;
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]>=1)
            return arr[i];
        mp[arr[i]]++;
    }
}
```
