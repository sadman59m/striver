#include<bits/stdc++.h>
using namespace std;

bool validParanthesis(string s) {
    stack<char> st;
    for(int i=0; i<s.size(); ++i) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if(st.empty() ||
                (s[i] == ')' && st.top() != '(') ||
                (s[i] == '}' && st.top() != '{') ||
                (s[i] == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop();
            }
        }
    return st.empty();
}

int main() {
    string s;
    cin >> s;
    if(validParanthesis(s))
        cout << "true";
    else
        cout << "false";
}