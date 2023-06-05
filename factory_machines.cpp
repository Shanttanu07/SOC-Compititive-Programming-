// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int n,t;
//     cin>>n>>t;
//     long long int a[n];
//     for(long long int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     vector<long long int> b;
//     long long int time=0;
//     long long int sum=0;
//     double eff=0;
//     sort(a,a+n);
//     for(long long int i=0;i<n;i++)
//     {
//         eff+=1.0/a[i];
//     }
//     do
//     {
//         time+=a[0];
//     } while (time*eff<t);
    
//     cout<<time;
//     // int count = 0;
//     // sort(a, a+n);
//     // while(true)
//     // {
//     //     time += a[0];
//     //     count++;
//     //     for(int i = 1; i < n; i++)
//     //     {
//     //         if(a[i] <= time)
//     //         {
//     //             count++;
//     //         }
//     //         else
//     //         {
//     //             break;
//     //         }
//     //     }
//     //     if(count >= t)
//     //     {
//     //         break;
//     //     }
//     // }
//     // cout << time << endl;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t;
    cin>>n>>t;
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // vector<long long int> b;
    long long int time=0;
    long long int sum=0;
    double eff=0;
    for(long long int i=0;i<n;i++)
    {
        eff+=1.0/a[i];
    }
    // while(time*eff<t)
    // {   
    //     // b.push_back(time*eff);
        
    //     // sum=b[time];
    //     time++;
        
    // }
    do
    {
        time++;
    } while (time*eff<t);
    
    cout<<time;
}