#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    int mat[n][n];
    vector<int>adjL[n];
    memset(mat,0,sizeof(mat));
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        //adjacency matrix entry
        mat[a][b]=1;
        mat[b][a]=1;
        //adjacency list entry
        adjL[a].push_back(b);
        adjL[b].push_back(a);
    }
    cout<<"\nAdjacency matrix representation of the graph:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nAdjacency list of the graph nodes:\n";
    for(int i=0;i<n;i++)//for each node
    {
        cout<<"\nAdjacency list of "<<i<<": ";
        for(int x:adjL[i])//access the the adjacency list vector of that node
        {
            cout<<x<<" ";
        }
    } 
    return 0;
}