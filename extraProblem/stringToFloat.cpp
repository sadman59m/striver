#include<bits/stdc++.h>
using namespace std;

double strToFloat(string s) {
    double decimal = 1.0;
    double fullNumber = 0.0;

    int i = 0;
    while(i < s.size() &&  s[i] != '.') {
        fullNumber = fullNumber * 10 + (s[i] - '0');
        ++i;
    }

    if(s[i] == '.') {
        ++i;
        fullNumber = fullNumber * 1.0;
        while(i < s.size()) {
            // cout << i << " ";
            decimal = decimal / 10;
            fullNumber = fullNumber + ((s[i] - '0') * 1.0 * decimal);
            ++i;
        }
    }

    return fullNumber;
}

int main() {
    string s;
    cin >> s;
    double ans = strToFloat(s);

    cout << fixed << setprecision(10) << ans << "\n";
    return 0;
}