#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int sz = nums.size();
    vector<int> ans;
    map<int, int> mp;

    for (int i = 0; i < sz; ++i)
    {
        int remain = target - nums[i];
        if (mp.find(remain) != mp.end())
        {
            ans.push_back(mp[remain]);
            ans.push_back(i);
            break;
        }
        mp[nums[i]] = i;
    }

    return ans;
}

int main()
{
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    cin >> target;

    vector<int> ans = twoSum(nums, target);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}