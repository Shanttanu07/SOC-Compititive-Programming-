// #include <iostream>
// #include <vector>
// using namespace std;

// int main() 
// {
//     int cases,z;
//     cin>> cases;

//     // Use a vector to create a contiguous block of memory to store all the elements of a
//     vector<int> a(cases * 4);
//     for(int i = 0; i < cases; i++) {
//         for(int j = 0; j < 4; j++) {
//             cin >> a[i*4+j];
//         }
//     }

//     // Loop through each array in a and output the resulting array b
//     for(int i = 0; i < cases; i++) 
//     {
//         if(a[i*4+3] / a[i*4+1] >= a[i*4+2] && a[i*4+3] / a[i*4+1] - a[i*4] <= a[i*4+2]) 
//         {
//             // Use a vector to create an array b of size a[i*4]
//             vector<int> b(a[i*4]);
//             b[0] = (a[i*4+2]) * (a[i*4+1]);
//             if(a[i*4+1]!=1)
//             {
//                 z = (a[i*4+3] - a[i*4+2] * a[i*4+1]) / (a[i*4+1] - 1);
//             }
//             else{ z=0;}
//             for(int l = 1; l <= z; l++)
//             {
//                 b[l] = a[i*4+1] - 1;
//             }
//             b[z + 1] = a[i*4+3] - a[i*4+2] * a[i*4+1] - (a[i*4+1] - 1) * z;
         
            
//             for(int m = z + 2; m < a[i*4]; m++) {
//                 b[m] = 0;
//             }
//             for(int m = 0; m < a[i*4]; m++) {
//                 cout << b[m] << " ";
//             }
//             cout << endl;
//             // No need to free the memory allocated for array b, since it is a vector
//         }
//         else
//         {
//             int b = -1;
//             cout<<b<<endl;
//         }
//     }
// }
#include<iostream>
using namespace std;
int function(int n,int k ,int b,int s)
{   int i;
    for(i=1;i<=s;i++)
    {
        if(s-i/k==b)
        {
            s=s-i;
            cout<<s<<" ";
            break;
            
        }
    }
    if(s-i==0)
    {
        for(int k=0;k<n-1;k++)
        {
            cout<<"0 ";
        }
    }
    else
    {
        function(n-1,k,0,s-i);
    }
    return 0;
}
int main()
{
    int n,k,b,s;
    cin>>n>>k>>b>>s;
    function(n,k,b,s);

    return 0;


}