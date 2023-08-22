#include<bits/stdc++.h>
using namespace std;

int minimumPlatform(int arr[], int dep[], int n) {
    vector<pair<int, int>> platforms;
    	
    	sort(arr, arr+n);
    	sort(dep, dep+n);

    for(int i=0; i<n; ++i) {
        bool allocated = false;
        for(int j=0; j<platforms.size(); ++j) {
            if(platforms[j].second < arr[i]) {
                platforms[j].first = arr[i];
                platforms[j].second = dep[i];
                allocated = true;
                break;
            }
        }
        if(!allocated) {
            platforms.push_back(make_pair(arr[i], dep[i]));
        }
    }
    int minimumPlatforms = platforms.size();
    return minimumPlatforms;
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