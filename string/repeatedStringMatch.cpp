#include<bits/stdc++.h>
using namespace std;

bool check(string a, string b) {
    int j = 0;
    int m = b.size();
    for(int i=0; i<a.size(); ++i) {
        j = 0;
        if(a[i] == b[j]) {
            int tmp_i = i;
            while(a[tmp_i] == b[j] && j < m) {
                ++tmp_i;
                ++j;
            }
            if(b[j] == '\0') {
                return 1;
            }
        }
    }
    return 0;
}

int repeatedStringMatch(string a, string b) {
    int m = b.size();
    int ans = 1;

    while(a.size() < m) {
        a += a;
        ++ans;
    }

    if(check(a, b)) {
        return ans;
    }

    a += a;

    if(check(a, b)) {
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