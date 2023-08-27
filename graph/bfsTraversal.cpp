#include<bits/stdc++.h>
using namespace std;


vector<int> dfsOfGraph(int v, vector<vector<int>> adj) {
    vector<int> ls;
    int vis[v] = {0};
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while(!q.empty()) {
       int node = q.front();
       q.pop();
       ls.push_back(node);
       for(auto it: adj[node]) {
        if(!vis[it]) {
            vis[it] = 1;
            q.push(it);
        }
       }
    }
    return ls;
}

int main() {
    int v, e;
    cin >> v >> e;

    vector<vector<int>> adj(v);
    
    for(int i=0; i<e; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // for(int i=0; i<adj.size(); ++i) {
    //     for(int j=0; j<adj[i].size(); ++j) {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    vector<int> ans = dfsOfGraph(5, adj);

    for(auto it: ans) {
        cout << it << " ";
    }
    return 0;
}