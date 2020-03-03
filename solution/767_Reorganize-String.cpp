class Solution {
public:
string reorganizeString(string S) {
    if (S.size() < 2) {
        return S;
    }
    unordered_map<char, int> count;
    for (char c: S) {
        ++count[c];
    }
    vector<pair<int, char>> sortcount;
    char c;
    int cmax = 0;
    for (auto& p: count) {
        if (p.second > cmax) {
            cmax = p.second;
            c = p.first;
        }
        if (cmax > (S.size() + 1) / 2){
            return "";
        }
        sortcount.emplace_back(p.second, p.first); // int n, char c
    }
    // sort(sortcount.begin(), sortcount.end(), greater<pair<int, char>>());
    
    string sortS = string(cmax, c);
    for (int i = 0; i < sortcount.size(); ++i) {
        if (sortcount[i].second != c) {
            sortS += string(sortcount[i].first, sortcount[i].second);
        }
    }
    
    int mid = (sortS.size() + 1) / 2;
    string res = "";
    int i = 0, j = mid;
    while (i < mid || j < sortS.size()) {
        if (i < mid) res.push_back(sortS[i++]);
        if (j < sortS.size()) res.push_back(sortS[j++]);
    }
    return res;
    }
};
