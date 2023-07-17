#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int sz = nums.size();
    vector<int> ans;
    vector<int> temp = nums;

    sort(temp.begin(), temp.end());

    int front = 0, back = sz - 1, num1 = -1, num2 = -1;

    while (front < back)
    {
        if (temp[front] + temp[back] == target)
        {
            num1 = temp[front];
            num2 = temp[back];
            break;
        }
        else if (temp[front] + temp[back] < target)
        {
            ++front;
        }
        else
        {
            --back;
        }
    }

    for (int i = 0; i < sz; ++i)
    {
        if (nums[i] == num1 && ans.size() < 2)
        {
            ans.push_back(i);
            num1 = -1;
        }
        else if (nums[i] == num2 && ans.size() < 2)
        {
            ans.push_back(i);
            num2 = -1;
        }
    }

    return ans;
}

int main()
{
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    cin >> target;

    vector<int> ans = twoSum(nums, target);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}