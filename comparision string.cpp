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
        char a[len];
        int counter=0;
        cin>>a[0];
        char check=a[0];
        for(int k=1;k<len;k++)
        {
            cin>>a[k];
            if(a[k]!=check)
            {
                counter++;
                check=a[k];
            }

        }
        cout<<len+1-counter<<endl;
    }
}