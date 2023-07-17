// this solution applicable when there are only positive numbers in the array.

#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int n = a.size();
    int forward = 0, backward = 0;
    int longest = 0;
    long long sum = a[backward];

    while (forward < n)
    {
        while (sum > k && backward <= forward)
        {
            sum -= a[backward];
            ++backward;
        }
        if (sum == k)
        {
            longest = max(longest, forward - backward + 1);
        }
        ++forward;
        sum += a[forward];
    }
    return longest;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int ans = longestSubarrayWithSumK(arr, k);
    cout << "\n"
         << ans << "\n";

    return 0;
}