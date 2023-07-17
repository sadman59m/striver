#include<bits/stdc++.h>
using namespace std;

string reverseS(string s, int sz) {
    string ns = "";
    if(sz < 0) {
 
        return "";
    }
    else {
        // string ns = reverseS(s, sz - 1);
        // cout << s[sz] << " " << ns << endl;
        // ns = s[sz] + ns;
        // return ns;
        return (s[sz] + reverseS(s, sz - 1));

    }
}

int main() {
    string s = "sakib";
    string ns = "";

    ns = reverseS(s, s.size() - 1);

    // for(int i = s.size() - 1; i >= 0; --i) {
    //     ns += s[i];
    // }
    cout << s << endl << ns;
    return 0;
}