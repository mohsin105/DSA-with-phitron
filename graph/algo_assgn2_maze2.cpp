#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
bool vis[N][N];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
map<pair<int,int>,pair<int,int>>par;
int n,m;
char graph[N][N];
bool valid(int ci,int cj)
{
    if(ci>=0 && ci<n && cj>=0 && cj<m) return true;
    else return false;
}
void bfs(int si,int sj)
{
    vis[si][sj]=true;
    queue<pair<int,int>>q;
    q.push({si,sj});
    while(!q.empty())
    {
        pair<int,int>node=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int ci=node.first+dx[i];
            int cj=node.second+dy[i];
            if(valid(ci,cj) && !vis[ci][cj] && graph[ci][cj] != '#')
            {
                vis[ci][cj]=true;
                q.push({ci,cj});
                par[{ci,cj}]={node.first,node.second};
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    memset(vis,false,sizeof(vis));
    int si,sj,di,dj;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<m;k++)
        {
            cin>>graph[i][k];
            /*if(graph[i][k]='R')
            {
                si=i;
                sj=k;
            }
            else if(graph[i][k]='D')
            {
                di=i;
                dj=k;
            }*/
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<m;k++)
        {
            cout<<graph[i][k];
        }
        cout<<endl;
    }
    //bfs(si,sj);
    cout<<vis[di][dj];
    if(vis[di][dj]=true)
    {
        int xi=di;
        int xj=dj;
        while(true)
        {
            int newXi=par[{xi,xj}].first;
            int newXj=par[{xi,xj}].second;
            xi=newXi;
            xj=newXj;
            if(graph[xi][xj]=='A')
            {
                break;
            }
            graph[xi][xj]='X';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<m;k++)
        {
            cout<<graph[i][k];
        }
        cout<<endl;
    }
    return 0;
}