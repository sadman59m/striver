#include<bits/stdc++.h>
using namespace std;

bool detect(int node, vector<vector<int>> adj, int vis[]) {
    queue<pair<int, int>> q;
    q.push({node, -1});
    vis[node] = 1;
    while(!q.empty()) {
        int node = q.front().first;
        int parentNode = q.front().second;
        q.pop();
        for(auto adjNode: adj[node]) {
            if(!vis[adjNode]) {
                q.push({adjNode, node});
                vis[adjNode] = 1;
            }
            else if(adjNode != parentNode) {
                return true;
            }
        }
    }
    return false;
}

bool detectCycle(int v, vector<vector<int>> adj) {
    int vis[v] = {0};
    for(int i=0; i<v; ++i) {
        if(!vis[i]) {
        if(detect(i, adj, vis)) {
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