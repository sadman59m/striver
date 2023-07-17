#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> temp(m + n);
    int i = 0, j = 0, idx = 0;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            temp[idx] = nums1[i];
            ++i;
            ++idx;
        }
        else
        {
            temp[idx] = nums2[j];
            ++j;
            ++idx;
        }
    }
    while (i < m)
    {
        temp[idx] = nums1[i];
        ++i;
        ++idx;
    }
    while (j < n)
    {
        temp[idx] = nums2[j];
        ++j;
        ++idx;
    }

    // for (int x : temp)
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