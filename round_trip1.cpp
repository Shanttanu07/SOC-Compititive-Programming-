#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool dfs(int node, int parent, const vector<vector<int>>& graph, vector<bool>& visited, vector<int>& parentArr) {
    visited[node] = true;
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            parentArr[neighbor] = node;
            if (dfs(neighbor, node, graph, visited, parentArr)) {
                return true;
            }
        } else if (neighbor != parent) {
            vector<int> cycle;
            int current = node;
            while (current != neighbor) {
                cycle.push_back(current);
                current = parentArr[current];
            }
            cycle.push_back(neighbor);
            cycle.push_back(node);
            cout<<cycle.size()<<endl;
            for (int city : cycle) {
                cout << city << " ";
            }
            cout << endl;
            return true;
        }
    }
    return false;
}

void find_cycle(const vector<vector<int>>& graph, int n) {
    vector<bool> visited(n + 1, false);
    vector<int> parentArr(n + 1, -1);

    for (int i = 1; i <= n; ++i) {
        if (!visited[i] && dfs(i, -1, graph, visited, parentArr)) {
            return;
        }
    }

    cout << "IMPOSSIBLE" << endl;
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    find_cycle(graph, n);

    return 0;
}
