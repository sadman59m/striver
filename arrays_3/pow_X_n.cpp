#include <bits/stdc++.h>
using namespace std;

double calculatePow(double x, long long n)
{
    if (n == 1)
    {
        return x;
    }
    double ans;
    if (n % 2 == 0)
    {
        ans = calculatePow(x, n / 2);
        return ans * ans;
    }
    else
    {
        ans = calculatePow(x, n - 1);
        return ans * x;
    }
}

int main()
{
    double x;
    int n;
    cin >> x;
    cin >> n;

    long long n2 = n;
    double ans = 1.0000;

    if (n == 0)
    {
        ans = 1.00000;
    }
    else
    {
        ans = calculatePow(x, abs(n2));
    }

    if (n2 < 0)
        ans = 1 / ans;

    cout << ans;
    return 0;
}