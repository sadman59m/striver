#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> mpp(256, 0);

    for(int i=0; i<s.size(); ++i) {
        ++mpp[s[i]];
    }

    for(int i=0; i < 256; ++i) {
        if(mpp[i] > 0) {
            cout << (char)i << " " << mpp[i]<< endl;
        }
    }
    return 0;
}