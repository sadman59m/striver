// use sliding window technique
#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int sz = s.size();
    int ans = 0;
    int l = 0, r = 0;
    set<char> st;
    while (r < sz)
    {
        while (l <= r && st.find(s[r]) != st.end())
        {
            st.erase(s[l]);
            ++l;
        }
        ans = max(ans, r - l + 1);
        st.insert(s[r]);
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