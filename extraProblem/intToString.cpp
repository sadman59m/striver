#include<bits/stdc++.h>
using namespace std;

string iToS(int s) {
    string ans = "";
    int tmp = s;

    while(tmp) {
        char curr = (tmp%10) + '0';
        ans = curr + ans;
        tmp /= 10;
    }

    return ans;
}

int main() {
    int s;
    cin >> s;
    string ans = iToS(s);

    cout << ans;
    return 0; 
}