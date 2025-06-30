#include<bits/stdc++.h>
using namespace std;
char g[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>co={{0,1},{0,-1},{-1,0},{1,0}};
vector<int>v;
int r,c;
bool valid(int i,int j)
{
    if(g[i][j]=='#' || i<0 || i>=r || j<0 || j>=c) return false;
    return true;
}
void bfs(int si,int sj)
{
    int room=0;
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    room++;
    while(!q.empty())
    {
        pair<int,int>p=q.front();
        q.pop();
        int pi=p.first;
        int pj=p.second;
        //task with popped front
        //cout<<pi<<" "<<pj<<endl;
        //enqueing adjacent nodes
        for(int i=0;i<4;i++)
        {
            int ai=pi+co[i].first;
            int aj=pj+co[i].second;
            if(valid(ai,aj)==true && vis[ai][aj]==false)
            {
                q.push({ai,aj});
                vis[ai][aj]=true;
                room++;
            }
        }
    }
    v.push_back(room);
}
int main()
{
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>g[i][j];
        }
    }
    /*int si,sj;
    cin>>si>>sj;*/
    memset(vis,false,sizeof(vis));
    //int flag=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;i<c;j++)
        {
            if(g[i][j]=='.' && vis[i][j]==false)
            {
                bfs(i,j);
                //flag=1;
            }
        }
    }
    if(v.empty()==true) cout<<0;
    else 
    {
        sort(v.begin(),v.end());
        for(int num:v)
        {
            cout<<num<<" ";
        }
    }
    
    //bfs(si,sj);
    return 0;
}