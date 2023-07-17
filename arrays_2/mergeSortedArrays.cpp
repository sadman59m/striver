#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = 0; i < n; ++i)
    {
        nums1[m + i] = nums2[i];
    }
    sort(nums1.begin(), nums1.end());

    // for (int x: nums1)
    //     cout << x << " ";
}

int main()
{
    int n, m;
    cin >> m >> n;
    vector<int> nums1(m + n);
    vector<int> nums2(n);

    fill(nums1.begin(), nums1.end(), 0);

    for (int i = 0; i < m; ++i)
        cin >> nums1[i];

    for (int i = 0; i < n; ++i)
        cin >> nums2[i];

    mergeArrays(nums1, m, nums2, n);

    return 0;
}