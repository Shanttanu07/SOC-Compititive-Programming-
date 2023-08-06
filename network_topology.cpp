#include <iostream>
#include <vector>

using namespace std;

string findTopology(int n, int m, const vector<pair<int, int>>& edges) {
    vector<int> degree(n + 1, 0);

    for (const auto& edge : edges) {
        int x = edge.first;
        int y = edge.second;
        degree[x]++;
        degree[y]++;
    }

    int degree_one_count = 0;
    int degree_two_count = 0;
    int degree_n_minus_one = 0;

    for (int i = 1; i <= n; i++) {
        if (degree[i] == 1) {
            degree_one_count++;
        } else if (degree[i] == 2) {
            degree_two_count++;
        } else if (degree[i] == n - 1) {
            degree_n_minus_one++;
        }
    }

    if (degree_one_count == 2 && degree_two_count == n - 2) {
        return "bus topology";
    } else if (degree_two_count == n) {
        return "ring topology";
    } else if (degree_n_minus_one == 1 && degree_one_count == n - 1) {
        return "star topology";
    } else {
        return "unknown topology";
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> edges;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        edges.push_back({x, y});
    }

    string topology = findTopology(n, m, edges);
    cout << topology << endl;

    return 0;
}
