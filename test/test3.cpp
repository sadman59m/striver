#include<bits/stdc++.h>
using namespace std;

int uniquePaths(int right, int down, int n, int m, vector<vector<int>> &mark) {
    if(right == n-1 && down == m-1) {
        return 1;
    }
    if(right >= n || down >= m) {
        return 0;
    }

    if(mark[right][down] != -1) 
        return mark[right][down];
        
    mark[right][down] = 0;

    mark[right][down] += uniquePaths(right+1, down, n, m, mark);
    mark[right][down] += uniquePaths(right, down+1, n, m, mark);

    return mark[right][down];
}

int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<int>> mark(n, vector<int>(m, -1));
    // for(int i=0; i<mark.size(); ++i) {
    //     for(int j=0; j<mark[i].size(); ++j) {
    //         cout << mark[i][j] << " ";
    //     }
    // }

    int ans = uniquePaths(0, 0, n, m, mark);

    cout << ans << "\n";

    return 0;
}