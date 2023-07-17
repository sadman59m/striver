#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5);

    for (int i = 0; i < 5; ++i)
        cin >> v[i];

    for (int i = 0, j = 4; i < j; ++i, --j)
    {
        swap(v[i], v[j]);
    }

    for (int x : v)
        cout << x << " ";

    return 0;
}