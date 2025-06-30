#include<bits/stdc++.h>
using namespace std;
const int N=1005;
char grid[N][N];
bool vis[N][N];
map<pair<int,int>,pair<int,int>>parent;
//int parentA[N][N];
vector<pair<int,int>>con={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 ||j>=m) return false;
    else return true;
}
void bfs(int si,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    while(!q.empty())
    {
        pair<int,int>parentP=q.front();
        q.pop();
        //int pi=parentP.first;
        //int pj=parentP.second;
        for(int i=0;i<4;i++)
        {
            int ai=parentP.first+con[i].first;
            int aj=parentP.second+con[i].second;
            //int aj=pj+con[i].second;
            if(valid(ai,aj)==true && vis[ai][aj]=false && grid[ai][aj] != '#')
            {
                q.push({ai,aj});
                vis[ai][aj]=true;
                //parentA[ai][aj]=
                parent[{ai,aj}]={parentP.first,parentP.second};
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    int si,sj,di,dj;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='R')
            {
                si=i;
                sj=j;
            }
            if(grid[i][j]=='D')
            {
                di=i;
                dj=j;
            }
        }
    }
    memset(vis,false,sizeof(vis));
    bfs(si,sj);
    if(vis[di][dj]==true)
    {
        int xi=di;
        int xj=dj;
        while(true)
        {
            int newxi=parent[{xi,xj}].first;
            int newxj=parent[{xi,xj}].second;
            xi=newxi;
            xj=newxj;
            if(grid[xi][xj]='R')
            {
                break;
            }
            grid[xi][xj]='X';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}