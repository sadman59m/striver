#include <bits/stdc++.h>
using namespace std;

int findMaxSubArr(vector<int> &nums)
{
    int sz = nums.size();
    int start, ansStart, ansEnd;
    int maxSum = nums[0];
    int sum = 0;

    for (int i = 0; i < sz; ++i)
    {
        if (sum == 0)
            start = i;
        sum += nums[i];
        if (sum > maxSum)
        {
            maxSum = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    // cout << ansStart << " " << ansEnd << endl;

    for (int i = ansStart; i <= ansEnd; ++i)
        cout << nums[i] << " ";

    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int ans = findMaxSubArr(arr);
    cout << "\n"
         << ans << "\n";

    return 0;
}