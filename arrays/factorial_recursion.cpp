#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int result;
    if (n == 1)
        return n;
    result = factorial(n - 1) * n;
    cout << result << " ";
    return result;
}

int main()
{
    int n;
    cin >> n;
    factorial(n);

    return 0;
}