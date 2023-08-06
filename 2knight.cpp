#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    for(long long int i=1;i<=x;i++)
    {
    long long int n = i-1;
    long long int fact=(i*i)*((i*i)-1)/2;

    if(i==1){
        cout<<"0"<<endl;
    }
    else{
        cout<<(fact)-(8*((n*n/2)-(n/2)))<<endl;
    }
    }
}


