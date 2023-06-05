#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int len;
        cin>>len;
        int check=0;
        for(int k=1;k<len+1;k++)
        {
            int a;
            cin>>a;
            if(a<=k&&check==0)
            {
                check++;
            }
        }
        if(check==1)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}
