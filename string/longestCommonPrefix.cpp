class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int shortest = 1000;
        int n = strs.size();
        for(int i=0; i<n; ++i) {
            if(strs[i].size() < shortest) {
                shortest = strs[i].size();
            }
        }
        int prefixLength = 0;
        string ans = "";
        bool getOut = false;
        for(int i=0; i<shortest; ++i) {
            for(int j=1; j<n; ++j) {
                if(strs[j][i] != strs[j-1][i]) {
                    getOut = true;
                    break;
                }
            }
            if(!getOut) {
                ++prefixLength;
            }
            else {
                break;
            }
        }
        for(int i=0; i<prefixLength; ++i) {
            ans += strs[0][i];
        }
        return ans;
    }
};