#include <bits/stdc++.h>
using namespace std;

int m, n;

void setZeroes(vector<vector<long long>> &matrix)
{
    long long int tmp = 1e10;
    int m = matrix.size();
    int n = matrix[0].size();

    // cout << "ok" << m << " " << n << endl;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < m; ++k)
                {
                    matrix[k][j] = tmp;
                }
                for (int k = 0; k < n; ++k)
                {
                    matrix[i][k] = tmp;
                }
            }
        }
    }
    // cout << x << " " << y;

    // cout << "OK " << tmp << endl;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] == tmp)
            {
                matrix[i][j] = 0;
            }
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
    vector<vector<long long>> matrix;
    cin >> m >> n;
    matrix.resize(m, vector<long long>(n));
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
