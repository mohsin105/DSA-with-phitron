#include<bits/stdc++.h>
using namespace std;
char g[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>con={{0,1},{0,-1},{-1,0},{1,0}};
int r,c;//declared here because valid function will use them.
bool valid(int i,int j)
{
    if(g[i][j]=='#' || i<0 || i>=r || j<0 || j>=c) return false;
    return true;
}
void dfs(int si,int sj)
{
    //work with source
    vis[si][sj]=true;
    //if(g[si][sj]=='B') return true;
    //cout<<si<<" "<<sj<<endl;
    //call recursion for adjacent nodes
    for(int i=0;i<4;i++)
    {
        int ai=si+con[i].first;
        int aj=sj+con[i].second;
        if(valid(ai,aj)==true && vis[ai][aj]==false)
        {
            dfs(ai,aj);
        }
    }
}
int main()
{
    cin>>r>>c;
    int bi,bj,ei,ej;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            //int a,b;
            cin>>g[i][j];
            if(g[i][j]=='A') 
            {
                bi=i;
                bj=j;
            }
            else if(g[i][j]=='B')
            {
                ei=i;
                ej=j;
            }
        }
    }
    //int si,sj;
    //cin>>si>>sj;
    //cout<<"position of A: "<<bi<<" "<<bj<<endl<<"position of B: "<<ei<<" "<<ej<<endl;
    memset(vis,false,sizeof(vis));
    dfs(bi,bj);
    if(vis[ei][ej]==true) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
//dfs function prints/traverses through all the nodes of graph. 