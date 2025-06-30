#include<bits/stdc++.h>
using namespace std;
vector<int>adjL[100];
bool vis[100];
void dfs(int src)
{
    cout<<src<<endl;
    vis[src]=true;
    for(int adj:adjL[src])
    {
        if(vis[adj]==false)
        {
            dfs(adj);
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
    dfs(src);
    return 0;
}
/*input graph and src
6 6
0 1
0 2
0 3
1 4
3 5
3 2
0
*/