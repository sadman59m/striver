int Solution::solve(vector<int> &A, int B)
{
    int xr = 0;
    int cnt = 0;
    map<int, int> mp;
    ++mp[xr];
    for (int i = 0; i < A.size(); ++i)
    {
        xr = xr ^ A[i];
        int x = xr ^ B;
        cnt += mp[x];
        mp[xr]++;
    }
    return cnt;
}

// for clear concept watch takeUforward
// link: https://www.youtube.com/watch?v=eZr-6p0B7ME&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=37&ab_channel=takeUforward
