#include <bits/stdc++.h>
using namespace std;

int findPaths(int row, int col, int m, int n)
{
    int pathCount = 0;
    if (row >= m || col >= n)
    {
        return 0;
    }
    if (row == m - 1 && col == n - 1)
    {
        return 1;
    }
    pathCount += findPaths(row + 1, col, m, n);
    pathCount += findPaths(row, col + 1, m, n);

    return pathCount;
}

int uniquePaths(int m, int n)
{
    int paths = findPaths(0, 0, m, n);
    return paths;
}

int main()
{
    int n, m;
    cin >> m >> n;

    int ans = uniquePaths(m, n);

    cout << ans << endl;

    return 0;
}