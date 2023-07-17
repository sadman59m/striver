#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row) {
    vector<int> ansRow;
    long long ans = 1;  // first element is 1
    ansRow.push_back(ans);
    for(int i=1; i<row; ++i) {  // 0 based indexing. 2nd col to last which is row -1
        ans *= (row-i);
        ans /= i;
        ansRow.push_back(ans);
    }

    return ansRow;
}

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    for(int i=1; i<=numRows; ++i) {
        ans.push_back(generateRow(i));
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = generate(n);
    for(int i=0; i<ans.size(); ++i) {
        for(int j=0; j<ans[i].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
