#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> triangle(numRows);

    for (int i = 0; i < numRows; ++i)
    {
        triangle[i].resize(i + 1, 1);
        for (int j = 1; j < i; ++j)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // for (int i = 0; i < numRows; ++i)
    // {
    //     for (int j = 0; j < triangle[i].size(); ++j)
    //     {
    //         cout << triangle[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return triangle;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = generate(n);
    cout << ans[4][1];
    return 0;
}
