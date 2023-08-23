#include<bits/stdc++.h>
using namespace std;

int sToI(string s) {
    int ans = 0;
    for(int i=0; i<s.size(); ++i) {
        int currNumber = s[i] - '0';
        ans *= 10;
        ans += currNumber;
    }

    return ans;
}

int main() {
    string s;
    cin >> s;
    int ans = sToI(s);

    cout << ans;
    return 0; 
}