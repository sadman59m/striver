#include <bits/stdc++.h>
using namespace std;

// typedef long long ll;

long long merge(long long *arr, int low, int mid, int high)
{
    int left = mid - low + 1;
    int right = high - mid;
    long long inverseCount = 0;

    int *first = new int[left];
    int *second = new int[right];

    int mainArrayIndex = low;

    for (int i = 0; i < left; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;

    for (int i = 0; i < right; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    int indexLeft = 0, indexRight = 0;
    mainArrayIndex = low;

    while (indexLeft < left && indexRight < right)
    {
        if (first[indexLeft] < second[indexRight])
        {
            arr[mainArrayIndex] = first[indexLeft];
            ++indexLeft;
            ++mainArrayIndex;
        }
        else
        {
            arr[mainArrayIndex] = second[indexRight];
            ++indexRight;
            ++mainArrayIndex;
            inverseCount += left - indexLeft;
        }
    }

    while (indexLeft < left)
    {
        arr[mainArrayIndex] = first[indexLeft];
        ++mainArrayIndex;
        ++indexLeft;
    }
    while (indexRight < right)
    {
        arr[mainArrayIndex] = second[indexRight];
        ++mainArrayIndex;
        ++indexRight;
    }

    // cout << "OK" << endl;
    delete[] first;
    delete[] second;

    return inverseCount;
}

long long mergeSort(long long *arr, int low, int high)
{
    long long inverseCount = 0;
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        inverseCount += mergeSort(arr, low, mid);
        inverseCount += mergeSort(arr, mid + 1, high);

        inverseCount += merge(arr, low, mid, high);
    }

    return inverseCount;
}

long long getInversions(long long *arr, int n)
{
    long long result = mergeSort(arr, 0, n - 1);

    return result;
}

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    long long ans = getInversions(arr, n);
    cout << ans << endl;

    return 0;
}