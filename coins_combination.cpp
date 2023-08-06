#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1e9;

int findMinMoves(int a, int b) {
    if (a == b) return 0; // The rectangle is already a square.

    if (a > b) {
        swap(a, b); // Ensure a <= b
    }

    vector<vector<int>> dp(a + 1, vector<int>(b + 1, INF));
    for (int i = 1; i <= a; i++) dp[i][i] = 0;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k < i; k++) {
                dp[i][j] = min(dp[i][j], 1 + dp[k][j] + dp[i - k][j]);
            }
            for (int k = 1; k < j; k++) {
                dp[i][j] = min(dp[i][j], 1 + dp[i][k] + dp[i][j - k]);
            }
        }
    }

    return dp[a][b];
}

int main() {
    int a, b;
    cin >> a >> b;

    int result = findMinMoves(a, b);
    cout << result << endl;

    return 0;
}
