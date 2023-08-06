#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;

    for(int i=0;i<test_cases;i++)
    {
        int n;
        cin>>n;
        int permutation[n];
        for(int k=0;k<n;k++)
        {
            cin>>permutation[k];
        }
        if(n==1)
        {
            cout<<1<<endl;
        }
        else{
        int r,l;
        if(permutation[0]==n)
        {
            for(int k=1;k<n-1;k++)
            {
                if(permutation[k]==n-1)
                {
                    r=k-1;
                    break;
                }
            }
            if(permutation[n-1]==n-1)
            {
                r=n-1;
            }
        }
        else
        {   if(n==1)
            {
                r=0;
            }
            else{
            for(int k=1;k<n-1;k++)
            {
                if(permutation[k]==n)
                {
                    r=k-1;
                    break;
                }
            }
            if(permutation[n-1]==n)
            {
                r=n-1;
            }}
        }
        if(r==0)
        {
            l=0;
        }
        else
        {
            for(int k=r-1;k>=0;k--)
            {
                if(permutation[k]<permutation[0])
                {
                    l=k+1;
                    break;
                }
            }
        }
        for(int k=r+1;k<n;k++)
        {
            cout<<permutation[k]<<" ";
        }
        if(r==n-1)
        {
            cout<<permutation[n-1]<<" ";
        }
        if(r!=n-1)
        {
            for(int k=r;k>=l;k--)
            {
                cout<<permutation[k]<<" ";
            }
            if(l!=0)
            {
                for(int k=0;k<=l-1;k++)
                {
                    cout<<permutation[k]<<" ";
                }
            }

        }
        else
        {
            for(int k=r-1;k>=l;k--)
            {
                cout<<permutation[k]<<" ";
            }
            if(l!=0)
            {
                for(int k=0;k<=l-1;k++)
                {
                    cout<<permutation[k]<<" ";
                }
            }

        }
        
        cout<<endl;}
        
    }
}