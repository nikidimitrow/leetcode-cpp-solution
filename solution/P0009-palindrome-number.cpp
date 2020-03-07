/* Link to the problem: https://leetcode.com/problems/palindrome-number/ /*

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
      unsigned int px=0;
      unsigned int b = 0;
      
      if(x > 0) b = x;
      else b*(-1);
      
      while(x)
      {    
        px=px*10+x%10;
        x=x/10;
       } 
        
    return px == b ? true : false;        
    }
};
