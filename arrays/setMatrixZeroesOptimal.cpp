#include <bits/stdc++.h>
using namespace std;

int m, n;

void setZeroes(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    // int row[n] -> matrix[..][0]
    //int col[m] -> matrix[0][..]
    int col0 = 1;
    
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            if(matrix[i][j] == 0) {
                //set mask row value to 0
                matrix[i][0] = 0;
                //set mask column value to 0
                if(j != 0) matrix[0][j] = 0;
                else col0 = 0;
            }
        }
    }

    // set values to 0 according to the mask values
    // start from 2nd row and column to keep the mask values intact

    for(int i=1; i<n; ++i) {
        for(int j=1; j<m; ++j) {
            if(matrix[i][j] != 0) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }

    //check for the 1st row and column
    if(matrix[0][0] == 0) {
        for(int j=0; j<m; ++j) matrix[0][j] = 0;
    }
    if(col0 == 0) {
        for(int i=0; i<n; ++i) matrix[i][0] = 0;
    }

    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
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
