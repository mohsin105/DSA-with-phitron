//problem in bfs function. bfs gets into infinity loop, probably problem with con vector
#include<bits/stdc++.h>
using namespace std;
bool vis[105][105];
int dis[105][105];
vector<pair<int,int>>con={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
int n,m;
bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return false;
    else return true;
}
void bfs(int si,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty())
    {
        pair<int,int>parentP=q.front();
        q.pop();
        int pi=parentP.first;
        int pj=parentP.second;
        //cout<<pi<<" "<<pj<<endl;
        for(int i=0;i<8;i++)
        {
            int ai=pi+con[i].first;
            int aj=pj+con[i].second;
            if(valid(ai,aj)==true && vis[ai][aj]==false)
            {
                q.push({ai,aj});
                vis[ai][aj]==true;
                dis[ai][aj]=dis[pi][pj]+1;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        //int n,m;
        cin>>n>>m;
        int ki,kj,qi,qj;
        cin>>ki>>kj;
        cin>>qi>>qj;
        
        memset(vis,false,sizeof(vis));
        memset(dis,-1,sizeof(dis));
        cout<<ki<<" "<<kj<<endl<<qi<<" "<<qj<<endl;
        bfs(ki,kj);
        
        if(vis[qi][qj]==false) cout<<-1<<endl;
        else cout<<dis[qi][qj]<<endl;
    }
    return 0;
}