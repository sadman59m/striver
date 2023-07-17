#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int sz = nums.size();
    if (sz == 0)
        return 0;

    unordered_set<int> st;
    int longest = 0;

    for (int i = 0; i < sz; ++i)
        st.insert(nums[i]);

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                ++cnt;
                ++x;
            }
            longest = max(longest, cnt);
        }
    }

    return longest;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int ans = longestConsecutive(nums);

    cout << ans << "\n";

    return 0;
}