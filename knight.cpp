#include<iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    cout << 0 << endl;
    for (long long int i = 2 ; i <= n ; i++) {
      cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << endl;
    }

    return 0;
}