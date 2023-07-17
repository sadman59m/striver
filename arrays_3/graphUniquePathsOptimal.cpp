#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n)
{
    // apply nCr equation
    int N = m + n - 2;
    int r = m - 1;
    double result = 1.0;

    for (int i = 1; i <= r; ++i)
    {
        result = result * (N - r + i) / i;
    }

    return (int)result;
}

int main()
{
    int n, m;
    cin >> m >> n;

    int ans = uniquePaths(m, n);

    cout << ans << endl;

    return 0;
}