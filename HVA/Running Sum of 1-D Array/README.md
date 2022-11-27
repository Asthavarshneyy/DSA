<h2>Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
 <br>
Return the running sum of nums.</h2> <a href="https://leetcode.com/problems/running-sum-of-1d-array/?envType=study-plan&id=level-1"> Link </a>


 

<h3>Example 1:</h3>

Input: nums = [1,2,3,4]<br>
Output: [1,3,6,10]<br>
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].<br><br>

<h3>Example 2:</h3>

Input: nums = [1,1,1,1,1]<br>
Output: [1,2,3,4,5]<br>
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].<br><br>

<h3>Example 3:</h3>

Input: nums = [3,1,2,10,1]<br>
Output: [3,4,6,16,17]<br><br>
 

<h3>Constraints:</h3>

->1 <= nums.length <= 1000<br>
->-10^6 <= nums[i] <= 10^6<br><br>

<h3>Solution:</h3>

```
class Solution {
public:
    vector<int> runningSum(vector<int> nums) 
    {
        int sum=0;
        for(int i=1;i<nums.size();i++)
        {
           nums[i]+=nums[i-1];
        }
        return nums;
    }
};
```
