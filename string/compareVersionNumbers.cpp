#include<bits/stdc++.h>
using namespace std;

int compareVersion(string version1, string version2) {
     long long num1 = 0;
    long long num2 = 0;
    int n = version1.size(); 
    int m = version2.size();
    int i = 0, j = 0;

    while(i < n || j < m) {
        while( i < n && version1[i] != '.' ) {
            num1 = num1 * 10 + (version1[i]-'0');
            ++i;
        }

        while( j < m && version2[j] != '.') {
            num2 = num2*10 + (version2[j]-'0');
            ++j;
        }

        if(num1 > num2) {
            return 1;
        }
        else if(num1 < num2) {
            return -1;
        }
        ++i, ++j;
        num1 = 0, num2 = 0;

    }
    return 0;
}

int main() {
    string version1, version2;
    cin >> version1 >> version2;
    int ans = compareVersion(version1, version2);
    cout << ans;
    return 0;
}