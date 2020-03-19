/*Link to the problem: https://leetcode.com/problems/defanging-an-ip-address */

class Solution {
public:
    string defangIPaddr(string address) {
        std::string str2{""};
        for(int i{0}; i < address.length(); i++)
        {
            char current = address.at(i);
            if(current == '.')
            {
               str2.append("[.]");
            } else str2.push_back(current);//str2.append(current);
        }

        return str2;
    }
};
