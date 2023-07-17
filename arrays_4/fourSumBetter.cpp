// Brute
// Run Four nested loops

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    // set<set<int>> ans;
    set<vector<int>> ans;
    int sz = nums.size();

    for (int i = 0; i < sz; ++i)
    {
        set<long long> hashSet;
        for (int j = i + 1; j < sz; ++j)
        {
            for (int k = j + 1; k < sz; ++k)
            {

                long long sum = nums[i] + nums[j] + nums[k];
                long long fourth = target - sum;
                if (hashSet.find(fourth) != hashSet.end())
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                    sort(temp.begin(), temp.end());
                    ans.insert(temp);
                }
                hashSet.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> finalAns(ans.begin(), ans.end());
    return finalAns;
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