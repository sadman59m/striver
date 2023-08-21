#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> vec(10, vector<int>(2, 0));
    for(int i=0; i<vec.size(); ++i) {
        for(int j=0; j<vec[i].size(); ++j) {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}