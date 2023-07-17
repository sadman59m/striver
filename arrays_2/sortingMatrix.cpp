#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int matrix[r][c];

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    // Declare 1D arry and map matrix value to the 1D array

    int matsz = r * c;

    int temp[matsz];

    for (int i = 0; i < matsz; ++i)
    {
        temp[i] = matrix[i / c][i % c];
    }

    // Sort the 1D array and map the values to the matrix again

    sort(temp, temp + matsz);

    for (int i = 0; i < matsz; ++i)
    {
        matrix[i / c][i % c] = temp[i];
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}