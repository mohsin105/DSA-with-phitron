#include<bits/stdc++.h>
using namespace std;
const int N=10e3+5;
char grid[N][N];
bool vis[N][N];
int n,m;
vector<pair<int,int>>con={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return false;
    else return true;
}
int cnt;
void dfs(int si,int sj)
{
    vis[si][sj]=true;
    cnt++;
    for(int i=0;i<4;i++)
    {
        int ai=si+con[i].first;
        int aj=sj+con[i].second;
        if(valid(ai,aj)==true && vis[ai][aj]==false && grid[ai][aj]=='.')
        {
            dfs(ai,aj);
        }
    }
}
int main()
{
    //cout<<600<<endl;
    cin>>n>>m;
    //cout<<500<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    bool component=false;
    int minArea=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='.' && vis[i][j]==false)
            {
                cnt=0;
                dfs(i,j);
                component=true;
                //cout<<cnt<<endl;
                minArea=min(minArea,cnt);
                
            }
        }
    }
    if(component==true) cout<<minArea;
    else cout<<-1;
    return 0;
}