// Brute
// Run Four nested loops

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    // set<set<int>> ans;
    vector<vector<int>> ans;
    int sz = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < sz; ++i)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < sz; ++j)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            int front = j + 1;
            int back = sz - 1;
            while (front < back)
            {
                // cout << "ok";
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[front];
                sum += nums[back];
                if (sum == target)
                {
                    vector<int> temp = {nums[i], nums[j], nums[front], nums[back]};
                    ans.push_back(temp);
                    ++front;
                    --back;
                    while (front < back && nums[front] == nums[front - 1])
                        ++front;
                    while (front < back && nums[back] == nums[back + 1])
                        --back;
                }
                else if (sum < target)
                {
                    ++front;
                }
                else
                {
                    --back;
                }
            }
        }
    }
    // vector<vector<int>> finalAns(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n, target;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    cin >> target;

    vector<vector<int>> ans = fourSum(nums, target);

    for (int i = 0; i < ans.size(); ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}