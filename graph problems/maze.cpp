//bfs on 2d functional code
#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>con={{0,1},{0,-1},{-1,0},{1,0}};
//map
map<pair<int,int>,pair<int,int>>par;
int n,m;
bool valid(int ai,int ak)
{
    if(ai<0 || ai>=n || ak<0 || ak>=m) return false;
    else return true;
}
void bfs(int si,int sk)
{
    queue<pair<int,int>>q;
    q.push({si,sk});
    vis[si][sk]=true;
    //cout<<vis[si][sk]<<endl;
    while(!q.empty())
    {
        pair<int,int>node=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int ai=node.first+con[i].first;
            int ak=node.second+con[i].second;
            //cout<<"adjacent of "<<node.first<<" "<<node.second<<" "<<ai<<" "<<ak<<endl;
            if(valid(ai,ak)==true && vis[ai][ak]==false && grid[ai][ak]!='#' )
            {
                q.push({ai,ak});
                //bfs(ai,ak);
                vis[ai][ak]=true;
                //parent track using map
                par[{ai,ak}]={node.first,node.second};
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    int si,sk,di,dk;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<m;k++)
        {
            cin>>grid[i][k];
            if(grid[i][k]=='R') 
            {
                si=i;
                sk=k;
            }
            if(grid[i][k]=='D') 
            {
                di=i;
                dk=k;
            }
        }
    }
    memset(vis,false,sizeof(vis));
    /*for(int i=0;i<n;i++)
    {
        for(int k=0;k<m;k++)
        {
            cout<<grid[i][k];
        }
        cout<<endl;
    }*/
    bfs(si,sk);
    //cout<<si<<" "<<sk<<endl<<di<<" "<<dk<<endl;
    //cout<<vis[di][dk]<<endl;
    if(vis[di][dk]==true)
    {
        //cout<<"path:\n";
        int xi=di;
        int xk=dk;
        while(true)
        {
            int newXi=par[{xi,xk}].first;
            int newXk=par[{xi,xk}].second;
            xi=newXi;
            xk=newXk;
            //cout<<xi<<" "<<xk<<endl;
            if(grid[xi][xk]=='R') break;
            grid[xi][xk]='X';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<m;k++)
        {
            cout<<grid[i][k];
        }
        cout<<endl;
    }
    //cout<<vis[si][sk];
    return 0;
}