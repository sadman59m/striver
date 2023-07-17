#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> test;
    for(int i=0; i<s.size(); ++i) {
        test[s[i]]++;
    }

    for(auto it = test.begin(); it != test.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}