#include<bits/stdc++.h>
using namespace std;
vector<int>adjL[100];
bool vis[100];
int level[100];
int parA[100];
int val[1000];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]==true;
    level[src]=0;
    while(!q.empty())
    {
        int parN=q.front();
        q.pop();
        cout<<parN<<" level: "<<level[parN]<<endl;
        for(int adj:adjL[parN])
        {
            if(vis[adj]==false)
            {
                q.push(adj);
                vis[adj]=true;
                level[adj]=level[parN]+1;
                parA[adj]=parN;
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adjL[a].push_back(b);
        adjL[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parA,-1,sizeof(parA));
    memset(val,0,sizeof(val));
    string op;
    cin>>op;
    if(op=="insert")
    {
        int u,x;
        cin>>u>>x;
        val[u]=x;
    }
    else if(op=="find")
    {
        int u,v,k;
        cin>>u>>v>>k;
        bfs(u);
        int x=v;
        //printign the path in reverse order
        //cout<<endl<<endl;
        vector<int>v;
        //cout<<parA[0];
        while(x!=-1)
        {
            v.push_back(x);
         //cout<<x<<" ";
            x=parA[x];
        }
    }
    else if(op=="delete")
    {
        int u,x;
        cin>>u>>x;
        if(val[u]>=x) val[u]-=x;
    }
    
    return 0;
}