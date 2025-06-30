#include<bits/stdc++.h>
using namespace std;
char g[20][20];
bool vis[20][20];
vector<pair<int,int>>con={{0,1},{0,-1},{-1,0},{1,0}};
int r,c;//declared here because valid function will use them.
bool valid(int i,int j)
{
    if(i<0 || i>=r || j<0 || j>=c) return false;
    return true;
}
void dfs(int si,int sj)
{
    //work with source
    cout<<si<<" "<<sj<<endl;
    vis[si][sj]=true;
    //call recursion for adjacent nodes
    for(int i=0;i<4;i++)
    {
        int ai=si+con[i].first;
        int aj=sj+con[i].second;
        if(valid(ai,aj)==true && vis[ai][aj]==false)
        {
            dfs(ai,aj);
        }
    }
}
int main()
{
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            //int a,b;
            cin>>g[i][j];
        }
    }
    int si,sj;
    cin>>si>>sj;
    memset(vis,false,sizeof(vis));
    dfs(si,sj);
    return 0;
}
//dfs function prints/traverses through all the nodes of graph. 