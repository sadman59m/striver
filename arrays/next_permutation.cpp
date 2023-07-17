#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int sz = nums.size();
    int indx1 = -1;
    for (int i = sz - 2; i >= 0; --i)
    {
        if (nums[i] < nums[i + 1])
        {
            indx1 = i;
            break;
        }
    }
    if (indx1 == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    for (int i = sz - 1; i >= 0; --i)
    {
        if (nums[i] > nums[indx1])
        {
            // cout << nums[i] << " " << nums[indx1] << endl;
            swap(nums[i], nums[indx1]);
            break;
        }
    }

    reverse(nums.begin() + indx1 + 1, nums.end());

    // cout << indx1 << " " << indx2 << " " << indx3 << endl;
    // for (int i = 0; i < sz; ++i)
    //     cout << nums[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    nextPermutation(a);
    return 0;
}