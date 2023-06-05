#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    long long int cases;
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        long long int days, k;
        cin >> days >> k;

        vector<long long int> b(days);
        vector<long long int> a;
        long long int l[days];
        
        for (long long int z = 0; z < days; z++) {
            int n;
            cin >> n;
            a.push_back(n);
            l[z] = a[z];
        }

        for (long long int z = 0; z < days; z++) {
            cin >> b[z];
        }

        sort(b.begin(), b.end());
        sort(a.begin(), a.end());
        
        vector<long long int> c(days);

        for (long long int z = 0; z < days; z++) {
            for (long long int m = 0; m < days; m++) {
                if (a[m] == l[z]) {
                    c[z] = b[m];
                    a.erase(a.begin() + m);
                    b.erase(b.begin() + m);
                    break;
                }
            }
        }

        for (long long int z = 0; z < days; z++) {
            cout << c[z] << " ";
        }
        cout << "\n";
    }

    return 0;
}
