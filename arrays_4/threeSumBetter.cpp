class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int target = 0;
        set<vector<int>> st;
        for(int i=0; i<n; ++i) {
            unordered_set<int> hashset;
            for(int j=i+1; j<n; ++j) {
                int third = target - (nums[i] + nums[j]);
                if(hashset.find(third) != hashset.end()) {
                    vector<int> tmp = {nums[i], nums[j], third};
                    sort(tmp.begin(), tmp.end());
                    st.insert(tmp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};