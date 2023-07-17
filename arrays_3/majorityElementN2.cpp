#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int sz = nums.size();
    vector<int> temp = nums;
    sort(temp.begin(), temp.end());

    int maxCount = 0, currentCount = 1, element = temp[0];
    for (int i = 0; i < sz - 1; ++i)
    {
        if (temp[i] == temp[i + 1])
        {
            ++currentCount;
        }
        else
        {
            if (currentCount > maxCount)
            {
                maxCount = currentCount;
                element = temp[i];
            }
            currentCount = 1;
        }
    }
    if (currentCount > maxCount)
    {
        element = temp[sz - 1];
    }

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