#include <iostream>
#include <unordered_set>
#include <vector>
#include <cmath>
using namespace std;

unordered_set<string> seen;
vector<int> edges;

void dfs(string node, int &k, string &A)
{
    for (int i = 0; i < k; ++i)
    {
        string str = node + A[i];
        if (seen.find(str) == seen.end())
        {
            seen.insert(str);
            dfs(str.substr(1), k, A);
            edges.push_back(i);
        }
    }
}

string deBruijn(int n, int k, string &A)
{
    seen.clear();
    edges.clear();

    string startingNode = string(n - 1, A[0]);
    dfs(startingNode, k, A);

    string S;

    int l = pow(k, n);
    for (int i = 0; i < l; ++i)
        S += A[edges[i]];
    S += startingNode;

    return S;
}

int main()
{
    int n, k = 2;
    string A = "01";
    cin >> n;
    cout << deBruijn(n, k, A);

    return 0;
}
