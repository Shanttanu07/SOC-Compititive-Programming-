// #include <bits/stdc++.h>

// // using namespace std;

// // int main()
// // {
// //     long long int n;
// //     cin>>n;
// //     long long int a[n];
// //     for (long long int i = 0; i < n; i++)
// //     {
// //         cin>>a[i];
// //     }

// //     long long int b,c;
// //     sort(a,a+n,greater<long long int>());

// //     if(n == 1)
// //     {
// //         cout<<a[0]*a[0]<<endl;
// //         return 0;
// //     }

// //     while(1)
// //     {
// //         b=a[0];
// //         c=a[1];
// //         a[0]=b|c;
// //         a[1]=b&c;
// //         if(b==a[0])
// //         {
// //             break;
// //         }
// //         sort(a,a+n,greater<long long int>());
// //     }
// //     for(int k=1;k<n-1;k++)
// //     {   b=a[k];
// //         c=a[k+1];
// //         a[k]=b|c;
// //         a[k+1]=b&c;
// //         while(b!=a[k])
// //         {
            
            

            
// //                 b=a[k];
// //                 c=a[k+1];
// //                 a[k]=b|c;
// //                 a[k+1]=b&c;
// //                 sort(a,a+n,greater<long long int>());
// //                 while(1)
// //                 {
// //                     b=a[0];
// //                     c=a[1];
// //                     a[0]=b|c;
// //                     a[1]=b&c;
// //                     if(b*b+c*c==a[0]*a[0]+a[1]*a[1])
// //                     {
// //                         break;
// //                     }
// //                     sort(a,a+n,greater<long long int>());

// //                 }
// //             b=a[k];
// //             c=a[k+1];
// //             a[k]=b|c;
// //             a[k+1]=b&c;

// //             // if(b*b+c*c==a[k]*a[k]+a[k+1]*a[k+1])
// //             // {
// //             //     break;
// //             // }
            
// //         }    
// //     // for(int k=0;k<n-1;k++)
// //     // {

// //     //     while (1)
// //     //     {
// //     //         b=a[k];
// //     //         c=a[j];    
// //     //         a[k]=a[k]|a[j];
// //     //         a[j]=b&c;
// //     //         if(b*b+c*c == a[k]*a[k]+a[j]*a[j])
// //     //         {
// //     //            break;
// //     //         } 
// //     //         sort(a,a+n,greater<long long int>());
            
// //     //     }
        
        

    
// //         /*while (1)
// //         {
// //             b=a[k];
// //             c=a[k+1];    
// //             a[k]=a[k]|a[k+1];
// //             a[k+1]=b&c;
// //             if(b*b+c*c == a[k]*a[k]+a[k+1]*a[k+1])
// //             {
// //                 break;
// //             }      
// //             sort(a,a+n,greater<long long int>());
    
// //         }*/
// //     }
// //     long long int sum=0;
// //     for(long long int i=0;i<n;i++)
// //     {
// //         sum=sum+a[i]*a[i];
// //     }

// //     cout<<sum<<endl;

    
// // }
// #include<iostream>
// using namespace std;
// int main()
// {
//     long long int n;
//     cin>>n;
//     long long int a[n];
//     for (long long int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     sort(a,a+n,greater<long long int>());
//     for(int i=0;i<n;i++)
//     {
//         int b,c;
//         while(b!=a[n-1-i])
//         {
//         b=a[n-1-i];
//         c=a[n-2-i];
//         a[n-1-i]=b&c;
//         a[n-2-i]=b|c;
//         b=a[n-1-i];
//         c=a[n-2-i];
//         sort(a,a+n,greater<long long int>());
//         }
//     }
// int sum=0;
// for(int i=0;i<n;i++)
// {
//     sum+=a[i]*a[i];
// }
// cout<<sum;


// }
#include<bits/stdc++.h>
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
    sort(a,a+n,greater<long long int>());
    int z=log2(a[0]);
    int max=pow(2,z+1)-1;
    for(int k=0;k<n;k++)
    {
        int z=log2(a[k]);
        int max=pow(2,z+1)-1;
        int i=0;

        while(a[k]<max&&i<n-1-k)
        {
            int b,c;
            b=a[k];
            c=a[n-1-i];
            a[k]=b|c;
            a[n-1-i]=b&c;
            i++;
        }
        sort(a,a+n,greater<long long int>());

    }
int sum=0;
for(int i=0;i<n;i++)
{
    sum+=a[i]*a[i];
}
cout<<sum;
}
