#include<bits/stdc++.h>
using namespace std;
vector<int>adjL[1005];
bool vis[1005];
bool pathvisit[1005];
bool ans;
void dfs(int src)
{
    vis[src]=true;
    pathvisit[src]=true;
    cout<<src<<" ";
    for(int adjN: adjL[src])
    {
        if(pathvisit[adjN]==true)
        {
            ans=true;
        }
        if(vis[adjN]==false)
        {
            dfs(adjN);
        }
    }
    pathvisit[src]=false;
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adjL[a].push_back(b);//directed graph
    }
    memset(vis,false,sizeof(vis));
    memset(pathvisit,false,sizeof(pathvisit));
    ans=false;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            dfs(i);
        }
    }
    if(ans==true) cout<<"\ncycle detected\n";
    else if(ans==false) cout<<"\n cycle not detected\n";
    return 0;
}