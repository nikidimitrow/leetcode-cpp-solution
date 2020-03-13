/* Link to the problem: https://leetcode.com/problems/monotonic-array */

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
       if((A[0] <= A[1]) && (A[1] <= A[2]))  return true;
       if ((A[2] <= A[1]) && (A[1] <= A[0]))  return true;
       else return false;       
    }
};
