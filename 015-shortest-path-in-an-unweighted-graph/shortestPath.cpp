#include <bits/stdc++.h>
using namespace std;

// copy this function...
vector<int> shortestPath(vector<pair<int,int>> edges , int n , int m, int s , int t){
    vector<vector<int>> adj(n+1);

    for(auto edge: edges) {
        adj[edge.first].push_back(edge.second);
        adj[edge.second].push_back(edge.first);
    }

    vector<int> dist(n+1, INT_MAX);
    vector<int> parent(n+1, -1);
    queue<int> q;

    dist[s] = 0;
    q.push(s);

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        for(auto neighbor: adj[node]) {
            if(dist[neighbor] == INT_MAX) {
                dist[neighbor] = dist[node] + 1;
                parent[neighbor] = node;
                q.push(neighbor);
            }
        }
    }

    vector<int> path;
    for(int v = t; v != -1; v = parent[v]) {
        path.push_back(v);
    }

    reverse(path.begin(), path.end());

    return path;
}

// ignore this...
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m, s, t;
        cin >> n >> m >> s >> t;

        vector<pair<int, int>> edges(m);
        for (int i = 0; i < m; ++i) {
            cin >> edges[i].first >> edges[i].second;
        }

        vector<int> result = shortestPath(edges, n, m, s, t);

        cout << "( ";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i != result.size() - 1) {
                cout << " , ";
            }
        }
        cout << " )" << endl;
    }

    return 0;
}
