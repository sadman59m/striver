#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int sz = nums.size();
    if (sz == 0)
        return 0;

    sort(nums.begin(), nums.end());
    int lastSmaller = INT_MIN;
    int longest = 0;
    int cnt = 1;

    for (int i = 0; i < sz; ++i)
    {
        if (nums[i] - 1 == lastSmaller)
        {
            ++cnt;
            lastSmaller = nums[i];
            // cout << nums[i] << " " << cnt << "\n";
        }
        else if (nums[i] != lastSmaller)
        {
            cnt = 1;
            lastSmaller = nums[i];
        }
        // cout << nums[i] << " " << cnt << "\n";
        longest = max(longest, cnt);
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