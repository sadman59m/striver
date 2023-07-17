#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &A, int n)
{
    map<long long, int> preSum;
    long long sum = 0;
    long long target = 0;
    int longest = INT_MIN;

    for (int i = 0; i < n; ++i)
    {
        sum += A[i];
        if (sum == 0)
            longest = max(longest, i + 1);
        if (preSum.find(sum) != preSum.end())
        {
            longest = max(longest, i - preSum[sum]);
            // cout << sum << " " << longest << endl;
        }
        if (preSum.find(sum) == preSum.end())
            preSum[sum] = i;
    }
    // for (auto it = preSum.begin(); it != preSum.end(); ++it)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    return longest;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int ans = maxLen(arr, n);
    cout << "\n"
         << ans << "\n";

    return 0;
}