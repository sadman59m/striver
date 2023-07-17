#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int sz = nums.size();
    int cnt = 0, element = nums[0];

    for (int i = 0; i < sz; ++i)
    {
        if (nums[i] == element)
            ++cnt;
        else
            --cnt;
        if (cnt <= 0)
        {
            cnt = 1;
            element = nums[i];
        }
    }
    int cnt2 = 0;
    for (int i = 0; i < sz; ++i)
    {
        if (nums[i] == element)
            ++cnt2;
    }
    // cout << element << " " << cnt2 << endl;
    if (cnt2 > sz / 2)
        return element;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    int ans = majorityElement(nums);

    cout << ans;

    return 0;
}