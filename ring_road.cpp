#include <iostream>
#include <vector>
#include <algorithm>

#define INF 1e9

using namespace std;

const int maxn = 100 + 10;

int n;
int a[maxn][maxn];
vector<int> v[maxn];

void init() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = INF;
        }
    }
}

int minCost(int t) {
    int ans = 0;
    int cnt = 0;
    int p = 1;
    if (a[1][t] == INF) {
        ans += a[t][1];
    }
    while (true) {
        cnt++;
        for (int i = 0; i < v[t].size(); i++) {
            int j = v[t][i];
            if (j != p) {
                if (a[t][j] == INF) {
                    ans += a[j][t];
                }
                p = t;
                t = j;
            }
            if (t == 1) break;
        }
        if (t == 1) break;
        if (cnt == n - 1) break;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    init();

    int x, y, z;
    for (int i = 1; i <= n; i++) {
        a[i][i] = 0;
        cin >> x >> y >> z;
        a[x][y] = z;
        v[x].push_back(y);
        v[y].push_back(x); 
    }

    int min_cost = INF;
    for (int i = 0; i < v[1].size(); i++) {
        min_cost = min(min_cost, minCost(v[1][i]));
    }

    cout << min_cost << endl;

    return 0;
}
