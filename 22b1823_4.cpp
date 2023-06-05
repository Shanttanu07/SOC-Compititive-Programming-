#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    long long int b,c;
    sort(a,a+n,greater<long long int>());

    if(n == 1)
    {
        cout<<a[0]*a[0]<<endl;
        return 0;
    }
    for(int k=0;k<n-1;k++)
    {

    
        while (1)
        {
            b=a[k];
            c=a[k+1];    
            a[k]=a[k]|a[k+1];
            a[k+1]=b&c;
            if(b*b+c*c == a[k]*a[k]+a[k+1]*a[k+1])
            {
                break;
            }      
            sort(a,a+n,greater<long long int>());
    
        }
    }
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        sum=sum+a[i]*a[i];
    }

    cout<<sum<<endl;
}