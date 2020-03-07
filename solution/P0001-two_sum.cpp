/* Link to the problem: https://leetcode.com/problems/two-sum */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
         vector<int> n;
         for(int i = 0; i < nums.size(); i++)
         {
             for(int j = i + 1; j < nums.size(); j++)
             {
                 if(target == (nums[i] + nums[j]))
                 {
                     n.push_back(i);
                     n.push_back(j);
                 }
             }
         }
      return n;
    }  
};
