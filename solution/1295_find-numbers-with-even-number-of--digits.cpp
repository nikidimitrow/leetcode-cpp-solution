/* Link to the problem: https://leetcode.com/problems/find-numbers-with-even-number-of-digits */

#include <vector>
#include <iostream>
#include <list>
using std::vector;
using std::cout;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count{};
        for(auto& i : nums)
        {
            int loop{};
            while( i != 0)
            {
                loop++;
                i /= 10;
            }
                if(loop%2 == 0)count++;
        } 
        return count;
    }
};

int main()
{
    Solution sol;
    int i{};
    vector<int> nums {437,315,322,431,686,264,442};
    sol.findNumbers(nums);
    
}
