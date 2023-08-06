#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int coins,sum;
    cin>>coins>>sum;
    long long int coin[coins];
    for(long long int i=0;i<coins;i++)
    {
        cin>>coin[i];
    }
    long long int cases[sum+1];
    cases[0]=1;
    for(long long int i=1;i<=sum;i++)
    {
        cases[i]=0;
        for(long long int k=0;k<coins;k++)
        {
            if(i>=coin[k])
            {
                cases[i]+= cases[i-coin[k]];
            }
        }
    }
    cout<<cases[sum];
    
}