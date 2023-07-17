#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int sz = nums.size();
    vector<int> ans;

    int cnt1 = 0, cnt2 = 0, element1, element2;

    for (int i = 0; i < sz; ++i)
    {
        if (cnt1 == 0 && nums[i] != element2)
        {
            cnt1 = 1;
            element1 = nums[i];
        }
        else if (cnt2 == 0 && nums[i] != element1)
        {
            cnt2 = 1;
            element2 = nums[i];
        }
        else if (nums[i] == element1)
        {
            ++cnt1;
        }
        else if (nums[i] == element2)
        {
            ++cnt2;
        }
        else
        {
            --cnt1;
            --cnt2;
        }
    }

    cnt1 = 0;
    cnt2 = 0;

    for (int i = 0; i < sz; ++i)
    {
        if (nums[i] == element1)
            ++cnt1;
        else if (nums[i] == element2)
            ++cnt2;
    }
    if (cnt1 > sz / 3)
        ans.push_back(element1);
    if (cnt2 > sz / 3)
        ans.push_back(element2);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    vector<int> ans = majorityElement(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}