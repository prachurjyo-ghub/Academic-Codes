#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void DFS(int start, const vector<vector<int>>& adjList, vector<bool>& visited) {
    stack<int> s;
    s.push(start);

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        if (!visited[node]) {
            cout << node << " ";
            visited[node] = true;
        }

        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                s.push(neighbor);
            }
        }
    }
}

int main() {
    int numNodes = 5;
    vector<vector<int>> adjList(numNodes);

    // Example graph
    adjList[0] = {1, 2};
    adjList[1] = {0, 3, 4};
    adjList[2] = {0};
    adjList[3] = {1};
    adjList[4] = {1};

    vector<bool> visited(numNodes, false);

    cout << "DFS starting from node 0: ";
    DFS(0, adjList, visited);

    return 0;
}