// time O(n^2) + O(n^2)
// space O(1)

#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = row;

    for (int i = 0; i < row; ++i)
    {
        for (int j = i; j < col; ++j)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // for (int i = 0; i < row; ++i)
    // {
    //     reverse(matrix[i].begin(), matrix[i].end());
    // }

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0, k = col - 1; j <= k; ++j, --k)
            swap(matrix[i][j], matrix[i][k]);
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

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }

    return 0;
}