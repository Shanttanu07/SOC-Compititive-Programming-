#include <bits/stdc++.h>

using namespace std;

void print(int l,int r,int n,int a[])
{
    int i;
    for(i=r+1;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=r;i>=l;i--)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<l;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int l,r;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        if(a[n-1] == n)
        {
            r=n-1;
            int k;
            for(k=n-1;k>=0;k--)
            {
                if(a[k] < a[0])
                    break;
            }

            l = k+1;
            if(l>r)
               l=r;
            print(l,r,n,a);
            
            //cout<<l<<" "<<r;
            continue;
        }
        
        if(a[0] == n)
        {
            if(a[n-1] == n-1)
            {
                r=n-1;
                for(int i=r;i>=0;i--)
                {
                   if(a[i]<a[0])
                   {
                      l=i+1;
                      break;
                   }
                }
                if(l > r)
                   l = r;
                print(l,r,n,a);
                continue;
            }
            for(int i=1;i<n;i++)
            {
                if(a[i]==n-1)
                {
                    r=i-1;
                    break;
                }
            }
            print(r,r,n,a);
            continue;
        }
        
        else
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]==n)
                {
                    r=i-1;
                    break;
                }
            }
            for(int i=r-1;i>=0;i--)
            {
                if(a[i]<a[0])
                {
                    l=i+1;
                    break;
                }
            }
            if(l > r)
               l = r;
            print(l,r,n,a);
        }

    }
}