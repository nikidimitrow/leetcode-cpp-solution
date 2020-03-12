/* Link to the problem: https://leetcode.com/problems/longest-common-prefix */

class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
    std::string myNiki{};
    for(auto i{0}; i < strs.size(); i++)
    {
        std::string niki = strs[0];
        std::string niki1 = strs[1];
        char c = niki[0];
        char b = niki1[0];
        
      if(c == b)
        {
            char d = niki[1];
            char e = niki1[1];
           
            if(d == e)
            {
                
                return string nikiString.append(niki[0]).append(niki[1]);
            }
            
        }
        else return std::string myString{""};
    }
  }
};
