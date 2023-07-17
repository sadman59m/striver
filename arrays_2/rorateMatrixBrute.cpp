// time O(n^2)
// space O(n^2)

#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    vector<vector<int>> ans(row, vector<int>(col));

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            ans[j][row - 1 - i] = matrix[i][j];
        }
    }

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    rotateMatrix(matrix);

    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < m; ++j)
    //         cout << matrix[i][j] << " ";
    //     cout << "\n";
    // }

    return 0;
}