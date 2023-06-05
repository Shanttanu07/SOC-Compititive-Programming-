#include<iostream>
#include<vector>
using namespace std;
int main() 

{
    int cases;
    cin >> cases;
 
    // Use a vector to create a contiguous block of memory to store all the elements of a
    vector<long long int> a(cases * 4);
    for(int i = 0; i < cases; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> a[i*4+j];
        }
    }
 
    // Loop through each array in a and output the resulting array b
    for(int i = 0; i < cases; i++) 
    {   
        if(a[i*4+3] / a[i*4+1] >= a[i*4+2] && a[i*4+3] / a[i*4+1] - a[i*4] <= a[i*4+2]) 
        {
            // Use a vector to create an array b of size a[i*4]
            vector<long long int> b(a[i*4]);
            b[0] = (a[i*4+2]) * (a[i*4+1]);
            cout<<b[0]<<" ";
            if(a[i*4+1]!=1)
            {
                long long int z = (a[i*4+3] - a[i*4+2] * a[i*4+1]) / (a[i*4+1] - 1);
                for(int l = 1; l <= z; l++) {
                    b[l] = a[i*4+1] - 1;
                }
                b[z + 1] = a[i*4+3] - a[i*4+2] * a[i*4+1] - (a[i*4+1] - 1) * z;
                for(int m = z + 2; m < a[i*4]; m++) {
                b[m] = 0;
                }
                for(int m = 1; m < a[i*4]; m++) {
                    cout << b[m] << " ";
                }
            }
            else
            {
                for( int l=1;l<a[i*4];l++)
                {
                    b[l]=0;
                    cout<<b[l]<<" ";
                }
            }
            cout << endl;
            // No need to free the memory allocated for array b, since it is a vector
        }
        else
        {
            int b = -1;
            cout<<b<<endl;
        }
    }
}