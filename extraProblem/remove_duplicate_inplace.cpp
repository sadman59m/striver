#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n+2);
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }
    int back = -1, front = 0;
    set<int> st;
    
    while(front < n) {
        if(st.find(a[front]) == st.end()) {
            ++back;
            a[back] = a[front];
            st.insert(a[front]);
        }
        ++front;
    };

    for(int i=0; i<=back; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}