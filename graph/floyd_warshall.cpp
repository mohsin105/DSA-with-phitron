#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,e;
    cin>>n>>e;
    long long int adjM[n][n];
    //presetting all entries of adjacency matrix(which actually means distance in this case) to infinity, and node to itself is 0
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            adjM[i][j]=INT_MAX;
            if(i==j) adjM[i][j]=0;
        }
    }
    //taking input of a directed weighted graph using adjacency matrix. each edge has three property, starting node, ending node and weight(distance from u to v)
    while(e--)
    {
        int u,v,c;
        cin>>u>>v>>c;
        adjM[u][v]=c;
    }
    cout<<"before floyd warshall: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(adjM[i][j]==INT_MAX) cout<<"INF ";
            else cout<<adjM[i][j]<<" ";
        }
        cout<<endl;
    }
    //floyd warshall algorithm
    
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(adjM[i][k]+adjM[k][j]<adjM[i][j])
                {
                    adjM[i][j]=adjM[i][k]+adjM[j][k];
                }
            }
        }
    }
    cout<<"\n After floyd warshal algorithm:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(adjM[i][j]==INT_MAX) cout<<"INF ";
            else cout<<adjM[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}