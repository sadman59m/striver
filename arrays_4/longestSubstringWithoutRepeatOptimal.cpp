// use sliding window technique
#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int sz = s.size();
    int ans = 0;
    int l = 0, r = 0;
    map<char, int> mp;
    while (r < sz)
    {
        if (mp.find(s[r]) != mp.end())
        {
            l = max(l, mp[s[r]] + 1);
        }
        mp[s[r]] = r;
        ans = max(ans, r - l + 1);
        ++r;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    int ans = lengthOfLongestSubstring(s);
    cout << ans << "\n";
    return 0;
}