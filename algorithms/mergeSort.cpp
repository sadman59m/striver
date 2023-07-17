#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r)
{
    // cout << "ok2" << endl;
    int szl = m - l + 1;
    int szr = r - m;
    vector<int> aleft(szl);
    vector<int> aright(szr);

    for (int i = 0; i < szl; ++i)
    {
        aleft[i] = arr[l + i];
    }

    for (int i = 0; i < szr; ++i)
    {
        aright[i] = arr[m + 1 + i];
    }

    int i = 0, j = 0, idx = l;

    while (i < szl && j < szr)
    {
        if (aleft[i] <= aright[j])
        {
            arr[idx] = aleft[i];
            ++i;
            ++idx;
        }
        else
        {
            arr[idx] = aright[j];
            ++j;
            ++idx;
        }
    }
    while (i < szl)
    {
        arr[idx] = aleft[i];
        ++i;
        ++idx;
    }
    while (j < szr)
    {
        arr[idx] = aright[j];
        ++j;
        ++idx;
    }
}

void mergeSort(vector<int> &arr, int l, int r)
{
    // cout << "ok1" << endl;
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            cout << "[" << arr[i];
        }
        else
            cout << "," << arr[i];
        if (i == n - 1)
        {
            cout << "]";
        }
    }

    return 0;
}