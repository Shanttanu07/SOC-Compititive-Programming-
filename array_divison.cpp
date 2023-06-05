#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    long long int n, k;
    std::cin >> n >> k;
    vector<long long int> a;

    for (long long int i = 0; i < n; i++) {
        long long int l;
        cin >> l;
        a.push_back(l);
    }

    sort(a.begin(), a.end(), greater<long long int>());
    vector<vector<long long int> > b(k);

    for (long long int i = 0; i < k; i++) 
    {
        if (!a.empty()) 
        {
            b[i].push_back(a[0]);
            a.erase(a.begin());
        }
    }

    long long int i = 1;
    long long int sum1 = 0;
    long long int sum2 = 0;
    long long int size1 = b[k - i].size();
    long long int size2 = b[0].size();
    for (long long int z = 0; z < size1; z++) 
        {
            sum1 += b[k - i][z];
        }

        for (long long int z = 0; z < size2; z++) 
        {
            sum2 += b[0][z];
        }



    while (!a.empty()) 
    {
        
        if (i != 1) 
        {
            
            

            if (sum1 < sum2) 
            {
                b[k - i].push_back(a[0]);
                sum1+=a[0];
                a.erase(a.begin());
                i++;
                if (i == k + 1) 
                {
                    i = 1;
                }
                sum2=sum1;
                sum1=0;
                long long int size1 = b[k - i].size();
                for (long long int z = 0; z < size1; z++) 
                {
                    sum1 += b[k - i][z];
                }

            } 
            else 
            {
                b[k - i + 1].push_back(a[0]);
                sum2+=a[0];
                a.erase(a.begin());
            }
        } 
        else 
        {
            long long int size1 = b[k - i].size();
            long long int size2 = b[0].size();

            

            if (sum1 < sum2) 
            {
                b[k - i].push_back(a[0]);
                sum1+=a[0];
                a.erase(a.begin());
                i++;
                if (i == k + 1) 
                {
                    i = 1;
                }
                sum2=sum1;
                sum1=0;
                for (long long int z = 0; z < size1; z++) 
                {
                    sum1 += b[k - i][z];
                }
            } 
            else
            {
                b[0].push_back(a[0]);
                sum2+=a[0];
                a.erase(a.begin());
            }
        }
    }

    long long int summax = 0;

    for (long long int i = 0; i < k; i++) {
        long long int sum = 0;
        long long int sizemax = b[i].size();
        for (long long int z = 0; z < sizemax; z++) {
            sum += b[i][z];
        }
        if (summax < sum) {
            summax = sum;
        }
    }

    cout << summax<<"\n";
    for(int i=0;i<k;i++)
    {
        for(int z=0;z<b[i].size();z++)
        {
            cout<<b[i][z]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
