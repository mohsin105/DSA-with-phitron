#include<bits/stdc++.h>
using namespace std;
vector<int>adjL[100];//adjL array of vector and vis array are declared globally because bfs function needs to access them.
bool vis[100];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        int parent=q.front();
        q.pop();
        //task
        cout<<parent<<endl;
        //enqueueing adjacent nodes
        for(int adj:adjL[parent])
        {
            if(vis[adj]==false)
            {
                q.push(adj);
                vis[adj]=true;
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
    int src;
    cin>>src;
    memset(vis,false,sizeof(vis));
    bfs(src);
    return 0;
}