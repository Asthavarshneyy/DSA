<h2>Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.</h2>
<a href="https://leetcode.com/problems/third-maximum-number/"> Link </a>
 

<h3>Example 1:</h3>

Input: nums = [3,2,1]<br>
Output: 1<br>
Explanation:<br>
The first distinct maximum is 3.<br>
The second distinct maximum is 2.<br>
The third distinct maximum is 1.<br>
<h3>Example 2:</h3>

Input: nums = [1,2]<br>
Output: 2<br>
Explanation:<br>
The first distinct maximum is 2.<br>
The second distinct maximum is 1.<br>
The third distinct maximum does not exist, so the maximum (2) is returned instead.<br>
<h3>Example 3:</h3>

Input: nums = [2,2,3,1]<br>
Output: 1<br>
Explanation:<br>
The first distinct maximum is 3.<br>
The second distinct maximum is 2 (both 2's are counted together since they have the same value).<br>
The third distinct maximum is 1.<br>
 

<h3>Constraints:</h3>

1 <= nums.length <= 104<br>
-231 <= nums[i] <= 231 - 1<br>


<h3>Solution:</h3>

```
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set <int, greater <int>> st;
        for(int i=0;i<nums.size();i++)
         st.insert(nums[i]);
        if(st.size()<3)
         return *st.begin();
        auto x=st.begin();
        x++;
        ++x;
        return *x;
    }
};
```
