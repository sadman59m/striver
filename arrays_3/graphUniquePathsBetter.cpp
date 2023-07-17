#include <bits/stdc++.h>
using namespace std;

int findPaths(int row, int col, int m, int n, vector<vector<long long>> &dp)
{
    if (row >= m || col >= n)
    {
        return 0;
    }
    if (row == m - 1 && col == n - 1)
    {
        return 1;
    }
    if (dp[row][col] != -1)
        return dp[row][col];

    dp[row][col] = 0;
    dp[row][col] += findPaths(row + 1, col, m, n, dp);
    dp[row][col] += findPaths(row, col + 1, m, n, dp);

    return dp[row][col];
}

int uniquePaths(int m, int n)
{
    vector<vector<long long>> dp(m, vector<long long>(n, -1));
    long long paths = findPaths(0, 0, m, n, dp);
    return paths;
}

int main()
{
    int n, m;
    cin >> m >> n;

    long long ans = uniquePaths(m, n);

    cout << ans << endl;

    return 0;
}