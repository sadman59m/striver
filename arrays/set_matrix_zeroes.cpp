#include <bits/stdc++.h>
using namespace std;

int m, n;

void setZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int extra_row[n + 1];
    int extra_col[m + 1];
    fill(extra_row, extra_row + n, 1);
    fill(extra_col, extra_col + m, 1);

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] == 0)
            {
                extra_row[j] = 0;
                extra_col[i] = 0;
            }
        }
    }

    // for (int i = 0; i < n; ++i)
    //     cout << extra_row[i] << " ";
    // for (int i = 0; i < m; ++i)
    //     cout << extra_col[i] << endl;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (extra_row[j] == 0 || extra_col[i] == 0)
                matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    vector<vector<int>> matrix;
    cin >> m >> n;
    matrix.resize(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    setZeroes(matrix);

    return 0;
}
