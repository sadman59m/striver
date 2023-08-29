#include<bits/stdc++.h>
using namespace std;

vector<int> st;
int head = 0, tail = -1;

void push(int e) {
    st.push_back(e);
    ++tail;
}

int top() {
    int x = st[tail];
    return x;
}

void pop() {
    if(tail > 0) {
        --tail;
    }
}

int stSize() {
    return tail - 0 + 1;
}

int main() {
    int e;
    while(cin >> e && e != -555) {
        push(e);
    }

    cout << top() << "\n";

    pop();

    cout << top() << "\n";

    cout << stSize() << "\n";


    return 0;

}