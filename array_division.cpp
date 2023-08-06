#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool can_divide_into_subarrays(const vector<long long int>& arr, long long int k, long long int max_sum) {
    long long int subarrays = 1;
    long long int current_sum = 0;

    for (long long int num : arr) {
        if (num > max_sum) {
            return false; 
        }

        if (current_sum + num <= max_sum) {
            current_sum += num;
        } else {
            subarrays++;
            current_sum = num;
        }
    }

    return subarrays <= k;
}

long long int find_minimum_max_sum(const vector<long long int>& arr, long long int n, long long int k) {
    long long int left = 1;
    long long int right = 1e18;
    while (left < right) {
        long long int mid = left + (right - left) / 2;
        if (can_divide_into_subarrays(arr, k, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    long long int n, k;
    cin >> n >> k;

    vector<long long int> arr(n);
    for (long long int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long int result = find_minimum_max_sum(arr, n, k);
    cout << result << endl;

    return 0;
}
