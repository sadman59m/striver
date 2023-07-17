#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> m >> n;
    vector<int> arr(m);
    vector<int> arr2(n);

    for (int i = 0; i < m; ++i)
        cin >> arr[i];
    for (int i = 0; i < n; ++i)
        cin >> arr2[i];

    int gap = n + m + 1;

    do
    {
        gap /= 2;
        int range = gap;
        // cout << gap << endl;
        for (int i = range; i < m + n; ++i)
        {
            if (i < m)
            {
                // cout << arr[i] << " " << arr[i - range] << " ";
                if (arr[i] < arr[i - range])
                    swap(arr[i], arr[i - range]);
            }
            else
            {
                if (i - range < m)
                {
                    // cout << arr2[i - m] << " " << arr[i - range] << " ";
                    if (arr2[i - m] < arr[i - range])
                        swap(arr2[i - m], arr[i - range]);
                }
                else
                {
                    // cout << arr2[i - m] << " " << arr2[i - m - range] << " ";
                    if (arr2[i - m] < arr2[i - m - range])
                        swap(arr2[i - m], arr2[i - m - range]);
                }
            }
        }
    } while (gap > 1);

    for (int x : arr)
        cout << x << " ";
    cout << "\n";
    for (int x : arr2)
        cout << x << " ";

    return 0;
}