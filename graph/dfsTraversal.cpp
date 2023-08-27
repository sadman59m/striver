#include<bits/stdc++.h>
using namespace std;

void dfs(int node, int vis[], vector<vector<int>> adj, vector<int> &ls) {
    vis[node] = 1;
    ls.push_back(node);
    for(auto it: adj[node]) {
        if(!vis[it]) {
            dfs(it, vis, adj, ls);
        }
    }
}

vector<int> dfsOfGraph(int v, vector<vector<int>> adj) {
    vector<int> ls;
    int vis[v] = {0};
    int start = 0;
    dfs(start, vis, adj, ls);
    return ls;
}

int main() {
    vector<vector<int>> adj = {{2,3,1}, {0}, {0,4}, {0}, {2}};

    vector<int> ans = dfsOfGraph(5, adj);

    for(auto it: ans) {
        cout << it << " ";
    }
    return 0;
}