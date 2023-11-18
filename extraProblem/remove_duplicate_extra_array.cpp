#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n+2);
    vector<int> ans;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }
   
   sort(a.begin(), a.end()-2);

   for(int x: a) {
    cout << x << " ";
   }

   ans.push_back(a[0]);

   for(int i = 1; i<n; ++i) {
    if(a[i] != a[i-1]) {
        cout << a[i] << " ";
        ans.push_back(a[i]);
    }
   }

    cout << "\n";
   for(int i=0; i<ans.size(); ++i) {
    cout << ans[i] << " ";
   }

    return 0;
}