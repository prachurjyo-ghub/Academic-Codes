#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>> &adj, int n)
{
    vector<bool> visited(n, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty())
    {
        int node = q.front();
        cout << node << " ";
        q.pop();
        for (int neighbor : adj[node])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main()
{
    int n, e;
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> e;
    vector<vector<int>> adj(n);
    cout << "Enter edges (u v): ";
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start;
    cout << "Enter starting vertex: ";
    cin >> start;
    cout << "BFS Traversal: ";
    bfs(start, adj, n);
    return 0;
}
