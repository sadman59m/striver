#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int tmp = a;
    a = b;
    b = tmp;

    cout << a << " " << b;
    return 0;
}