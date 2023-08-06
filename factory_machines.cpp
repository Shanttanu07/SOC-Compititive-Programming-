#include<bits/stdc++.h>
using namespace std;
int main()
{
    int machines,prod;
    cin>>machines>>prod;
    int arr[machines];
    for(int i=0;i<machines;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+machines);
    double eff=0;
    for(int i=0;i<machines;i++)
    {
        eff+= 1.0/arr[i];
    }
    int time= int(prod/eff);
    long left = prod-time*eff;
    for(int i=0;i<machines-1;i++)
    {
        if(left==0)
        {
            break;
        }
        else
        {
            eff=eff-1.0/arr[machines-i];
            time = time+ int(left/eff);
            left=left-int(left/eff)*eff;
        }
    }
    cout<<time;
}