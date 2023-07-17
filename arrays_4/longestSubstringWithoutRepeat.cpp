#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int sz = s.size();
    int ans = 0, cnt = 0;

    for (int i = 0; i < sz; ++i)
    {
        cnt = 0;
        set<char> st;
        for (int j = i; j < sz; ++j)
        {
            if (st.find(s[j]) == st.end())
            {
                cnt++;
                ans = max(ans, cnt);
                st.insert(s[j]);
            }
            else
                break;
        }
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