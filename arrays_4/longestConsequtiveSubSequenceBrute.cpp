#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int sz = nums.size();
    if (sz == 0)
        return 0;
    vector<vector<int>> sequences;
    sort(nums.begin(), nums.end());

    vector<int> tmp = {nums[0]};
    sequences.push_back(tmp);

    for (int i = 1; i < sz; ++i)
    {
        for (int j = 0; j < sequences.size(); ++j)
        {
            int sz2 = sequences[j].size();
            if (nums[i] - sequences[j][sz2 - 1] == 1)
            {
                sequences[j].push_back(nums[i]);
                break;
            }
        }
        vector<int> tmp = {nums[i]};
        sequences.push_back(tmp);
    }

    // for (int i = 0; i < sequences.size(); ++i)
    // {
    //     for (int j = 0; j < sequences[i].size(); ++j)
    //     {
    //         cout << sequences[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    int ans = 0;
    for (int i = 0; i < sequences.size(); ++i)
    {
        int sz3 = sequences[i].size();
        ans = max(ans, sz3);
    }

    return ans;
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