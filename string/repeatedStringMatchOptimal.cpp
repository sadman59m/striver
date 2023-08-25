#include<bits/stdc++.h>
using namespace std;

int rabinKarp(string a, string b) {
    int m = b.size();
    int BASE = 1000000;
    int power = 1;
    for(int i=0; i<m; ++i) {
        power = (power * 31) % BASE;
    }

    int bHash = 0;
    for(int i=0; i<m; ++i) {
        bHash = (bHash * 31 + (b[i] - 'A' + 1)) % BASE;
    }
    int aHash = 0;
    for(int i=0; i<a.size(); ++i) {
        aHash = (aHash * 31 + (a[i] - 'A' + 1)) % BASE;
        if(i < m - 1) continue;
        if( i >= m) {
            aHash = (aHash - ((a[i-m] - 'A' + 1) * power)%BASE + BASE) % BASE;
        }
        if(aHash == bHash) {
            if(a.substr(i-m+1, m) == b) {
                return i - m + 1;
            }
        }
    }
    return -1;
}

int repeatedStringMatch(string a, string b) {
    int m = b.size();
    int ans = 1;

    while(a.size() < m) {
        a += a;
        ++ans;
    }

    if(rabinKarp(a, b) != -1) {
        return ans;
    }

    a += a;

    if(rabinKarp(a, b) != -1) {
        return ans + 1;
    }
    
    return -1;
}

int main() {
    string a, b;
    cin >> a >> b;
    int ans = repeatedStringMatch(a, b);
    cout << ans;
    return 0;
}