#include<bits/stdc++.h>
using namespace std;
vector<int>adjL[100];
bool vis[100];
int level[100];
int parA[100];
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
    int src,des;
    cin>>src;
    cin>>des;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parA,-1,sizeof(parA));
    bfs(src);
    int x=des;
    //printign the path in reverse order
    cout<<endl<<endl;
    cout<<parA[0];
    /*while(x!=-1)
    {
        cout<<x<<" ";
        x=par[x];
    }*/
    return 0;
}