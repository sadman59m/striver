#include<bits/stdc++.h>
using namespace std;

int minimumPlatform(int arr[], int dep[], int n) {
    sort(arr, arr+n);
    sort(dep, dep+n);

    int plat_needed = 1, result = 1;
    int i = 1, j = 0;

    while(i < n && j < n) {
        if(arr[i] <= dep[j]) {
            ++plat_needed;
            ++i;
        }
        else if(arr[i] > dep[j]) {
            --plat_needed;
            ++j;
        }
        
        if(plat_needed > result) {
            result = plat_needed;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    int arr[n+2], dep[n+2];
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    for(int i=0; i<n; ++i) {
        cin >> dep[i];
    }
    int ans = minimumPlatform(arr, dep, n);
    cout << ans;
    return 0;
}