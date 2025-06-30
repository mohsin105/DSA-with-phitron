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
class Edge
{
    public:
    int u,v;
    long long int c;
    Edge(int u,int v,long long int c)
    {
        this->u=u;
        this->v=v;
        this->c=c;
    }
};
bool cmp(Edge a,Edge b)
{
    if(a.c<b.c) return true;
    else return false;
}
int main()
{
    int n,e;
    cin>>n>>e;
    dsu_intialize(n);
    vector<Edge>edgelist;
    while(e--)
    {
        int u,v;
        long long int c;
        cin>>u>>v>>c;
        //Edge ed(u,v,c);
        edgelist.push_back(Edge(u,v,c));
    }
    sort(edgelist.begin(),edgelist.end(),cmp);
    long long int totalWeight=0;
    int remove=0;
    for(Edge ed:edgelist)
    {
        if(find_leader(ed.u)==find_leader(ed.v))
        {
            remove++;
            continue;
        }
        else
        {
            dsu_union_size(ed.u,ed.v);
            totalWeight=totalWeight+ed.c;
        }
    }
    int allLeader=find_leader(1);
    bool allConnect=true;
    for(int i=1;i<=n;i++)
    {
        //cout<<allLeader<<" "<<i<<"leader "<<find_leader(i)<<endl;
        if(allLeader!=find_leader(i))
        {
            allConnect=false;
        }
    }
    if(allConnect==true) cout<<remove<<" "<<totalWeight;
    else cout<<"Not Possible";
    return 0;
}

/*
5 7
0 1 2
0 2 3
0 3 3
3 4 6
2 4 4
2 1 7
1 4 5
*/