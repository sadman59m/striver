#include<bits/stdc++.h>
using namespace std;

bool detectDfs(int node, int parent, vector<int>vis, vector<vector<int>> adj) {
    vis[node] = 1;
    for(auto adjNode: adj[node]) {
        if(!vis[adjNode]) {
            vis[adjNode] = 1;
            if(detectDfs(adjNode, node, vis, adj) == true) {
                return true;
            }
        }
        else if(adjNode != parent) {
            return true;
        }
    }
    return false;
}

bool detectCycle(int v, vector<vector<int>> adj) {
    vector<int> vis(v, 0);
    for(int i=0; i<v; ++i) {
        if(!vis[i]) {
            if(detectDfs(i, -1, vis, adj) == true) {
                return true;
            }
        }
    }
    return false;
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
    

    if(detectCycle(v, adj)) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}