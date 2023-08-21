#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    int ans = 0;
    unordered_map<char, int> mp = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    for(int i = 0; i<s.size(); ++i) {
        char curr = s[i];
        char next = s[i+1];
        cout << curr << " " << next << endl;
        if(mp[curr] < mp[next]) {
            ans += mp[next] - mp[curr];
            ++i;
        }
        else {
            ans += mp[curr];
        }
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    int ans = romanToInt(s);
    cout << ans;
    return 0;
}