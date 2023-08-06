#include <iostream>

using namespace std;

int minimumClicks(int n, int m) {
    int clicks = 0;
    while (m > n) {
        if (m % 2 == 0) {
            m /= 2;
        } else {
            m++;
        }
        clicks++;
    }
    return clicks + (n - m); 
}

int main() {
    int n, m;
    cin >> n >> m;

    int result = minimumClicks(n, m);
    cout << result << endl;

    return 0;
}
