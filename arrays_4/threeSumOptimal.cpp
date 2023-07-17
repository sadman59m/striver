// Brute
// Run Four nested loops

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    int target = 0;
    sort(nums.begin(), nums.end());  

    for(int i=0; i<n; ++i) {
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        int j = i+1, k = n - 1;
        while(j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < target) ++j;
            else if(sum > target) --k;
            else {
                vector<int> tmp = {nums[i], nums[j], nums[k]}; //already sorted
                ans.push_back(tmp);
                ++j;
                --k;
                while(j<k && nums[j] == nums[j-1]) ++j; //avoid duplicate
                while(j<k && nums[k] == nums[k+1]) --k; //avoid duplicate
            }
        }
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

    vector<vector<int>> ans = threeSum(nums);

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