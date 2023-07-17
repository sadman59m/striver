#include <bits/stdc++.h>
using namespace std;

void findRepeatAndMissingNumber(vector<int> &A)
{
    vector<int> ans;
    int sz = A.size();

    int xor1 = A[0];

    // xor to find out a number that represents the bridge between mssing and repeating values

    for (int i = 1; i < sz; ++i)
        xor1 = xor1 ^ A[i];
    for (int i = 1; i <= sz; ++i)
        xor1 = xor1 ^ i;

    // find the position of the rightmost setbit
    int rightMostBit = xor1 & ~(xor1 - 1);

    // create two buckets.
    // put the number with RMS bit 1 to one bucket
    // other to another one

    int x = 0, y = 0;

    for (int i = 0; i < sz; ++i)
    {
        if (rightMostBit & A[i])
        {
            x = x ^ A[i];
        }
        else
        {
            y = y ^ A[i];
        }
    }

    // to find the issing and repeating values
    // do the above steps for numbers in range 1 to sz accourding to above conditions

    for (int i = 1; i <= sz; ++i)
    {
        if (rightMostBit & i)
        {
            x = x ^ i;
        }
        else
        {
            y = y ^ i;
        }
    }
    // these two desirable numbers should be remaining in bucket x and y

    // cout << x << " " << y;

    int xCounter = 0;

    for (int i = 0; i < sz; ++i)
    {
        if (x == A[i])
            ++xCounter;
    }
    if (xCounter == 0)
    {
        ans.push_back(y);
        ans.push_back(x);
    }
    else
    {
        ans.push_back(x);
        ans.push_back(y);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    findRepeatAndMissingNumber(nums);

    return 0;
}