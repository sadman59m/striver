#include<bits/stdc++.h>
using namespace std;

int findMatch(string source, string target) {
    int BASE = 1000000;
    int m = target.size();
    int power = 1;
    for(int i=0; i<m; ++i) {
        power = (power * 31) % BASE;     // 31 becase we usually take prime for this kinds of multiplication
    }
    int targetCode = 0;
    for(int i=0; i<m; ++i) {
        targetCode = (targetCode * 31 + (target[i] - 'A' + 1)) % BASE;
    }
    int hashCode = 0;
    for(int i=0; i<source.size(); ++i) {
        hashCode = (hashCode * 31 + (source[i] - 'A' + 1)) % BASE;
        if(i < m-1) continue;
        if(i >= m) {
            hashCode = (hashCode - ((source[i-m] - 'A' + 1) * power) % BASE + BASE) % BASE;
        }
        if(hashCode == targetCode) {
            if(source.substr(i-m+1, m) == target) {
                return i - m + 1;
            }
        }
    }
    return -1;
}

int main() {
    string source;
    string target;
    cin >> source >> target;
    
    int ans = findMatch(source, target);

    cout << ans << endl;
    return 0;
}