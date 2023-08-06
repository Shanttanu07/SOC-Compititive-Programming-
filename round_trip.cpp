#include<bits/stdc++.h>
using namespace std;
int *n;
int m;

int main()
{
    int z;
    cin>>z,m;
    *n=z;
    vector <int> adj[n];
    int count[*n];
    for(int i=0;i<*n;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        int k,l;
        cin>>k,l;
        adj[k].push_back(l);
        count[k]++;
        adj[l].push_back(k);
        count[l]++;
    }
    for( int i=0;i<*n;i++)
    {   
    }        
    
    
}


void dfs(int s,int visited[], vector <int>& adj[*n]) 
{
    if (visited[s]) return;
    visited[s] = true;
    // process node s
    for (auto u: adj[s]) 
    {
        dfs(u, visited, &adj[n]);
    }
};
    