#include <iostream>
using namespace std;

int main() 
{
    int test_cases;
    cin >> test_cases;
    for (int t = 0; t < test_cases; t++)
    {
        int size, queries;
        cin >> size >> queries;
        int a[size],sum=0;
        for (int j = 0; j < size; j++) 
        {
            cin >> a[j];
            sum += a[j];
        }
        int a[size], prefix_sum[size+1];
        prefix_sum[0] = 0;

        for (int j = 0; j < size; j++) 
        {
            cin >> a[j];
            prefix_sum[j+1] = prefix_sum[j] + a[j];
        }

        int l, r, k;
        for (int j = 0; j < queries; j++)
        {
            cin >> l >> r >> k;
            // int sum1=0;
            // for(int b=l-1;b<r;b++)
            // {
            //     sum1 += a[b];
            // }

            if ((sum+(r-l+1)*k-prefix_sum[r]+prefix_sum[l-1]) % 2 == 0) {
                cout << "NO\n";
            }
            else 
            {
                cout << "YES\n";
            }
        }
    }
    return 0;
}

