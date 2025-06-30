//accepted Alhamdulillah
#include<bits/stdc++.h>
using namespace std;
char gr[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>con={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
bool valid(int i,int j)
{
    if(gr[i][j]=='-' || i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}
void dfs(int si,int sj)
{
    //work with source
    //cout<<si<<" "<<sj<<endl;
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
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>gr[i][j];
        }
    }
    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    memset(vis,false,sizeof(vis));
    if(gr[si][sj]=='-') cout<<"NO";
    else 
    {
        dfs(si,sj);
        if(vis[di][dj]==true) cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}