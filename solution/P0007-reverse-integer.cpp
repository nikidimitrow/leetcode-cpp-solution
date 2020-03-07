
class Solution {
public:
  int reverse(int x) {
  int px=0;
  while(x)
  {
    if(px>INT_MAX/10 || px<INT_MIN/10)return 0;
    px=px*10+x%10;
    x=x/10;
   }
   return px; 
   }
};
