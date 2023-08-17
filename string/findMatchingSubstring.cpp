#include<bits/stdc++.h>
using namespace std;

map <int, int> findMatchingSubstring (string super, string sub) {
    int j;
    bool matched = false;
    map <int, int> ans;

    for(int i=0; i < super.size(); ++i) {
        j = 0;

        if(super[i] == sub[j]) {
            int ii = i;


            while(super[ii] == sub[j] && j < sub.size()) {
                ++ii;
                ++j;
            }

            if(sub[j] == '\0') {
                matched = true;
                ans.insert(make_pair(i, i + j - 1));
                i = ii-1;
            }
            
        }
    }
    return ans;
}

int main() {
    string super;
    string sub;
    cin >> super >> sub;
    map <int, int> ans = findMatchingSubstring(super, sub);
    if(ans.size() > 0) {
        for(auto it = ans.begin(); it != ans.end(); ++it) {
            cout << it->first << " " << it->second << "\n";
        }
    }
    else {
        cout << "No matching sub string";
    }
    return 0;
}