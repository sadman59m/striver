#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    // using map data structure
    /*
    map<char, int> fre;
    for(int i=0; i<s.size(); ++i) {
        ++fre[s[i]];
    }

    for(auto it=fre.begin(); it != fre.end(); ++it) {
        cout << it->first << " " << it->second << "\n";
    }
    */

   // using hash array
   vector<int> fre(256);
   for(int i=0; i<s.size(); ++i) {
    ++fre[s[i]];
   }

   for(int i=0; i<256; ++i) {
    if(fre[i] > 0) {
        cout << char(i) << " " << fre[i] << "\n";
    }
   }

    return 0;
}