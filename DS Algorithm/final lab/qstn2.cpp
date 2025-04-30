#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>> &graph, int n)
{
    vector<bool> visited(n + 1, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for (int neighbor : graph[curr])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

void bubbleSort(vector<pair<int, int>> &kits)
{
    int k = kits.size();
    for (int i = 0; i < k - 1; ++i)
    {
        for (int j = 0; j < k - i - 1; ++j)
        {
            if (kits[j].first > kits[j + 1].first)
            {
                swap(kits[j], kits[j + 1]);
            }
        }
    }
}

bool binarySearchKitValue(vector<pair<int, int>> &kits, int value)
{
    int left = 0, right = kits.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (kits[mid].second == value)
            return true;
        else if (kits[mid].second < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}
// mam lab a korte pari ni ektu pech lage gechilo . solution dekhar pore hoiche solve

int knapsack(vector<pair<int, int>> &kits, int capacity)
{
    vector<int> dp(capacity + 1, 0);
    for (auto &kit : kits)
    {
        int wt = kit.first, val = kit.second;
        for (int w = capacity; w >= wt; --w)
        {
            dp[w] = max(dp[w], dp[w - wt] + val);
        }
    }
    return dp[capacity];
}
void printSortedKits(const vector<pair<int, int>> &kits)
{
    cout << "Sorted kits by weight:" << endl;
    for (const auto &kit : kits)
    {
        cout << "Weight: " << kit.first << ", Value: " << kit.second << endl;
    }
}

int main()
{
    cout << "Task 1" << endl;
    // task 1
    int n, r;
    cout << "Enter number of locations and number of roads: ";
    cin >> n >> r;
    vector<vector<int>> graph(n + 1);
    cout << "Enter roads (u v):" << endl;
    for (int i = 0; i < r; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cout << "Enter starting location of the robot: ";
    cin >> start;
    cout << "Reachable locations from starting point (BFS order): ";
    bfs(start, graph, n);

    cout << "\nTask 2" << endl;
    // task 2
    int k;
    cout << "Enter number of kit options: ";
    cin >> k;
    vector<pair<int, int>> kits(k);

    cout << "Enter weight and value of each kit:" << endl;
    for (int i = 0; i < k; ++i)
    {
        int weight, value;
        cin >> weight >> value;
        kits[i] = {weight, value};
    }
    bubbleSort(kits);
    printSortedKits(kits);
    // task 3
    cout << "\nTask 3" << endl;
    cout << (binarySearchKitValue(kits, 50) ? "Yes is found." : "No dosent exist.") << endl;
    cout << endl;
    // task 4
    cout << "\nTask 4" << endl;
    cout << "Maximum value the bot can carry: ";
    // task 5  mam eita tokhon pari ni 1-4 parchilm dekhaichi
    cout << "\nTask 5" << endl;

    int capacity;
    cout << "Enter maximum capacity of the bot: ";
    cin >> capacity;

    cout << knapsack(kits, capacity) << endl;

    return 0;
}
