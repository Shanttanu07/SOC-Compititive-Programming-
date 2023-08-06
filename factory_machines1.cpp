#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool can_make_products_in_time(long long time, const vector<int>& machines, int t) {
    long long total_products = 0;
    for (int machine : machines) {
        total_products += time / machine;
        if (total_products >= t) {
            return true;
        }
    }
    return false;
}

long long shortest_time_to_make_products(int n, int t, const vector<int>& machines) {
    long long left = 0;
    long long right = 1e18; 

    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (can_make_products_in_time(mid, machines, t)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> machines(n);
    for (int i = 0; i < n; ++i) {
        cin >> machines[i];
    }

    long long result = shortest_time_to_make_products(n, t, machines);
    cout << result << endl;

    return 0;
}
