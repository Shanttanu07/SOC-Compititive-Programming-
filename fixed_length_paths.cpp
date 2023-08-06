#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> gr;
int n, k;
int ans = 0;

void dfs(int v, int par, vector<vector<int>>& d) {
    d[v][0] = 1;
    for (auto i : gr[v]) {
        if (i != par) {
            dfs(i, v, d);
            for (int j = 1; j <= k; j++)
                ans += d[i][j - 1] * d[v][k - j];
            for (int j = 1; j <= k; j++)
                d[v][j] += d[i][j - 1];
        }
    }
}

int main() {
    cin >> n >> k;

    gr.resize(n + 1);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }

    vector<vector<int>> d(n + 1, vector<int>(k + 1, 0));

    dfs(1, 0, d);

    cout << ans << endl;

    return 0;
}
