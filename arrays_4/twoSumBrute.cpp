#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int sz = nums.size();
    vector<int> ans;

    for (int i = 0; i < sz - 1; ++i)
    {
        for (int j = i + 1; j < sz; ++j)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
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