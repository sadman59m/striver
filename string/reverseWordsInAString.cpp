#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int n = s.size();
    int i = 0;
    string ans;
    while(i < n) {
        string word = "";
        while(s[i] == ' ' && i < n) {
            ++i;
        }
        while(s[i] != ' ' && i < n) {
            word += s[i];
            ++i;
        }
        if(word.size() > 0) {
            if(ans.size() <= 0) {
                ans += word;
            }
            else {
                ans = word + " " + ans;
            }
        }
    }
    return ans;
}

int main() {
    string s;
    getline(cin, s);

    string ans = reverseWords(s);

    cout << ans ;

    return 0;
}