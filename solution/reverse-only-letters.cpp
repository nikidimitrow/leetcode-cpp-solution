/* Link to the problem: https://leetcode.com/problems/reverse-only-letters/ */

#include <string>

using std::string;
using std::swap;

class Solution {
private:
    int i = 0;
    int j = 0;

public:
    std::string reverseOnlyLetters(string S) {
       j = S.length() - 1;
        
        while (i < j) {
            if (isalpha(S[i]) && isalpha(S[j])) {
                swap(S[i++], S[j--]);
                continue;
            }
            if (!isalpha(S[i]))
                i++;
            if (!isalpha(S[j]))
                j--;
        } 
        return S;
    }
};
