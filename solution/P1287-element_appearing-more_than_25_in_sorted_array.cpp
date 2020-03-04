/* Problem: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array */

class Solution 
{
public:
    int findSpecialInteger(std::vector<int>& arr) 
    {
        int max = arr.size() / 4; //get the 25% of the array  
        int i = 0;
        
        while(i < arr.size()) 
        {
            int num = arr[i];
            if(i + max < arr.size() && arr[i + max] == num) 
            {
                return num;
            }
            while(arr[i] == num)
            {
                i++;
            }
        }
        
        return 1;
    }
};
