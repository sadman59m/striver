#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n+1);

    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    // applying insertion sort

    for(int i=1; i<n; ++i) {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }

    for(int i=0; i<n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}