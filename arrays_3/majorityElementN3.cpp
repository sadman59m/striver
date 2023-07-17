#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int sz = nums.size();
    vector<int> temp = nums;
    vector<int> ans;
    sort(temp.begin(), temp.end());

    int currentCount = 1;
    for (int i = 0; i < sz - 1; ++i)
    {
        if (temp[i] == temp[i + 1])
        {
            ++currentCount;
        }
        else
        {
            if (currentCount > sz / 3)
            {
                ans.push_back(temp[i]);
            }
            currentCount = 1;
        }
    }
    if (currentCount > sz / 3)
    {
        ans.push_back(temp[sz - 1]);
    }

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