#include<bits/stdc++.h>
using namespace std;
const int N=10e5+5;
bool vis[N];
int level[N];
int n,e,cnt;
vector<int>adjL[N];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        int parentN=q.front();
        q.pop();
        for(int adjN:adjL[parentN])
        {
            if(vis[adjN]==false)
            {
                q.push(adjN);
                vis[adjN]=true;
                level[adjN]=level[parentN]+1;
                cnt++;
            }
        }
    }
    
}
int main()
{
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adjL[a].push_back(b);
        adjL[b].push_back(a);
    }
    int x,y,k;
    cin>>x>>y>>k;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    cnt=0;
    bfs(x);
    if(level[y]==-1) cout<<"NO"; //node is unvisited and disconnected
    else if(level[y]%2==0)
    {
        cout<<level[y]/2<<endl;
        if((level[y]/2)>k) cout<<"NO";
        else cout<<"YES";
    }
    else
    {
        cout<<(level[y]/2)+1<<endl;
        if((level[y]/2)+1>k) cout<<"NO";
        else cout<<"YES";
    }
    cout<<endl<<vis[y]<<endl;
    cout<<endl<<level[y]<<endl;
    //cout<<(cnt/2)+1<<endl;
    //if((cnt/2)>=k) cout<<"NO";
    //else cout<<"YES";
    return 0;
}