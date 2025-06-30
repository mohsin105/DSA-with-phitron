#include<bits/stdc++.h>
using namespace std;
vector<int> adjL[1005];
bool vis[1005];
int parentA[1005];
bool ans;
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        int parentN=q.front();
        q.pop();
        cout<<parentN<<" ";
        for(int adjN:adjL[parentN])
        {
            if(parentA[parentN]!=adjN)
            {
                ans=true;
            }
            if(vis[adjN]==false)
            {
                vis[adjN]=true;
                q.push(adjN);
                parentA[adjN]=parentN;
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
    memset(parentA,-1,sizeof(parentA));
    //int src;
    //cin>>src;
    int cnt=0;
    ans=false;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            bfs(i);
            cnt++;
        }
    }
    cout<<"\ncomponent: "<<cnt<<endl;
    if(ans==true) cout<<"\ncycle exist\n";
    else if(ans==false) cout<<"\ncycle not detected\n";
    return 0;
}