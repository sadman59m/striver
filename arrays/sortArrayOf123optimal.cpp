// uisng Dutch National Flag Algorithm

#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &nums)
{
    int sz = nums.size();
    int low = 0, mid = 0, high = sz - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            ++low;
            ++mid;
        }
        else if (nums[mid] == 1)
            ++mid;
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            --high;
        }
    }

    for (int x : nums)
        cout << x << " ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    sortArray(nums);

    return 0;
}