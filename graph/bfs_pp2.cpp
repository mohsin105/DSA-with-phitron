#include<bits/stdc++.h>
using namespace std;
vector<int>adjL[100];//adjL array of vector and vis array are declared globally because bfs function needs to access them.
bool vis[100];//to keep track whether the node is visited or not
int level[100];//keeping track of nodes. initially all are -1
//int parentA[100];//keeping track of parent nodes(meaning,previous nodes) of each nodes
                //initally all are -1
vector<int>l;
void bfs(int src,int lev)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;//src is set on 0, no need update parentA because src has no parent
    while(!q.empty())
    {
        int parent=q.front();
        q.pop();
        //task
        if(level[parent]==lev) l.push_back(parent);
        //cout<<parent<<" level: "<<level[parent]<<endl;
        //enqueueing adjacent nodes
        for(int adj:adjL[parent])
        {
            if(vis[adj]==false)
            {
                q.push(adj);
                vis[adj]=true;
                level[adj]=level[parent]+1;
                //parentA[adj]=parent;
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
    int lev;
    cin>>lev;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    //memset(parentA,-1,sizeof(parentA));
    bfs(0,lev);
    for(int n:l)
    {
        cout<<n<<" ";
    }
    //cout<<parentA[0]<<endl;
    //int x=des;
    return 0;
}