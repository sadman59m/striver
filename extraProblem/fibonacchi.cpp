#include<bits/stdc++.h>
using namespace std;

void fibo(int a) {
    int x = 0;
    int y = 1;

    for(int i=0; i<a; ++i) {
        int prev_x = x;
        x = y;
        y = prev_x + y;
        cout << x << " ";
    }
}

int main() {
    int a;
    cin >> a;
    fibo(a);
    return 0;
}