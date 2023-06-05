#include<iostream>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    long long int a[cases];
    long long int result;
    for(int i=0;i<cases;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<cases;i++)
    {
        result= 1+4*a[i]+(a[i]-1)*(a[i]-1);
        cout<<result<<"\n";
    }

}