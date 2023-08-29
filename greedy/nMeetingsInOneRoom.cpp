#include<bits/stdc++.h>
using namespace std;

int maxMeeting(int n, int start[], int end[]) {
    pair<int, int> a[n+1];

    for(int i=0; i<n; ++i) {
        a[i].first = end[i];
        a[i].second = i;
    }

    sort(a, a+n);
    vector<int> ans;

    ans.push_back(a[0].second+1);
    int timeLimit = a[0].first;

    for(int i=1; i<n; ++i) {
        if(start[a[i].second] > timeLimit) {
            ans.push_back(i+1);
            timeLimit = a[i].first;
        }
    }

    // for(auto it: ans)
    //     cout << it << " ";

    return ans.size();
}

int main() {
    int n;
    cin >> n;
    int start[n+1], end[n+1];

    for(int i=0; i<n; ++i)
        cin >> start[i];

    for(int i=0; i<n; ++i)
        cin >> end[i];

    int ans = maxMeeting(n, start, end);

    cout << ans << "\n";

    return 0;
}