#include<bits/stdc++.h>
using namespace std;

const int N=10e5+5;
int parentA[N];
int grp_sz[N];

void dsu_intialize(int n)
{
    for(int i=0;i<=n;i++)
    {
        parentA[i]=-1;
        grp_sz[i]=1;
    }
}
int find_leader(int node1)
{
    if(parentA[node1]==-1) return node1;
    int l=find_leader(parentA[node1]);
    parentA[node1]=l;
    return l;
}
void dsu_union_size(int node1,int node2)
{
    int leaderA=find_leader(node1);
    int leaderB=find_leader(node2);
    if(grp_sz[leaderA]>grp_sz[leaderB])
    {
        parentA[leaderB]=leaderA;
        grp_sz[leaderA]=grp_sz[leaderA]+grp_sz[leaderB];
    }
    else 
    {
        parentA[leaderA]=leaderB;
        grp_sz[leaderB]+=grp_sz[leaderA];
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    dsu_intialize(n);
    vector<pair<int,int>>edgelist;
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        //Edge ed(u,v,c);
        edgelist.push_back({u,v});
        //edgelist.push_back({v,u});
    }
    //sort(edgelist.begin(),edgelist.end(),cmp);
    int cycleEdge=0;
    for(pair<int,int> ed:edgelist)
    {
        if(find_leader(ed.first)==find_leader(ed.second))
        {
            cycleEdge++;
            continue;
        }
        else
        {
            dsu_union_size(ed.first,ed.second);
            //totalWeight=totalWeight+ed.c;
        }
    }
    cout<<cycleEdge;
    return 0;
}