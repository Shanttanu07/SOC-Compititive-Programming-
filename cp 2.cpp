#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        for (int h = 0; h < q; h++)
        {            
            int l,r,k;
            cin>>l>>r>>k;
            int sum=0;
            for (int m = 0; m < l-1; m++)
            {
                sum=sum+a[m];
            }
            for (int m = r; m < n; m++)
            {
                sum=sum+a[m];
            }
            sum = sum*(r-l);
            
            cout<<"\n";
            if(sum%2 == 0){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
            
            
        }
        
        
    }
    

    
}