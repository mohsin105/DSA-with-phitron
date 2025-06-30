#include<bits/stdc++.h>
using namespace std;
const int N=10e5+5;
int parentA[N];
int grp_size[N];
void dsu_intialize(int n)
{
    for(int i=0;i<n;i++)
    {
        parentA[i]=-1;
        grp_size[i]=1;
    }
}
int find_leader(int node)
{
    if(parentA[node]==-1) return node;
    int l=find_leader(parentA[node]);
    parentA[node]=l;
    return l;
}
void dsu_union_size(int node1,int node2)
{
    //find the leaders of nodes
    int leaderA=find_leader(node1);
    int leaderB=find_leader(node2);
    //compare group size of leaders
    if(grp_size[leaderA]>grp_size[leaderB])
    {
        parentA[leaderB]=leaderA;
        grp_size[leaderA]=grp_size[leaderA]+grp_size[leaderB];
    }
    else //if leaderB grp size is bigger or equal  
    {
        parentA[leaderA]=leaderB;
        grp_size[leaderB]=grp_size[leaderB]+grp_size[leaderA];
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    dsu_intialize(n);
    bool cycle=false;
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        if(find_leader(u)!=find_leader(v))
        {
            dsu_union_size(u,v);
        }
        else
        {
            cycle=true;
        }
    }
    if(cycle==true) cout<<"cycle detected";
    else cout<<"cycle not detected";
    return 0;
}

/*
6 6
0 1
0 2
0 3
3 4
3 5
4 5
*/