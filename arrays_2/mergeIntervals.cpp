#include <bits/stdc++.h>
using namespace std;

// enable error show

void mergeIntervals(vector<vector<int>> &intrvls)
{
    // int sz = intrvls.size();
    vector<vector<int>> ans;
    vector<int> tmp = intrvls[0];

    for (auto it : intrvls)
    {
        if (it[0] <= tmp[1])
        {
            tmp[1] = max(it[1], tmp[1]);
            tmp[0] = min(tmp[0], it[0]);
        }
        else
        {
            ans.push_back(tmp);
            tmp = it;
        }
    }
    ans.push_back(tmp);
    // for (auto it : ans)
    // {
    //     cout << it[0] << " " << it[1] << "\n";
    // }

    // return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> intrvls(n, vector<int>(2));

    for (int i = 0; i < n; ++i)
    {
        cin >> intrvls[i][0] >> intrvls[i][1];
    }

    mergeIntervals(intrvls);

    // for (auto it : intrvls)
    // {
    //     cout << it[0] << " " << it[1] << endl;
    // }

    return 0;
}
